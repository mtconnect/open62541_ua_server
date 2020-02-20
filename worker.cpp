#include <stdlib.h>

#include <open62541/server.h>

#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/filesystem.hpp>

#include "httpreader.h"
#include "agenthandler.h"
#include "worker.h"

Worker::Worker()
{
    m_initialWaitTime = 60;
    m_processedMsg = 0;
}

bool Worker::setup(UA_Server *uaServer, UA_NodeId topNode, string uri, string interval,
                   string initialWaitTime,
                   string warningEventSeverity,
                   string faultEventSeverity)
{
    m_uri = uri;
    m_uaServer = uaServer;
    m_topNode = topNode;

    m_interval = atoi(interval.c_str());
    if (m_interval <= 0) {
        util::log_error("[%s] interval [%s] is invalid", uri.c_str(), interval.c_str());
        return false;
    }

    m_initialWaitTime = atoi(initialWaitTime.c_str());
    if (m_initialWaitTime <= 0)
        m_initialWaitTime = 10;

    int warningSeverity = atoi(warningEventSeverity.c_str());
    if (warningSeverity <= 0)
        warningSeverity = 500;

    int faultSeverity = atoi(faultEventSeverity.c_str());
    if (faultSeverity <= 0)
        faultSeverity = 1000;

    m_namespace = UA_Server_addNamespace(m_uaServer, uri.c_str());

    util::log("Agent Uri:       %s", uri.c_str());
    util::log("Poll Interval:   %d", m_interval);
    util::log("namespace:       %d", m_namespace);

    m_handler.setup(m_uaServer, m_topNode, m_namespace, warningSeverity, faultSeverity);
    return parseUri(uri);
}

bool Worker::setMetaInfo()
{
    setQuery("/probe");
    processQuery();

    string probeXml = getXmlData();
    m_handler.processProbeInfo(probeXml);
    return true;
}

void Worker::readCurrentData()
{
    // read current data
    setQuery("/current");
    while (processQuery() == false) // synchronized read
    {
        // error, sleep and retry
        util::sleep(1);
    }
    string xml = getXmlData();
    onRead(xml);
}

void Worker::run()
{
    if (!setMetaInfo())
        return;

    // wait to allow OPC UA clients to reconnect
    util::sleep(m_initialWaitTime);
    readCurrentData();

    while (true)
    {      
        setQuery("/sample?interval=" + std::to_string(m_interval*1000) + "&from=" + m_next_sequence);
        processStream(); // stream data

        // sleep and retry
        util::sleep(1);
    }
}


void Worker::onRead(string xmlData)
{
    m_processedMsg++;

    if (xmlData.length() == 0)
    {
        util::log_error("No data!");
        return;
    }

    try {
        m_handler.parseStreamData(xmlData);
    }
    catch (exception & e)
    {
        util::log_error("%s", e.what());
        return;
    }

    // don't output if data has not changed
    string sequence = m_handler.getJSON_data("MTConnectStreams.Header.<xmlattr>.nextSequence");
    if (sequence.compare(m_next_sequence) == 0)
    {
        if (sequence.length() > 0)
            util::log_debug("%s [#%d] next sequence = %s No data changes",
                         m_uri.c_str(), m_processedMsg, m_next_sequence.c_str());
        return;
    }

    if (sequence.length() == 0)
    {
        // last next_sequence may be invalid, reset to using "current" to fetch the latest data
        util::log_warn("%s [#%d] BAD sequence number, reset to fetch current data",
                     m_uri.c_str(), m_processedMsg);
        m_next_sequence = "";
        return;
    }

    int processCount = m_handler.processStreamData();

    m_next_sequence = sequence;  
    util::log_debug("%s [#%d] next sequence = %s, processed items = %d",
                 m_uri.c_str(), m_processedMsg, m_next_sequence.c_str(), processCount);
}

