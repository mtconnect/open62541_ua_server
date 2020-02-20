#ifndef WORKER_H
#define WORKER_H

#include <string>

#include "httpreader.h"
#include "settings.h"
#include "agenthandler.h"

class Worker final: public HttpReader
{
private:
    Settings *m_settings;
    Settings m_itemManager;
    agentHandler    m_handler;
    UA_Server *m_uaServer;
    UA_NodeId m_topNode;
    int    m_namespace;

    string      m_uri;
    int         m_interval;
    int         m_initialWaitTime;
    int         m_processedMsg;
    string      m_next_sequence;

public:
    Worker();

    bool setup(UA_Server *uaServer, UA_NodeId topNode, string uri, string interval,
               string initialWaitTime,
               string warningEventSeverity,
               string faultEventSeverity);
    bool setMetaInfo();
    void readCurrentData();

    void run();

    void onRead(string xmlData);
};

#endif // WORKER_H
