#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>
#include <open62541/types.h>

#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/filesystem.hpp>
#include <boost/thread/mutex.hpp>

#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <map>
#include <ctype.h>

#include "agenthandler.h"
#include "settings.h"
#include "mtconnect_ids.h"
#include "mteuInfo.h"
#include "util.h"
#include "types_mtconnect_generated.h"

#include <time.h>
#include <iomanip>
#include <sstream>

namespace fs = boost::filesystem;

static boost::mutex open62541_mutex;

agentHandler::agentHandler()
{
    m_uaServer = nullptr;
    m_warningEventSeverity = 500;
    m_faultEventSeverity = 1000;
}

agentHandler::~agentHandler()
{
}

void agentHandler::setup(UA_Server *uaServer, UA_NodeId topNode, int ns,
                         int warningEventSeverity,
                         int faultEventSeverity)
{
    m_uaServer = uaServer;
    m_topNode = topNode;
    m_namespace = ns;

    m_warningEventSeverity = warningEventSeverity;
    m_faultEventSeverity = faultEventSeverity;

    m_typesMgr.setup(uaServer);

    getEventTypes(UA_NODEID_NUMERIC(2, MT_MTCONTROLLEDVOCABEVENTCLASSTYPE),
                  UA_NODEID_NUMERIC(2, MT_MTCONTROLLEDVOCABEVENTTYPE), m_eventTypes);

    getEventTypes(UA_NODEID_NUMERIC(2, MT_MTSTRINGEVENTCLASSTYPE),
                  UA_NODEID_NUMERIC(2, MT_MTSTRINGEVENTTYPE), m_eventTypes);

    getEventTypes(UA_NODEID_NUMERIC(2, MT_MTNUMERICEVENTCLASSTYPE),
                  UA_NODEID_NUMERIC(2, MT_MTNUMERICEVENTTYPE), m_eventTypes);
}

void agentHandler::processProbeInfo(string probeXml)
{
    ptree probeInfo;
    try {
         // Read the stringstream into a Boost property tree, m_ptree
        istringstream iss;
        iss.str (probeXml);

        boost::property_tree::read_xml( iss, probeInfo );
    }
    catch (exception & e)
    {
        util::log_error("%s", e.what());
        return;
    }

    open62541_mutex.lock();
    ptree& devices = probeInfo.get_child("MTConnectDevices.Devices");
    for (ptree::iterator pos = devices.begin(); pos != devices.end(); pos++)
    {
        ptree& device = pos->second;

        string deviceName = util::getJSON_data(device, "<xmlattr>.name");
        string deviceUUID = util::getJSON_data(device, "<xmlattr>.uuid");
        string deviceId = util::getJSON_data(device, "<xmlattr>.id");
        string description = util::getJSON_data(device, "Description");
        string displayName = deviceName + " [" + deviceUUID + "]";

        UA_NodeId deviceNodeId; /* get the nodeid assigned by the server */
        UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
        oAttr.displayName = util::toUALocalizedText(deviceName);

        VerifyReturn(UA_Server_addObjectNode(m_uaServer, UA_NODEID_NUMERIC(m_namespace, 0),
                                m_topNode,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                util::toUAQualifiedName(m_namespace, deviceName),
                                UA_NODEID_NUMERIC(2, MT_MTDEVICETYPE),
                                oAttr, NULL, &deviceNodeId));


        UA_String value;
        value = util::toUAString(deviceId);
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, deviceNodeId,
                                      UA_QUALIFIEDNAME(2, "XmlId"),
                                      &value, &UA_TYPES[UA_TYPES_STRING]));

        value = util::toUAString(deviceUUID);
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, deviceNodeId,
                                      UA_QUALIFIEDNAME(2, "Uuid"),
                                      &value, &UA_TYPES[UA_TYPES_STRING]));

        value = util::toUAString(deviceName);
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, deviceNodeId,
                                      UA_QUALIFIEDNAME(2, "Name"),
                                      &value, &UA_TYPES[UA_TYPES_STRING]));

        try {

            UA_NodeId descriptionNodeId;

            ptree& deviceDescription = device.get_child("Description.<xmlattr>");
            oAttr.displayName = UA_LOCALIZEDTEXT("en", "Description");
            VerifyReturn(UA_Server_addObjectNode(m_uaServer, UA_NODEID_NUMERIC(m_namespace, 0),
                                    deviceNodeId,
                                    UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                                    UA_QUALIFIEDNAME(m_namespace, "Description"),
                                    UA_NODEID_NUMERIC(2, MT_MTDESCRIPTIONTYPE),
                                    oAttr, NULL, &descriptionNodeId));

            setProperties(descriptionNodeId, deviceDescription);

            UA_NodeId_deleteMembers(&descriptionNodeId);

        } catch (...) {
        }

        addNotifier(UA_NODEID_NUMERIC(0, UA_NS0ID_SERVER), deviceNodeId, true);

        vector<UA_NodeId> nodePath;

        nodePath.push_back(deviceNodeId);
        processDeviceMetaInfo(deviceUUID, deviceNodeId, device, "", nodePath);

        UA_NodeId_deleteMembers(&deviceNodeId);
    }

    open62541_mutex.unlock();
}

