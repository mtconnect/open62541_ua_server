#include <signal.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/types.h>
#include <open62541/types_generated_handling.h>

#include <boost/thread.hpp>
#include <boost/tokenizer.hpp>
#include <boost/filesystem.hpp>

#include "worker.h"
#include "nodeset.h"
#include "mtconnect_ids.h"
#include "types_mtconnect_generated.h"

using namespace boost;

static Settings settings;
static string settingsName;

static Worker *createWorker(UA_Server *server, UA_NodeId &nodeId, string uri, string poll)
{
    Worker *worker = new Worker();

    if (!worker->setup(server, nodeId, &settings, uri, poll))
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

    // settingsName = Settings::getSettingsName("OPCUA-MTServer");
    // settings.restore(settingsName);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config);

    config->customDataTypes = &customTypesArray;

    if (nodeset(server) != UA_STATUSCODE_GOOD) {
        util::log_error("Could not add the nodeset. Check previous output for any error.");
        return -1;
    }


    UA_NodeId topId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    vector<Worker*> worker_pool;
    vector<thread*> thread_pool;

    boost::thread *bthread = nullptr;
    if (argc != 2)
    {
        string uri = argv[1];
        string poll = argc > 2 ? argv[2] : "60";

        Worker *worker = createWorker(server, topId, uri, poll);

        if (worker == nullptr)
            return -1;

        worker_pool.push_back(worker);

        bthread = new boost::thread(boost::bind(&Worker::run, worker));

        thread_pool.push_back(bthread);
    }
    else {

        ifstream in(argv[1]);
        if (!in.is_open()) {
            std::cerr << "Cannot open config file " << argv[1] << "!" << endl;
            return -1;
        }

        typedef tokenizer< escaped_list_separator<char> > Tokenizer;
        vector< string > vec;
        string line;

        while (getline(in, line))
        {
            Tokenizer tok(line);
            vec.assign(tok.begin(), tok.end());

            unsigned long argc = vec.size();

            // empty line
            if (argc == 0)
                continue;

            if (argc != 1 && argc != 2)
            {
                std::cerr << "Invalid input [" << line << "]" << endl;
                return -1;
            }

            string uri = vec[0];
            if (uri[0] == '#')
                continue;

            string poll = argc > 1 ? vec[1] : "60";

            Worker *worker = createWorker(server, topId, uri, poll);

            if (worker == nullptr)
                continue;

            worker_pool.push_back(worker);

            bthread = new boost::thread(boost::bind(&Worker::run, worker));

            thread_pool.push_back(bthread);
        }
    }

    if (worker_pool.size() == 0)
        return -1;

    // settings.save(settingsName);
    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);

    for (size_t i=0; i<thread_pool.size(); i++)
        delete thread_pool[i];

    for (size_t i=0; i<worker_pool.size(); i++)
        delete worker_pool[i];

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
