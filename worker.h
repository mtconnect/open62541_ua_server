#ifndef WORKER_H
#define WORKER_H

#include <string>

#include "httpreader.h"
#include "settings.h"
#include "agenthandler.h"

class Worker
{
private:
    Settings *m_settings;
    Settings m_itemManager;
    HttpReader  m_reader;
    agentHandler    m_handler;
    UA_Server *m_uaServer;
    UA_NodeId m_topNode;
    int    m_namespace;


    string      m_uri;
    int         m_interval;
    int         m_poll_count;
    string      m_next_sequence;

public:
    Worker();
    ~Worker();

    bool setup(UA_Server *uaServer, UA_NodeId topNode, string uri, string interval);
    bool setMetaInfo();

    void run();
    void poll();
};

#endif // WORKER_H