void agentHandler::processDeviceMetaInfo(string deviceUUID, UA_NodeId &parentNode, ptree &probeInfo, string path, vector<UA_NodeId> &nodePath)
{ 
    multiset<string> nameList;

    researchDisplayNames(probeInfo, nameList);

    // process compositions first so we can use their info later
    map< string, string > compositionIdMap;

    for (ptree::iterator p = probeInfo.begin(); p != probeInfo.end(); p++)
    {
        string display = p->first;
        if (display.compare("Compositions") != 0)
            continue;

        ptree& dataItems = p->second;

        UA_NodeId compositionTopId;
        UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
        oAttr.displayName = util::toUALocalizedText(display);
        VerifyReturn(UA_Server_addObjectNode(m_uaServer, UA_NODEID_NULL,
                                parentNode,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                util::toUAQualifiedName(m_namespace, display),
                                UA_NODEID_NUMERIC(0, UA_NS0ID_FOLDERTYPE),
                                oAttr,
                                NULL,
                                &compositionTopId));

        for (ptree::iterator pos = dataItems.begin(); pos != dataItems.end(); pos++)
        {
            string type = util::getJSON_data(pos->second, "<xmlattr>.type");
            string id = util::getJSON_data(pos->second, "<xmlattr>.id");

            string t = util::toCamelCase(type);

            compositionIdMap.insert(pair<string, string>(id, t));

            oAttr.displayName = util::toUALocalizedText(t);

            UA_NodeId nextId;
            VerifyReturn(UA_Server_addObjectNode(m_uaServer,
                                      UA_NODEID_NUMERIC(m_namespace, 0),
                                      compositionTopId,
                                      UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                      util::toUAQualifiedName(m_namespace, t),
                                      UA_NODEID_NUMERIC(2, MT_MTCOMPOSITIONTYPE),
                                      oAttr,
                                      NULL,
                                      &nextId));

            setMTTypeNameAndId(nextId, type, id);
            UA_NodeId_deleteMembers(&nextId);
        }

        UA_NodeId_deleteMembers(&compositionTopId);

        break;
    }

    for (ptree::iterator p = probeInfo.begin(); p != probeInfo.end(); p++)
    {
        string display = p->first;

        // compositions is already processed
        if (display.compare("<xmlattr>") == 0 || display.compare("Description") == 0 ||
                display.compare("Compositions") == 0)
            continue;

        if (util::isLeafNode(p))
        {
            UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
            UA_String value = util::toUAString(p->second.data());
            UA_Variant_setScalar(&mnAttr.value, &value, &UA_TYPES[UA_TYPES_STRING]);
            mnAttr.displayName = util::toUALocalizedText(display);
            VerifyReturn(UA_Server_addVariableNode(m_uaServer, UA_NODEID_NULL, parentNode,
                                      UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                      util::toUAQualifiedName(m_namespace, display),
                                      UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE), mnAttr, NULL, NULL));
            continue;
        }

        if (display.compare("DataItems") == 0)
        {
            ptree& dataItems = p->second;

            multiset <string> nameListDataItem;
            researchDisplayNames(dataItems, nameListDataItem);

            for (ptree::iterator pos = dataItems.begin(); pos != dataItems.end(); pos++)
            {
                string s = util::getJSON_data(pos->second, "<xmlattr>.type");
                string category = util::getJSON_data(pos->second, "<xmlattr>.category");
                if (category.compare("CONDITION") == 0)
                    s += "Condition";

                UA_NodeId itemNode = addDeviceDataItem(deviceUUID, parentNode, pos->second.get_child("<xmlattr>"), nameListDataItem, path, nodePath,
                                                       compositionIdMap);

                // check for Source
                string source = util::getJSON_data(pos->second, "Source");
                if (source.length() > 0)
                    addCustomPropertyWithData(itemNode, "SourceData", source);

                string initialValue = util::getJSON_data(pos->second, "InitialValue");
                if (initialValue.length() > 0)
                {
                    UA_Variant myVar;
                    UA_Double value = atof(initialValue.c_str());
                    UA_Variant_setScalar(&myVar, &value, &UA_TYPES[UA_TYPES_DOUBLE]);
                    UA_NodeId nodeId = addCustomProperty(itemNode, "InitialValue",
                                      UA_NODEID_NUMERIC(0, UA_NS0ID_DOUBLE));

                    VerifyReturn(UA_Server_writeValue(m_uaServer, nodeId, myVar));
                }

                // check for ResetTrigger
                string resetTrigger = util::getJSON_data(pos->second, "ResetTrigger");
                if (resetTrigger.length() > 0)
                {
                    UA_Variant myVar;
                    UA_Int32 myInt32 = m_typesMgr.lookup("MTResetTriggerType", resetTrigger);

                    UA_Variant_setScalar(&myVar, &myInt32, &UA_TYPES[UA_TYPES_INT32]);
                    UA_NodeId nodeId = addCustomProperty(itemNode, "ResetTrigger",
                                      UA_NODEID_NUMERIC(2, MT_MTRESETTRIGGERTYPE));

                    VerifyReturn(UA_Server_writeValue(m_uaServer, nodeId, myVar));

                    addCustomProperty(itemNode, "ResetTriggeredReason",
                                      UA_NODEID_NUMERIC(2, MT_MTRESETTRIGGERTYPE));
                }

                // check for Filters
                try {
                    ptree& filters = pos->second.get_child("Filters");
                    if (filters.size() > 0)
                    {
                        for (ptree::iterator p = filters.begin(); p != filters.end(); p++)
                        {
                            string filterType = util::getJSON_data(p->second, "<xmlattr>.type");

                            if (filterType.length() == 0)
                                continue;

                            UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
                            mnAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_DOUBLE);
                            UA_Double value = atof(p->second.data().c_str());

                            string displayName = util::toCamelCase(filterType) + "Filter";
                            UA_Variant_setScalar(&mnAttr.value, &value, &UA_TYPES[UA_TYPES_DOUBLE]);
                            mnAttr.displayName = util::toUALocalizedText(displayName);

                            VerifyReturn(UA_Server_addVariableNode(m_uaServer,
                                                                   UA_NODEID_NUMERIC(m_namespace, 0),
                                                                   itemNode,
                                                                   UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                                                   util::toUAQualifiedName(m_namespace, displayName),
                                                                   UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
                                                                   mnAttr, nullptr, nullptr));
                        }
                    }

                } catch (...) {
                }

                // check for Constraints
                try {
                    ptree& constraints = pos->second.get_child("Constraints");
                    if (constraints.size() > 0)
                    {
                        UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
                        oAttr.displayName = UA_LOCALIZEDTEXT("en", "Constraints");

                        UA_NodeId constraintNode;
                        VerifyReturn(UA_Server_addObjectNode(m_uaServer,
                                                  UA_NODEID_NUMERIC(m_namespace, 0),
                                                  itemNode,
                                                  UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                                                  UA_QUALIFIEDNAME(m_namespace, "Constraints"),
                                                  UA_NODEID_NUMERIC(2, MT_MTCONSTRAINTTYPE),
                                                  oAttr,
                                                  NULL,
                                                  &constraintNode));

                        vector <string> values;
                        for (ptree::iterator p = constraints.begin(); p != constraints.end(); p++)
                        {
                            string key = p->first;

                            if (key.compare("Value") == 0)
                                values.push_back(p->second.data());
                            else
                            {
                                UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
                                mnAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_DOUBLE);
                                UA_Double value = atof(p->second.data().c_str());

                                UA_Variant_setScalar(&mnAttr.value, &value, &UA_TYPES[UA_TYPES_DOUBLE]);
                                mnAttr.displayName = util::toUALocalizedText(key);
                                UA_Server_addVariableNode(m_uaServer, UA_NODEID_NULL, constraintNode,
                                                          UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                                          util::toUAQualifiedName(m_namespace, key),
                                                          UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE), mnAttr, nullptr, nullptr);

                            }
                        }

                        size_t size = values.size();
                        if (size > 0)
                        {

                            UA_String *data = (UA_String *)UA_malloc(sizeof(UA_String) * size);

                            int i = 0;
                            for (vector<string>::iterator q = values.begin(); q != values.end(); q++, i++)
                                data[i] = util::toUAString((*q));

                            UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
                            mnAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_STRING);
                            UA_Variant_setArray(&mnAttr.value, data, size, &UA_TYPES[UA_TYPES_STRING]);

                            mnAttr.displayName = UA_LOCALIZEDTEXT("en", "Values");
                            VerifyReturn(UA_Server_addVariableNode(m_uaServer, UA_NODEID_NULL, constraintNode,
                                                      UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                                      UA_QUALIFIEDNAME(m_namespace, "Values"),
                                                      UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
                                                      mnAttr, NULL, NULL));
                        }

                        UA_NodeId_deleteMembers(&constraintNode);
                    }

                } catch (...) {
                }

                UA_NodeId_deleteMembers(&itemNode);
            }
        }
        else
        {
            UA_NodeId nextId;

            UA_NodeId nodeType = UA_NODEID_NUMERIC(0, UA_NS0ID_FOLDERTYPE);

            UA_UInt32 typeId = mtIDMap[p->first + "Type"];
            if (typeId != 0)
                nodeType = UA_NODEID_NUMERIC(2, typeId);

            string name = util::getJSON_data(p->second, "<xmlattr>.name");
            string id = util::getJSON_data(p->second, "<xmlattr>.id");

            bool setNotifiers = false;
            if (display.compare("Linear") == 0 || display.compare("Rotary") == 0)
            {
                if (name.length() > 0)
                {
                    // if can't disguish by appending name, append id instead
                    if (nameList.count(display + "[" + name + "]") > 1)
                        display += "[" + id + "]";
                    else
                        display += "[" + name + "]";
                }

                setNotifiers = true;
            }

            UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
            oAttr.displayName = util::toUALocalizedText(display);
            VerifyReturn(UA_Server_addObjectNode(m_uaServer, UA_NODEID_NULL,
                                    parentNode,
                                    UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                                    util::toUAQualifiedName(m_namespace, display),
                                    nodeType,
                                    oAttr,
                                    NULL,
                                    &nextId));


            if (name.length() > 0)
                addCustomPropertyWithData(nextId, "Name", name);

            if (id.length() > 0)
            {
                UA_String value = util::toUAString(id);
                VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, nextId,
                                              UA_QUALIFIEDNAME(2, "XmlId"),
                                              &value, &UA_TYPES[UA_TYPES_STRING]));
            }

            vector<UA_NodeId> copyNodePath(nodePath);
            copyNodePath.push_back(nextId);

            if (setNotifiers)
                addNotifierToAll(copyNodePath);

            processDeviceMetaInfo(deviceUUID, nextId, p->second, path + "." + display, copyNodePath);

            UA_NodeId_deleteMembers(&nextId);
        }
    }
}

