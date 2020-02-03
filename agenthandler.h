#ifndef AGENTHANDLER_H
#define AGENTHANDLER_H

#include <boost/property_tree/ptree.hpp>

#include <string>
#include <iostream>
#include <set>

#include "types_mgr.h"
#include "settings.h"
#include "util.h"

using namespace std;
using boost::property_tree::ptree;

class agentHandler
{
private:
    UA_Server *m_uaServer;
    Settings m_settings;
    UA_NodeId m_topNode;

    ptree m_ptree;
    string m_xml;
    map<string, int> m_ids;
    map<string, UA_Int16> m_lastSeverity;
    map<string, string> m_eventSequenceNums;
    map<string, string> m_messageSequenceNums;
    map<string, UA_NodeId> m_eventNodes;
    map<string, UA_NodeId> m_messageNodes;

    map<string, UA_NodeId> m_eventTypes;
    map<string, UA_NodeId> m_fieldDataTypes;

    UA_UInt16 m_namespace;
    TypesMgr m_typesMgr;

public:
    agentHandler();
    ~agentHandler();


private:

    void processDeviceMetaInfo(string deviceUUID, UA_NodeId &topNode, ptree &ptree, string path, vector<UA_NodeId> &nodePath);
    UA_NodeId addDeviceDataItem(string deviceUUID, UA_NodeId &topNode, ptree &dataItem, multiset<string> &appendName, string path,
                                vector<UA_NodeId> &nodePath, map< string, string > &compositionIdMap);
    void setProperties(UA_NodeId &topNode, ptree &dataItem);

    int processDeviceStreamData(const string &deviceName, const string &deviceUUID, const string &componentId, const string &levelName, ptree &pt);
    void processMessageStream(string deviceName, string componentId, string variable, string dateTime, string message, ptree& pt);
    void processConditionStream(string deviceName, string componentId, string variable, string dateTime, string state, string message, ptree& pt);
    void sendConditionEvent(UA_NodeId &eventNodeId, string deviceName, string componentId, string variable, string nativeCode, string dateTime, string state, string message);

    void updateData(string variable, string dateTime, string data, ptree &pt);
    bool lookupChildNodeId(UA_NodeId &parentNode, UA_NodeId referenceType,
                const UA_QualifiedName targetName, UA_NodeId *result);

    void getEventTypes(UA_NodeId eventRootnode, UA_NodeId eventTypeNode, map<string, UA_NodeId> &results);
    UA_NodeId addCustomPropertyWithData(UA_NodeId parentNode, string propertyName, string value);
    UA_NodeId addCustomProperty(UA_NodeId parentNode, string propertyName, UA_NodeId dataType);

    void addNotifier(UA_NodeId targetNode, UA_NodeId srcNode, bool setSrcNotifier);
    void addNotifierToAll(vector<UA_NodeId> & nodePath);
    void addMTClassReferences(UA_NodeId nextId, UA_UInt32 classParentId, string displayName, string subType);

    void setMTTypeNameAndId(UA_NodeId &nextId, string type, string id);
    void researchDisplayNames(ptree &pt, multiset<string> &appendBy);

public:
    void setup(UA_Server *uaServer, UA_NodeId topNode, int ns);
    void processProbeInfo(string probeXml);
    bool parseStreamData(string xmlText);
    int processStreamData();

    string getJSON_data(string path) { return util::getJSON_data(m_ptree, path); }
};

#endif // AGENTHANDLER_H
