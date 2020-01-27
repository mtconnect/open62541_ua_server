#include <stdlib.h>

#include <open62541/server.h>

#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/thread/thread.hpp>
#include <boost/chrono.hpp>
#include <boost/filesystem.hpp>

#include "httpreader.h"
#include "agenthandler.h"
#include "worker.h"

Worker::Worker()
{
    m_interval = 60;
    m_poll_count = 0;
}

Worker::~Worker()
{
    m_reader.close();
}

bool Worker::setup(UA_Server *uaServer, UA_NodeId topNode, Settings *settings, string uri, string interval)
{
    m_uri = uri;
    m_settings = settings;
    m_uaServer = uaServer;
    m_topNode = topNode;

    m_interval = atoi(interval.c_str());
    if (m_interval <= 0) {
        util::log_error("interval [%s] is invalid", interval.c_str());
        return false;
    }

    m_namespace = UA_Server_addNamespace(m_uaServer, uri.c_str());

    util::log_info("Agent Uri:       %s", uri.c_str());
    util::log_info("Poll Interval:   %s", interval.c_str());
    util::log_info("namespace:       %d", m_namespace);

    m_handler.setup(m_uaServer, m_topNode, m_namespace);
    if (m_reader.parseUri(uri))
        return setMetaInfo();

    return false;
}

bool Worker::setMetaInfo()
{
    m_reader.setQuery("/probe");
    string probeXml = m_reader.read();
    if (probeXml.length() == 0)
    {
        util::log_error("No data!");
        return false;
    }

    m_handler.processProbeInfo(probeXml);
    m_reader.close();
    return true;
}

void Worker::run()
{
    while (true)
    {
        poll();
        boost::this_thread::sleep_for( boost::chrono::seconds(m_interval) );
    }
}

void Worker::poll()
{
    m_poll_count++;

    if (m_next_sequence.length() == 0)
        m_reader.setQuery("/current");
    else
        m_reader.setQuery("/sample?count=10000&from="+m_next_sequence);

    string xmlData = m_reader.read();

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
        util::log_info("%s [round: %d] next sequence = %s, process items = 0",
                     m_uri.c_str(), m_poll_count, m_next_sequence.c_str());
        return;
    }

    if (sequence.length() == 0)
    {
        // last next_sequence may be invalid, reset to using "current" to fetch the latest data
        util::log_warn("%s [round: %d] BAD sequence number, reset to fetch current data",
                     m_uri.c_str(), m_poll_count);
        m_next_sequence = "";
        return;
    }

    int processCount = m_handler.processStreamData();
    m_next_sequence = sequence;
    util::log_info("%s [round: %d] next sequence = %s, process items = %d",
                 m_uri.c_str(), m_poll_count, m_next_sequence.c_str(), processCount);
}