UA_NodeId agentHandler::addDeviceDataItem(string deviceUUID, UA_NodeId &parentNode, ptree &dataItem, multiset<string> &appendName, string path,
                                          vector<UA_NodeId> &nodePath, map< string, string > &compositionIdMap)
{
    std::map<string, string> m;

    for (ptree::iterator pos = dataItem.begin(); pos != dataItem.end(); pos++)
    {
        string key = pos->first;
        string value = pos->second.data();

        m[key] = value;
    }

    string id = m["id"];
    string type = m["type"];
    string subType = m["subType"];
    string category = m["category"];
    string name = m["name"];
    string compositeId = m["compositionId"];

    UA_NodeId nextId;
    string subTypeCamelCase;
    string displayName = util::toCamelCase(type);

    if (subType.length() > 0)
        subTypeCamelCase = util::toCamelCase(subType);

    string actualDisplayName = subTypeCamelCase + displayName;
    if (category.compare("CONDITION") == 0)
        actualDisplayName += "Condition";

    if (appendName.count(actualDisplayName) > 1)
    {
        if (appendName.count(actualDisplayName + "[" + name + "]") > 1)
            actualDisplayName += "[" + id + "]";
        else
            actualDisplayName += "[" + name + "]";
    }

    // prefix composition id's name if any
    if (compositeId.length() > 0)
    {
        string compositeName = compositionIdMap[compositeId];
        actualDisplayName = compositeName + actualDisplayName;
    }

    string nodeIdentifier = deviceUUID + "." + id;
    if (category.compare("EVENT") == 0)
    {        
        string eventClassType = displayName+"ClassType";

        UA_NodeId eventNodeType = m_eventTypes[eventClassType];
        if (UA_NodeId_isNull(&eventNodeType))
            eventNodeType = UA_NODEID_NUMERIC(2, MT_MTSTRINGEVENTTYPE);

        UA_VariableAttributes oAttr = UA_VariableAttributes_default;
        oAttr.valueRank = UA_VALUERANK_SCALAR;
        oAttr.displayName = util::toUALocalizedText(actualDisplayName);

        UA_UInt32 eventClassID = eventNodeType.identifier.numeric;
        UA_UInt32 eventClassParentId = 0;

        if (type.compare("ASSET_CHANGED") == 0 || type.compare("ASSET_REMOVED") == 0)
        {
            eventNodeType = UA_NODEID_NUMERIC(2, MT_MTASSETEVENTTYPE);
            oAttr.dataType = UA_NODEID_NUMERIC(2, MT_ASSETEVENTDATATYPE);
            m_fieldDataTypes.insert(pair<string, UA_NodeId>(nodeIdentifier, UA_NODEID_NUMERIC(2, MT_ASSETEVENTDATATYPE)));
        }
        else
        if (eventClassID == MT_MTSTRINGEVENTTYPE)
        {
             oAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_STRING);
             m_fieldDataTypes.insert(pair<string, UA_NodeId>(nodeIdentifier, UA_NODEID_NUMERIC(0, UA_NS0ID_STRING)));
             eventClassParentId = MT_MTSTRINGEVENTCLASSTYPE;
        }
        else if (eventClassID == MT_MTNUMERICEVENTTYPE)
        {
            oAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_DOUBLE);
            m_fieldDataTypes.insert(pair<string, UA_NodeId>(nodeIdentifier, UA_NODEID_NUMERIC(0, UA_NS0ID_DOUBLE)));
            eventClassParentId = MT_MTNUMERICEVENTCLASSTYPE;
        }
        else if (eventClassID == MT_MTCONTROLLEDVOCABEVENTTYPE)
        {
            oAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_UINT32);
            m_fieldDataTypes.insert(pair<string, UA_NodeId>(nodeIdentifier, UA_NODEID_NUMERIC(0, UA_NS0ID_ENUMVALUETYPE)));
            eventClassParentId = MT_MTCONTROLLEDVOCABEVENTCLASSTYPE;
        }

        VerifyReturn(UA_Server_addVariableNode(m_uaServer,
                                util::toUANodeId(m_namespace, nodeIdentifier),
                                parentNode,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                                util::toUAQualifiedName(m_namespace, actualDisplayName),
                                eventNodeType,
                                oAttr, NULL, &nextId));

        addMTClassReferences(nextId, eventClassParentId, displayName, subType);
        addNotifierToAll(nodePath);

    }
    else if (category.compare("CONDITION") == 0)
    {       
        UA_ObjectAttributes oAttr = UA_ObjectAttributes_default;
        oAttr.displayName = util::toUALocalizedText(actualDisplayName);

        m_fieldDataTypes.insert(pair<string, UA_NodeId>(nodeIdentifier, UA_NODEID_NUMERIC(0, UA_NS0ID_CONDITIONTYPE)));

        VerifyReturn(UA_Server_addObjectNode(m_uaServer,
                                util::toUANodeId(m_namespace, nodeIdentifier),
                                parentNode ,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                                util::toUAQualifiedName(m_namespace, actualDisplayName),
                                UA_NODEID_NUMERIC(2, MT_MTCONDITIONTYPE),
                                oAttr, NULL, &nextId));

        UA_ExpandedNodeId targetExpId;

        targetExpId.nodeId       = nextId;
        targetExpId.namespaceUri = UA_STRING_NULL;
        targetExpId.serverIndex  = 0;

        VerifyReturn(UA_Server_addReference(m_uaServer,
                                parentNode, UA_NODEID_NUMERIC(0, UA_NS0ID_HASCONDITION), targetExpId, true));

        VerifyReturn(UA_Server_addReference(m_uaServer,
                                UA_NODEID_NUMERIC(2, MT_SYSTEMCLASSTYPE),
                                            UA_NODEID_NUMERIC(2, MT_HASMTCLASSTYPE), targetExpId, false));
        addNotifier(parentNode, nextId, false);
    }
    else if (category.compare("SAMPLE") == 0)
    {
        UA_NodeId nodeType = UA_NODEID_NUMERIC(2, MT_MTSAMPLETYPE);

        UA_VariableAttributes oAttr = UA_VariableAttributes_default;
        oAttr.valueRank = UA_VALUERANK_SCALAR;
        oAttr.displayName = util::toUALocalizedText(actualDisplayName);

        if (type.compare("PATH_POSITION") == 0)
        {
            nodeType = UA_NODEID_NUMERIC(2, MT_MTTHREESPACESAMPLETYPE);
            oAttr.dataType = UA_NODEID_NUMERIC(2, MT_THREESPACESAMPLEDATATYPE);
        }
        else
            oAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_DOUBLE);

        m_fieldDataTypes.insert(pair<string, UA_NodeId>(nodeIdentifier, oAttr.dataType));


        VerifyReturn(UA_Server_addVariableNode(m_uaServer,
                                util::toUANodeId(m_namespace, nodeIdentifier),
                                parentNode,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                                util::toUAQualifiedName(m_namespace, actualDisplayName),
                                nodeType,
                                oAttr, NULL, &nextId));

        addMTClassReferences(nextId, MT_MTNUMERICEVENTCLASSTYPE, displayName, subType);

        UA_NodeId nodeId;

        // try both namespace 0 and 2. For some MTConnect dataType like ThreeSpaceSampleType, name space is 2 instead.
        if (lookupChildNodeId(nextId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(0, "EngineeringUnits"), &nodeId) ||
            lookupChildNodeId(nextId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(2, "EngineeringUnits"), &nodeId))
        {
            UA_EUInformation euData;

            std::map<string, EuInfo>::iterator it = euStore.find(m["units"]);
	
            if (it != euStore.end())
            {
            	EuInfo *euInfo = &it->second;

                euData.namespaceUri = UA_STRING("http://www.opcfoundation.org/UA/units/un/cefact");
                euData.unitId = euInfo->m_unitId;
                euData.displayName = util::toUALocalizedText(euInfo->m_displayName);
                euData.description = util::toUALocalizedText(euInfo->m_description);

                UA_Variant v;
                UA_Variant_setScalar(&v, &euData, &UA_TYPES[UA_TYPES_EUINFORMATION]);

                VerifyReturn(UA_Server_writeValue(m_uaServer, nodeId, v));
            }

            UA_NodeId_deleteMembers(&nodeId);
        }
    }

    if (category.compare("CONDITION") != 0)
    {
        UA_WriteValue wv;

        UA_WriteValue_init(&wv);
        wv.nodeId = nextId;
        wv.attributeId = UA_ATTRIBUTEID_VALUE;
        wv.value.status = UA_STATUSCODE_BADDATAUNAVAILABLE;
        wv.value.hasStatus = true;

        VerifyReturn(UA_Server_write(m_uaServer, &wv));
    }

    m.erase("id");
    m.erase("type");
    m.erase("subType");
    m.erase("category");
