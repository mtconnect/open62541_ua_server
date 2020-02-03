#include <signal.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/types.h>
#include <open62541/types_generated_handling.h>

#include <boost/thread.hpp>

#include "worker.h"
#include "nodeset.h"
#include "mtconnect_ids.h"
#include "types_mtconnect_generated.h"

using namespace boost;

#define MT_PROGRAM_NAME "open62541-based MTConnect Gateway"

static Worker *createWorker(UA_Server *server, UA_NodeId &nodeId, string uri, string poll)
{
    Worker *worker = new Worker();

    if (!worker->setup(server, nodeId, uri, poll))
        return nullptr;

    return worker;
}


static volatile UA_Boolean running = true;
static void stopHandler(int sig)
{
    util::log_info("received ctrl-c");
    running = false;
}


static UA_DataTypeArray customTypesArray =
{
    nullptr,
    UA_TYPES_MTCONNECT_COUNT,
    UA_TYPES_MTCONNECT
};

int main(int argc, char** argv)
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    // Check command line arguments.
    if (argc < 2 || argc > 3)
    {
        std::cerr <<
            "Usage: " << endl <<
            "    OPCUA-MTServer <uri> <poll cycle in seconds>" << endl <<
            "Example:" << endl <<
            "    OPCUA-MTServer https://smstestbed.nist.gov/vds 60" << endl <<
            "or" << endl <<
            "    OPCUA-MTServer <config file>" << endl;
        return -1;
    }

    Settings &settings = util::getSettings();

    if (argc == 2)
        settings.parse(argv[1]);
    else
    {
        string uri = argv[1];
        string poll = argv[2];

        settings.set("agents|url1", uri);
        settings.set("agents|freq1", poll);
    }

    string port = settings.get("server|port", "4840");

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, atoi(port.c_str()), nullptr);

    string programName = settings.get("server|name", MT_PROGRAM_NAME);

    // change the application name to MTConnect specific
    config->applicationDescription.applicationName = UA_LOCALIZEDTEXT_ALLOC("en", programName.c_str());

    for (size_t i=0; i < config->endpointsSize; i++)
        config->endpoints[i].server.applicationName = UA_LOCALIZEDTEXT_ALLOC("en", programName.c_str());

    config->customDataTypes = &customTypesArray;

    if (nodeset(server) != UA_STATUSCODE_GOOD) {
        util::log_error("Could not add the nodeset. Check previous output for any error.");
        return -1;
    }


    UA_NodeId topId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    vector<Worker*> worker_pool;
    vector<thread*> thread_pool;

    boost::thread *bthread = nullptr;    

    int index=1;
    while (true)
    {
        string key = "agents|url" + to_string(index);
        string uri = settings.get("agents|url" + to_string(index), "");
        if (uri.length() == 0)
            break;

        string poll = settings.get("agents|freq" + to_string(index), "60");

        Worker *worker = createWorker(server, topId, uri, poll);

        if (worker == nullptr)
            continue;

        worker_pool.push_back(worker);

        bthread = new boost::thread(boost::bind(&Worker::run, worker));

        thread_pool.push_back(bthread);

        index++;
    }

    if (worker_pool.size() == 0)
        return -1;

    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);

    for (size_t i=0; i<thread_pool.size(); i++)
        delete thread_pool[i];

    for (size_t i=0; i<worker_pool.size(); i++)
        delete worker_pool[i];

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