//        m.erase("name");

    for (std::map<string, string>::iterator it=m.begin(); it !=m.end(); ++it)
    {
        string key = it->first;
        string value = it->second;

        if (value.length() > 0)
            addCustomPropertyWithData(nextId, util::toCamelCase(key), value);
    }

    setMTTypeNameAndId(nextId, type, id);

#if 0
    UA_EnumValueType enumData;

    enumData.value = m_typesMgr.lookup("MTCategoryType", category);
    enumData.displayName = util::toUALocalizedText(category);
    enumData.description = util::toUALocalizedText(category);
    util::writeObject_scalar(m_uaServer, nextId,
                             UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                             UA_QUALIFIEDNAME(2, "Category"),
                             &enumData,
                             &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
#endif

    UA_Int32 dd = m_typesMgr.lookup("MTCategoryType", category);

    util::writeObject_scalar(m_uaServer, nextId,
                             UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(2, "Category"),
                             &dd, &UA_TYPES[UA_TYPES_INT32]);

    UA_NodeId nodeId;
    if (lookupChildNodeId(nextId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(0, "EnumStrings"), &nodeId))
    {
        UA_Variant enumValues;
        bool enumLoaded = true;
        if (!m_typesMgr.getDictionary(displayName + "DataType", enumValues))
        {
            enumLoaded = m_typesMgr.getDictionary(displayName + "ClassType", enumValues);
            if (!enumLoaded)
                util::log_error("Cannot load enums for %s", displayName.c_str());
        }

        if (enumLoaded == true)
            VerifyReturn(UA_Server_writeValue(m_uaServer, nodeId, enumValues));

        UA_Variant_clear(&enumValues);
        UA_NodeId_deleteMembers(&nodeId);
    }

    return nextId;
}

void agentHandler::setProperties(UA_NodeId &topNode, ptree &dataItem)
{
    for (ptree::iterator pos = dataItem.begin(); pos != dataItem.end(); pos++)
    {
        string key = pos->first;
        string value = pos->second.data();

        UA_NodeId nextId;

        UA_VariableAttributes oAttr = UA_VariableAttributes_default;
        oAttr.displayName = util::toUALocalizedText(key);

        VerifyReturn(UA_Server_addVariableNode(m_uaServer, UA_NODEID_NUMERIC(m_namespace, 0),
                                topNode,
                                UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                util::toUAQualifiedName(m_namespace, key),
                                UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
                                oAttr, NULL, &nextId));


        util::writeNodeData(m_uaServer, nextId, value);
    }
}

bool agentHandler::parseStreamData(string xmlText)
{
    m_xml = xmlText;

    try {
         // Read the stringstream into a Boost property tree, m_ptree
        istringstream iss;
        iss.str (m_xml);

        m_ptree.clear();
        boost::property_tree::read_xml( iss, m_ptree );
    }
    catch (exception & e)
    {
        util::log_error("Error in parsing XML %s [%s]", e.what(), m_xml.c_str());
        return false;
    }

    return true;
}

int agentHandler::processStreamData()
{
    int total = 0;

    try {

        // each line is one component stream
        ptree& devices = m_ptree.get_child("MTConnectStreams.Streams");
        for (ptree::iterator pos = devices.begin(); pos != devices.end(); pos++)
        {
            ptree& device = pos->second;

            string deviceName = util::getJSON_data(device, "<xmlattr>.name");
            string deviceUUID = util::getJSON_data(device, "<xmlattr>.uuid");

            int rec_count = 0;

            for (ptree::iterator p = device.begin(); p != device.end(); p++)
            {
                string key = p->first;
                if (key.compare("ComponentStream") == 0)
                {
                    ptree &stream = p->second;

                    string componentId = util::getJSON_data(stream, "<xmlattr>.componentId");

                    for (ptree::iterator s = stream.begin(); s != stream.end(); s++)
                        if (s->first.compare("<xmlattr>"))
                        {
                            open62541_mutex.lock();
                            rec_count += processDeviceStreamData(deviceName, deviceUUID, componentId, s->first, s->second);
                            open62541_mutex.unlock();
                        }
                }
            }

            total += rec_count;
        }
    }
    catch (exception& e)
    {
        util::log_error("%s", e.what());
    }

    return total;
}

int agentHandler::processDeviceStreamData(const string &deviceName, const string &deviceUUID, const string &componentId, const string &levelName, ptree &pt)
{
    int rec_count = 0;

    // output first any unique subtrees
    for (ptree::iterator pos = pt.begin(); pos != pt.end(); pos++)
    {
        string dataItemId = util::getJSON_data(pos->second, "<xmlattr>.dataItemId");

        if (dataItemId.length() > 0)
        {
            string timestamp = util::getJSON_data(pos->second, "<xmlattr>.timestamp");
            string key = deviceUUID + "." + dataItemId;

            string dataPoint = pos->second.data();

            rec_count++;

            if (levelName.compare("Condition") == 0)
            {
                processConditionStream(deviceName, deviceUUID + "." + componentId, key, timestamp, pos->first, dataPoint, pos->second);
                continue;
            }
            else
            if (pos->first.compare("Message") == 0)
            {
                processMessageStream(deviceName, deviceUUID + "." + componentId, key, timestamp, dataPoint, pos->second);
                continue;
            }

            string sampleCount = util::getJSON_data(pos->second, "<xmlattr>.sampleCount");

            if (sampleCount.length() == 0)
                updateData(key, timestamp, dataPoint, pos->second);
            else
            {
                UA_NodeId nodeId = util::toUANodeId(m_namespace, key);

                int count = atoi(sampleCount.c_str());
                int rate = 0;
                string sampleRate = util::getJSON_data(pos->second, "<xmlattr>.sampleRate");
                if (sampleRate.length() > 0)
                    rate = atoi(sampleRate.c_str());
                else
                {
                    UA_NodeId n;
                    UA_Variant v;

                    if (lookupChildNodeId(nodeId,
                                    UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                    UA_QUALIFIEDNAME(2, "SampleRate"), &n))
                    {
                        VerifyReturn(UA_Server_readValue(m_uaServer, n, &v));
                        UA_NodeId_deleteMembers(&n);

                        if (UA_Variant_hasScalarType(&v, &UA_TYPES[UA_TYPES_DOUBLE]))
                        {
                            rate = *(UA_Double*)v.data;
                        }
                    }
                }

                istringstream iss(dataPoint, istringstream::in);
                vector<string> dataList;
                string item;

                while( iss >> item )
                    dataList.push_back(item);

                if (dataList.size() != count)
                    continue;

                struct tm tm;

                util::strptime(timestamp.c_str(), "%Y-%m-%dT%H:%M:%S", &tm);
                tm.tm_isdst = -1;
                time_t dt = mktime(&tm);

                unsigned long pos = timestamp.find_first_of(".");
                int milliSec = std::stoi(timestamp.substr(pos + 1, 3));

                UA_Variant myVar;
                for (int i=0; i<count; i++)
                {
                    UA_WriteValue wv;
                    UA_WriteValue_init(&wv);
                    wv.nodeId = nodeId;
                    wv.attributeId = UA_ATTRIBUTEID_VALUE;

                    UA_Double myDouble = atof(dataList[i].c_str());
                    UA_Variant_setScalar(&myVar, &myDouble, &UA_TYPES[UA_TYPES_DOUBLE]);

                    long tt = (dt * 1000 - (count - i) * (1000 / rate)) + milliSec ;

                    wv.value.sourceTimestamp = UA_DateTime_fromUnixTime(tt/1000) + (tt % 1000) * UA_DATETIME_MSEC;
                    wv.value.hasSourceTimestamp = true;
                    wv.value.hasStatus = false;
                    wv.value.value = myVar;
                    wv.value.hasValue = true;
                    VerifyReturn(UA_Server_write(m_uaServer, &wv));
                }
            }

            // update reset trigger reason if any
            string resetTriggered = util::getJSON_data(pos->second, "<xmlattr>.resetTriggered");
            if (resetTriggered.length() > 0)
            {
                UA_NodeId nodeId = util::toUANodeId(m_namespace, key);
                UA_NodeId n;
                if (lookupChildNodeId(nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                UA_QUALIFIEDNAME(2, "ResetTriggeredReason"),
                                &n))
                {
                    UA_Variant myVar;
                    UA_Int32 myInt32 = m_typesMgr.lookup("MTResetTriggerType", resetTriggered);

                    UA_Variant_setScalar(&myVar, &myInt32, &UA_TYPES[UA_TYPES_INT32]);

                    util::writeDataWithTimeStamp(m_uaServer, n, timestamp, myVar);
                    UA_NodeId_deleteMembers(&n);
                }
            }

        }
        else
            rec_count += processDeviceStreamData(deviceName, deviceUUID, componentId, pos->first, pos->second);
    }


    return rec_count;
}

void agentHandler::processMessageStream(string deviceName, string componentId, string variable, string dateTime, string message, ptree& pt)
{
    UA_NodeId messageNodeId;
    string nativeCode = util::getJSON_data(pt, "<xmlattr>.nativeCode");
    string sequence = util::getJSON_data(pt, "<xmlattr>.sequence");
    string lastSequence = m_messageSequenceNums[variable];

    if (sequence.compare(lastSequence) == 0)
        return;

    m_messageSequenceNums[variable] = sequence;

    auto iter = m_messageNodes.find(variable);
    if (iter == m_messageNodes.end())
    {
        if (VerifyReturn(UA_Server_createEvent(m_uaServer,
                                         UA_NODEID_NUMERIC(2, MT_MTMESSAGEEVENTTYPE),
                                         &messageNodeId)) == false)
            return;

        addCustomProperty(messageNodeId, "NativeCode", UA_NODEID_NUMERIC(0, UA_NS0ID_STRING));
        m_eventNodes[variable] = messageNodeId;
    }
    else
    {
        messageNodeId = iter->second;
    }

    if (nativeCode.size() > 0)
    {
        UA_String s = util::toUAString(nativeCode);
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, messageNodeId, UA_QUALIFIEDNAME(2, "NativeCode"),
                                         &s, &UA_TYPES[UA_TYPES_STRING]));
    }

    UA_DateTime eventTime = util::toUADateTime(dateTime);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, messageNodeId, UA_QUALIFIEDNAME(0, "Time"),
                                         &eventTime, &UA_TYPES[UA_TYPES_DATETIME]));


    UA_UInt16 eventSeverity = 0;
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, messageNodeId, UA_QUALIFIEDNAME(0, "Severity"),
                                         &eventSeverity, &UA_TYPES[UA_TYPES_UINT16]));


    UA_LocalizedText eventMessage = util::toUALocalizedText(message);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, messageNodeId, UA_QUALIFIEDNAME(0, "Message"),
                                         &eventMessage, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]));

    UA_NodeId nodeId = util::toUANodeId(m_namespace, variable);
    UA_QualifiedName browseName;

    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, messageNodeId, UA_QUALIFIEDNAME(0, "SourceNode"),
                                         &nodeId, &UA_TYPES[UA_TYPES_NODEID]));

    if (VerifyReturn(UA_Server_readBrowseName(m_uaServer, nodeId, &browseName)))
    {
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, messageNodeId, UA_QUALIFIEDNAME(0, "SourceName"),
                                         &browseName.name, &UA_TYPES[UA_TYPES_STRING]));

        UA_QualifiedName_deleteMembers(&browseName);
    }

    VerifyReturn(UA_Server_triggerEvent(m_uaServer, messageNodeId,
                                     nodeId,
                                     NULL, UA_FALSE));
}

void agentHandler::processConditionStream(string deviceName, string componentId, string variable, string dateTime, string state, string message, ptree& pt)
{
    UA_NodeId *eventNodeId;// = UA_NODEID_NUMERIC(m_namespace, 0);
    string nativeCode = util::getJSON_data(pt, "<xmlattr>.nativeCode");
    string sequence = util::getJSON_data(pt, "<xmlattr>.sequence");
    string lastSequence = m_eventSequenceNums[variable];

    if (sequence.compare(lastSequence) == 0)
        return;

    m_eventSequenceNums[variable] = sequence;

    string key = variable;
    if (nativeCode.length() > 0)
        key += "@" + nativeCode;

    auto iter = m_eventNodes.find(key);
    if (iter == m_eventNodes.end())
    {
        eventNodeId = &m_eventNodes[key];

        if (VerifyReturn(UA_Server_createEvent(m_uaServer,
                                                     UA_NODEID_NUMERIC(2, MT_MTCONDITIONEVENTTYPE),
                                                     eventNodeId)) == false)
            return;
    }
    else
    {
        eventNodeId = &iter->second;
        util::log_debug("Found event %s EventId = %d", key.c_str(), eventNodeId->identifier.numeric);
    }

    sendConditionEvent(*eventNodeId, deviceName, componentId, variable, nativeCode, dateTime, state, message);
}

void agentHandler::sendConditionEvent(UA_NodeId &eventNodeId, string deviceName, string componentId, string variable, string nativeCode, string dateTime, string state, string message)
{
    UA_DateTime eventTime = util::toUADateTime(dateTime);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "Time"),
                                         &eventTime, &UA_TYPES[UA_TYPES_DATETIME]));


    UA_UInt16 eventSeverity = 0;
    UA_MTSeverityDataType mtSeverity = __UA_MTSEVERITYDATATYPE_FORCE32BIT;
    UA_Boolean retain = false;
    string enabledState;
    UA_StatusCode quality;
    string activeState;
    string conditionName;

    if (state.compare("Normal") == 0)
    {
        eventSeverity = 0;
        retain = false;
        activeState = "False";
        mtSeverity = UA_MTSEVERITYDATATYPE_NORMAL;
    }
    else if (state.compare("Warning") == 0)
    {
        eventSeverity = m_warningEventSeverity;
        retain = true;
        activeState = "True";
        mtSeverity = UA_MTSEVERITYDATATYPE_WARNING;
    }
    else if (state.compare("Fault") == 0)
    {
        eventSeverity = m_faultEventSeverity;
        retain = true;
        activeState = "True";
        mtSeverity = UA_MTSEVERITYDATATYPE_FAULT;
    }

    if (state.compare("Unavailable") == 0)
    {
        enabledState = "False";
        quality = UA_STATUSCODE_BADNOTCONNECTED;
    }
    else
    {
        enabledState = "True";
        quality = UA_STATUSCODE_GOOD;
    }

    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "Severity"),
                                         &eventSeverity, &UA_TYPES[UA_TYPES_UINT16]));

    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(2, "MTSeverity"),
                                         &mtSeverity, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_MTSEVERITYDATATYPE]));


    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "Retain"),
                                         &retain, &UA_TYPES[UA_TYPES_BOOLEAN]));

    UA_LocalizedText text = util::toUALocalizedText(enabledState);
    VerifyReturn(util::writeObject_scalar(m_uaServer, eventNodeId,
                                          UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), UA_QUALIFIEDNAME(0, "EnabledState"),
                                          &text, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]));

    VerifyReturn(util::writeObject_scalar(m_uaServer, eventNodeId,
                                          UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), UA_QUALIFIEDNAME(0, "Quality"),
                                          &quality, &UA_TYPES[UA_TYPES_STATUSCODE]));

    text = util::toUALocalizedText(activeState);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(2, "ActiveState"),
                                         &text, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]));


    UA_String dataItemId = util::toUAString(variable);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(2, "DataItemId"),
                                         &dataItemId, &UA_TYPES[UA_TYPES_STRING]));


    UA_LocalizedText eventMessage = util::toUALocalizedText(message);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "Message"),
                                         &eventMessage, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]));

    VerifyReturn(util::writeObject_scalar(m_uaServer, eventNodeId,
                                          UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), UA_QUALIFIEDNAME(0, "Comment"),
                                          &eventMessage, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]));


    UA_String name = util::toUAString(deviceName);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "ClientUserId"),
                                     &name, &UA_TYPES[UA_TYPES_STRING]));

    UA_NodeId nodeId = util::toUANodeId(m_namespace, componentId);
    UA_QualifiedName browseName;
    UA_NodeId n;

    if (lookupChildNodeId(nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                    UA_QUALIFIEDNAME(2, "HasMTClassType"), &n))
    {
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "ConditionClassId"),
                                             &n, &UA_TYPES[UA_TYPES_NODEID]));

        if (VerifyReturn(UA_Server_readBrowseName(m_uaServer, n, &browseName)))
        {
            VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "ConditionClassName"),
                                             &browseName.name, &UA_TYPES[UA_TYPES_STRING]));

            VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(2, "MTTypeName"),
                                                 &browseName.name, &UA_TYPES[UA_TYPES_STRING]));
        }

        UA_NodeId_deleteMembers(&n);
        UA_QualifiedName_deleteMembers(&browseName);
    }

    if (lookupChildNodeId(nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                    UA_QUALIFIEDNAME(2, "HasMTSubClassType"), &n))
    {
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "ConditionSubClassId"),
                                             &n, &UA_TYPES[UA_TYPES_NODEID]));

        if (VerifyReturn(UA_Server_readBrowseName(m_uaServer, n, &browseName)))
        {
            VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "ConditionSubClassName"),
                                             &browseName.name, &UA_TYPES[UA_TYPES_STRING]));

            VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(2, "MTSubTypeName"),
                                                 &browseName.name, &UA_TYPES[UA_TYPES_STRING]));
        }

        UA_NodeId_deleteMembers(&n);
        UA_QualifiedName_deleteMembers(&browseName);
    }

    auto it = m_lastSeverity.find(variable);
    if (it != m_lastSeverity.end())
    {
        UA_Int16 lastSeverity = it->second;
        VerifyReturn(util::writeObject_scalar(m_uaServer, eventNodeId,
                                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), UA_QUALIFIEDNAME(0, "LastSeverity"),
                                              &lastSeverity, &UA_TYPES[UA_TYPES_INT16]));
    }

    nodeId = util::toUANodeId(m_namespace, variable);
    VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "SourceNode"),
                                         &nodeId, &UA_TYPES[UA_TYPES_NODEID]));

    if (VerifyReturn(UA_Server_readBrowseName(m_uaServer, nodeId, &browseName)))
    {
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "SourceName"),
                                         &browseName.name, &UA_TYPES[UA_TYPES_STRING]));

        conditionName = util::toString(browseName.name);

        UA_QualifiedName_deleteMembers(&browseName);

        if (nativeCode.length() > 0)
            conditionName += " " + nativeCode;

        UA_String s = util::toUAString(conditionName);
        VerifyReturn(UA_Server_writeObjectProperty_scalar(m_uaServer, eventNodeId, UA_QUALIFIEDNAME(0, "ConditionName"),
                                         &s, &UA_TYPES[UA_TYPES_STRING]));
    }

    VerifyReturn(UA_Server_triggerEvent(m_uaServer, eventNodeId,
                                     nodeId,
                                     NULL, UA_FALSE));

    string key = variable;
    if (nativeCode.length() > 0)
        key += "@" + nativeCode;

    util::log_info("Event@[%s] Device [%s] %s [%s] EventId:%d State:%s %s", dateTime.c_str(), deviceName.c_str(),
                   key.c_str(), conditionName.c_str(), eventNodeId.identifier.numeric, state.c_str(),
                   message.length() == 0 ? "" : ("Message ["+message+"]").c_str());


    if (state.compare("Normal") == 0 && nativeCode.length() == 0)
    {
        string key = variable + "@";

        // Reset all the events that are associated with this condition variable if any to Normal
        for (auto iter = m_eventNodes.begin(); iter != m_eventNodes.end(); iter++)
        {
            string k = iter->first;

            if (k.compare(0, key.length(), key) == 0)
            {
                nativeCode = k.substr(key.length(), string::npos);
                sendConditionEvent(iter->second, deviceName, componentId, variable, nativeCode, dateTime, state, message);
            }
        }
    }
}

void agentHandler::updateData(string variable, string dateTime, string data, ptree& pt)
{
    UA_NodeId nodeId = util::toUANodeId(m_namespace, variable);

    UA_NodeId typeNode  = m_fieldDataTypes[variable];
    UA_UInt32 dataType = typeNode.identifier.numeric;

    UA_Double myDouble;
    UA_String myString;
    UA_UInt32 myInt32;

    if (data.compare("UNAVAILABLE") == 0)
    {
        UA_WriteValue wv;

        UA_WriteValue_init(&wv);
        wv.nodeId = nodeId;
        wv.attributeId = UA_ATTRIBUTEID_VALUE;
        wv.value.status = UA_STATUSCODE_BADNOTCONNECTED;
        wv.value.hasStatus = true;
        VerifyReturn(UA_Server_write(m_uaServer, &wv));

        if (dataType == UA_NS0ID_ENUMVALUETYPE)
        {
            myString = UA_STRING("");
            util::writeObject_scalar(m_uaServer, nodeId,
                                     UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(2, "ValueAsText"),
                                     &myString, &UA_TYPES[UA_TYPES_STRING]);
        }
        return;
    }

    UA_Variant myVar;
    UA_Variant_init(&myVar);

    switch (dataType)
    {
    case UA_NS0ID_CONDITIONTYPE:
        // handle by updateCondition
        return;

    case UA_NS0ID_DOUBLE:
        myDouble = atof(data.c_str());
        UA_Variant_setScalar(&myVar, &myDouble, &UA_TYPES[UA_TYPES_DOUBLE]);
        break;

    case MT_THREESPACESAMPLEDATATYPE:
    {
        UA_ThreeSpaceSampleDataType sample;
        double x, y, z;

        if (sscanf(data.c_str(), "%lf %lf %lf", &x, &y, &z) != 3)
            sample.x = sample.y = sample.z = std::numeric_limits<double>::quiet_NaN();
        else
        {
            sample.x = x;
            sample.y = y;
            sample.z = z;
        }
        UA_Variant_setScalar(&myVar, &sample, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_THREESPACESAMPLEDATATYPE]);
        break;
    }

    case MT_ASSETEVENTDATATYPE:
    {
        UA_AssetEventDataType assetEvent;
        string assetId = data;
        string assetType = util::getJSON_data(pt, "<xmlattr>.assetType");

        assetEvent.assetId = util::toUAString(assetId);
        assetEvent.assetType = util::toUAString(assetType);

        UA_Variant_setScalar(&myVar, &assetEvent, &UA_TYPES_MTCONNECT[UA_TYPES_MTCONNECT_ASSETEVENTDATATYPE]);
        break;
    }

    case UA_NS0ID_ENUMVALUETYPE:
        myInt32 = m_typesMgr.lookup(variable, nodeId, data);

        // unknown
        if (myInt32 < 0)
        {
            util::log_error("Cannot map %s", data.c_str());
            return;
        }
        else
        {
            myString = util::toUAString(data);
            util::writeObject_scalar(m_uaServer, nodeId,
                                     UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(2, "ValueAsText"),
                                     &myString, &UA_TYPES[UA_TYPES_STRING]);
        }

        UA_Variant_setScalar(&myVar, &myInt32, &UA_TYPES[UA_TYPES_UINT32]);
        break;

    case UA_NS0ID_STRING:
        myString = util::toUAString(data);
        UA_Variant_setScalar(&myVar, &myString, &UA_TYPES[UA_TYPES_STRING]);
        break;

    default:
        if (lookupChildNodeId(nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(0, "EnumStrings"), nullptr))
        {
            myInt32 = m_typesMgr.lookup(variable, nodeId, data);
            if (myInt32 >= 0)
            {
                UA_Variant_setScalar(&myVar, &myInt32, &UA_TYPES[UA_TYPES_UINT32]);

                myString = util::toUAString(data);               
                util::writeObject_scalar(m_uaServer, nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                                         UA_QUALIFIEDNAME(2, "ValueAsText"),
                                         &myString, &UA_TYPES[UA_TYPES_STRING]);

                // set it to UA_NS0ID_ENUMVALUETYPE, so next time skip the enum load process
                m_fieldDataTypes[variable] = UA_NODEID_NUMERIC(0, UA_NS0ID_ENUMVALUETYPE);
                break;
            }
            else
                // treat it as string next time
                m_fieldDataTypes[variable] = UA_NODEID_NUMERIC(0, UA_NS0ID_STRING);
        }
        myString = util::toUAString(data);
        UA_Variant_setScalar(&myVar, &myString, &UA_TYPES[UA_TYPES_STRING]);
        break;
    }

    util::writeDataWithTimeStamp(m_uaServer, nodeId, dateTime, myVar);
}

bool agentHandler::lookupChildNodeId(UA_NodeId &parentNode, UA_NodeId referenceType,
            const UA_QualifiedName targetName, UA_NodeId *result)
{
    UA_RelativePathElement rpe;
    UA_RelativePathElement_init(&rpe);
    rpe.referenceTypeId = referenceType;
    rpe.isInverse = false;
    rpe.includeSubtypes = false;
    rpe.targetName = targetName;

    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = parentNode;
    bp.relativePath.elementsSize = 1;
    bp.relativePath.elements = &rpe;

    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(m_uaServer, &bp);
    if(bpr.statusCode != UA_STATUSCODE_GOOD ||
        bpr.targetsSize < 1)
        return false;

    if (result != nullptr)
        UA_NodeId_copy(&bpr.targets[0].targetId.nodeId, result);

    UA_BrowsePathResult_deleteMembers(&bpr);
    return true;
}

void agentHandler::getEventTypes(UA_NodeId eventRootNode, UA_NodeId eventTypeNode, map<string, UA_NodeId> &results)
{
    UA_BrowseDescription b_desc;

    UA_BrowseDescription_init(&b_desc);
    b_desc.nodeId = eventRootNode;
    b_desc.resultMask = UA_BROWSERESULTMASK_ALL;
    b_desc.referenceTypeId = UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE);

    UA_BrowseResult res = UA_Server_browse(m_uaServer, 0, &b_desc);
    if (res.referencesSize >= 1)
        for (size_t i=0; i<res.referencesSize; i++)
        {
            UA_ReferenceDescription *ref = &(res.references[i]);

            results.insert(make_pair(util::toString(ref->displayName.text), eventTypeNode));
        }

    UA_BrowseDescription_deleteMembers(&b_desc);
    UA_BrowseResult_deleteMembers(&res);
}

UA_NodeId agentHandler::addCustomPropertyWithData(UA_NodeId parentNode, string propertyName, string value)
{
    UA_NodeId outNodeId;
    UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
    mnAttr.dataType = UA_NODEID_NUMERIC(0, UA_NS0ID_STRING);

    UA_String data = util::toUAString(value);
    UA_Variant_setScalar(&mnAttr.value, &data, &UA_TYPES[UA_TYPES_STRING]);

    mnAttr.displayName = util::toUALocalizedText(propertyName);
    VerifyReturn(UA_Server_addVariableNode(m_uaServer,
                              UA_NODEID_NUMERIC(m_namespace, 0),
                              parentNode,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                              util::toUAQualifiedName(2, propertyName),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
                              mnAttr,
                              NULL,
                              &outNodeId));

    return outNodeId;
}

UA_NodeId agentHandler::addCustomProperty(UA_NodeId parentNode, string propertyName, UA_NodeId dataType)
{
    UA_NodeId outNodeId;
    UA_VariableAttributes mnAttr = UA_VariableAttributes_default;
    mnAttr.dataType = dataType;

    mnAttr.displayName = util::toUALocalizedText(propertyName);
    VerifyReturn(UA_Server_addVariableNode(m_uaServer,
                              UA_NODEID_NUMERIC(m_namespace, 0),
                              parentNode,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                              util::toUAQualifiedName(2, propertyName),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
                              mnAttr,
                              NULL,
                              &outNodeId));

    return outNodeId;
}

void agentHandler::addNotifier(UA_NodeId targetNode, UA_NodeId srcNode, bool setSrcNotifier)
{
    if (targetNode.identifier.numeric == srcNode.identifier.numeric)
        return;

    if (srcNode.identifier.numeric == 0)
        return;

    UA_ExpandedNodeId targetExpId;

    targetExpId.nodeId       = srcNode;
    targetExpId.namespaceUri = UA_STRING_NULL;
    targetExpId.serverIndex  = 0;

    UA_Server_addReference(m_uaServer, targetNode,
                           UA_NODEID_NUMERIC(0, UA_NS0ID_HASNOTIFIER), targetExpId, true);

    VerifyReturn(UA_Server_writeEventNotifier(m_uaServer, setSrcNotifier ? srcNode : targetNode, UA_EVENTNOTIFIERTYPE_SUBSCRIBETOEVENTS));
}

void agentHandler::addNotifierToAll(vector<UA_NodeId> & nodePath)
{
    for (vector<UA_NodeId>::iterator it = nodePath.begin() ; it != nodePath.end(); )
    {
        vector<UA_NodeId>::iterator n = it++;
        if (it == nodePath.end())
            break;

        addNotifier(*n, *it, true);
    }
}

void agentHandler::addMTClassReferences(UA_NodeId nextId, UA_UInt32 classParentId, string displayName, string subType)
{
    UA_ExpandedNodeId targetExpId;

    targetExpId.nodeId       = nextId;
    targetExpId.namespaceUri = UA_STRING_NULL;
    targetExpId.serverIndex  = 0;

    string classTypeName = displayName + "ClassType";
    UA_UInt32 classTypeId = mtIDMap[classTypeName];
    if (classTypeId == 0)
    {
        UA_NodeId objectTypeNodeId;
        UA_NodeId parentClassNode = UA_NODEID_NUMERIC(2, classParentId);
        if (!lookupChildNodeId(parentClassNode,
                    UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                    util::toUAQualifiedName(m_namespace, classTypeName),
                        &objectTypeNodeId))
        {

            UA_ObjectTypeAttributes oAttr = UA_ObjectTypeAttributes_default;
            oAttr.displayName = util::toUALocalizedText(classTypeName);

            VerifyReturn(UA_Server_addObjectTypeNode(m_uaServer,
                                        util::toUANodeId(m_namespace, classTypeName),
                                        UA_NODEID_NUMERIC(2, classParentId),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                        util::toUAQualifiedName(m_namespace, classTypeName),
                                        oAttr,
                                        NULL,
                                        &objectTypeNodeId));
        }

        UA_NodeId_deleteMembers(&objectTypeNodeId);
        VerifyReturn(UA_Server_addReference(m_uaServer,
                      util::toUANodeId(m_namespace, classTypeName),
                      UA_NODEID_NUMERIC(2, MT_HASMTCLASSTYPE), targetExpId, false));

    }
    else
        VerifyReturn(UA_Server_addReference(m_uaServer,
                      UA_NODEID_NUMERIC(2, classTypeId),
                      UA_NODEID_NUMERIC(2, MT_HASMTCLASSTYPE), targetExpId, false));

    if (subType.length() > 0)
    {
        // add MTSubTypeName property
        addCustomPropertyWithData(nextId, "MTSubTypeName", subType);

        string subTypeCamelCase = util::util::toCamelCase(subType);
        string subClassTypeName = subTypeCamelCase + "SubClassType";
        UA_UInt32 subClassTypeId = mtIDMap[subClassTypeName];
        if (subClassTypeId == 0)
        {
            UA_NodeId objectTypeNodeId;
            UA_NodeId parentClassNode = UA_NODEID_NUMERIC(2, MT_MTDATAITEMSUBCLASSTYPE);

            if (!lookupChildNodeId(parentClassNode, UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                             util::toUAQualifiedName(m_namespace, subClassTypeName),
                             &objectTypeNodeId))
            {
                UA_ObjectTypeAttributes oAttr = UA_ObjectTypeAttributes_default;
                oAttr.displayName = util::toUALocalizedText(subClassTypeName);
                VerifyReturn(UA_Server_addObjectTypeNode(m_uaServer,
                                            util::toUANodeId(m_namespace, subClassTypeName),
                                            UA_NODEID_NUMERIC(2, MT_MTDATAITEMSUBCLASSTYPE),
                                            UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                            util::toUAQualifiedName(m_namespace, subClassTypeName),
                                            oAttr,
                                            NULL,
                                            &objectTypeNodeId));
            }

            UA_NodeId_deleteMembers(&objectTypeNodeId);
            VerifyReturn(UA_Server_addReference(m_uaServer,
                          util::toUANodeId(m_namespace, subClassTypeName),
                          UA_NODEID_NUMERIC(2, MT_HASMTSUBCLASSTYPE), targetExpId, false));

        }
        else
            VerifyReturn(UA_Server_addReference(m_uaServer,
                          UA_NODEID_NUMERIC(2, subClassTypeId),
                          UA_NODEID_NUMERIC(2, MT_HASMTSUBCLASSTYPE), targetExpId, false));
    }
}

void agentHandler::setMTTypeNameAndId(UA_NodeId &nextId, string type, string id)
{
    UA_String value;

    value = util::toUAString(id);
    util::writeObject_scalar(m_uaServer, nextId,
                             UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(2, "XmlId"),
                             &value, &UA_TYPES[UA_TYPES_STRING]);

    value = util::toUAString(type);
    util::writeObject_scalar(m_uaServer, nextId,
                             UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY), UA_QUALIFIEDNAME(2, "MTTypeName"),
                             &value, &UA_TYPES[UA_TYPES_STRING]);
}

void agentHandler::researchDisplayNames(ptree &pt, multiset<string> &appendBy)
{
    // collect all the display names at the same level
    for (ptree::iterator pos = pt.begin(); pos != pt.end(); pos++)
    {
        string s = pos->first;
        if (s.compare("<xmlattr>") == 0 || s.compare("Description") == 0)
            continue;

        if (s.compare("DataItem") == 0)
        {
            s = util::getJSON_data(pos->second, "<xmlattr>.type");
            s = util::toCamelCase(s);

            string subtype = util::getJSON_data(pos->second, "<xmlattr>.subType");
            if (subtype.length() > 0)
                s = util::toCamelCase(subtype) + s;

            string category = util::getJSON_data(pos->second, "<xmlattr>.category");
            if (category.compare("CONDITION") == 0)
                s += "Condition";
        }

        string name = util::getJSON_data(pos->second, "<xmlattr>.name");

        appendBy.insert(s); // natural
        appendBy.insert(s + "[" + name + "]"); // appended name to distinguish other same natural name
    }
}
