#include <open62541/server.h>
#include <open62541/types.h>

#include <boost/property_tree/xml_parser.hpp>
#include <boost/thread/thread.hpp>
#include <boost/chrono.hpp>

#include <pthread.h>
#include <iostream>

#include "util.h"

static Settings settings;

Settings &util::getSettings()
{
    return settings;
}

void util::writeDataWithTimeStamp(UA_Server *server, UA_NodeId nodeId, string dateTime, UA_Variant &myVar)
{
    UA_WriteValue wv;
    UA_WriteValue_init(&wv);
    wv.nodeId = nodeId;
    wv.attributeId = UA_ATTRIBUTEID_VALUE;

    wv.value.sourceTimestamp = util::toUADateTime(dateTime);
    wv.value.hasSourceTimestamp = true;
    wv.value.hasStatus = false;
    wv.value.value = myVar;
    wv.value.hasValue = true;
    VerifyReturn(UA_Server_write(server, &wv));
}

bool util::writeNodeData(UA_Server *server, UA_NodeId &nodeId, string result)
{
    UA_Variant data;
    UA_Variant_init(&data);

    UA_String value = util::toUAString(result);

    UA_Variant_setScalar(&data, &value, &UA_TYPES[UA_TYPES_STRING]);

    return VerifyReturn(UA_Server_writeValue(server, nodeId, data));
}

UA_StatusCode
util::writeObject(UA_Server *server, const UA_NodeId objectId,
                            UA_NodeId referenceType,
                            const UA_QualifiedName componentName,
                            const UA_Variant value)
{
    UA_RelativePathElement rpe;
    UA_RelativePathElement_init(&rpe);
    rpe.referenceTypeId = referenceType;
    rpe.isInverse = false;
    rpe.includeSubtypes = false;
    rpe.targetName = componentName;

    UA_BrowsePath bp;
    UA_BrowsePath_init(&bp);
    bp.startingNode = objectId;
    bp.relativePath.elementsSize = 1;
    bp.relativePath.elements = &rpe;

    UA_StatusCode retval;
    UA_BrowsePathResult bpr = UA_Server_translateBrowsePathToNodeIds(server, &bp);
    if(bpr.statusCode != UA_STATUSCODE_GOOD || bpr.targetsSize < 1) {
        retval = bpr.statusCode;
        UA_BrowsePathResult_deleteMembers(&bpr);
        return retval;
    }

    retval = UA_Server_writeValue(server, bpr.targets[0].targetId.nodeId, value);

    UA_BrowsePathResult_deleteMembers(&bpr);
    return retval;
}

UA_StatusCode
util::writeObject_scalar(UA_Server *server, const UA_NodeId objectId,
                         UA_NodeId referenceType,
                         const UA_QualifiedName componentName,
                         const void *value, const UA_DataType *type)
{
    UA_Variant var;
    UA_Variant_init(&var);
    UA_Variant_setScalar(&var, (void*)(uintptr_t)value, type);
    return writeObject(server, objectId, referenceType, componentName, var);
}


string
util::toCamelCase(string &input)
{
    const char *line = input.c_str();
    char *ret = (char *)malloc(input.size() + 1);
    char *p = ret;
    bool wordStart = true;

    for (size_t index = 0; index < input.size(); index++)
    {
        char c = line[index];
        if (isalpha(c))
        {
            if (wordStart)
            {
                *p++ = toupper(c);
                wordStart = false;
            }
            else
                *p++ = tolower(c);
        }
        else
        {
            // allow only ' ' and _ to separate words
            // otherwise take the last word
            if (c != ' ' && c != '_')
            {
                *p = '\0';
                p = ret;
            }
            wordStart = true;
        }
    }

    *p = '\0';
    string result = string(ret);
    free(ret);

    return result;
}

UA_DateTime util::toUADateTime(string &dateTime)
{
    struct tm tm;
    strptime(dateTime.c_str(), "%Y-%m-%dT%H:%M:%S", &tm);
    tm.tm_isdst = -1;
    time_t dt = mktime(&tm);

    unsigned long pos = dateTime.find_first_of(".");
    int milliSec = std::stoi(dateTime.substr(pos + 1, 3));

    UA_DateTime eventTime = UA_DateTime_fromUnixTime(dt) + milliSec * UA_DATETIME_MSEC;

    return eventTime;
}


string util::getJSON_data(ptree & tree, string path)
{
    try {
        ptree& node = tree.get_child(path);
        return node.data();

    } catch (...) {
        return "";
    }
}

bool util::isLeafNode(ptree::iterator &p)
{
    size_t size = p->second.size();

    if (size > 1)
        return false;

    if (size == 0)
        return true;

    try {
        ptree& node = p->second.get_child("<xmlattr>");
        return true;

    } catch (...) {
        return false;
    }
}

void util::dump(ptree &pt)
{
    std::ostringstream oss;
    write_xml(oss, pt);

    cout << oss.str();
}

void util::strptime(const char* s,
                          const char* f,
                          struct tm* tm)
{
    std::istringstream input(s);
    input.imbue(std::locale(setlocale(LC_ALL, nullptr)));
    input >> std::get_time(tm, f);
}

void util::log(const char * level, const char *msg, va_list args)
{
    static pthread_mutex_t printf_mutex = PTHREAD_MUTEX_INITIALIZER;

    UA_Int64 tOffset = UA_DateTime_localTimeUtcOffset();
    UA_DateTimeStruct dts = UA_DateTime_toStruct(UA_DateTime_now() + tOffset);

    pthread_mutex_lock(&printf_mutex);

    printf("[%04u-%02u-%02u %02u:%02u:%02u.%03u (UTC%+05d)] %-5s ",
           dts.year, dts.month, dts.day, dts.hour, dts.min, dts.sec, dts.milliSec,
           (int)(tOffset / UA_DATETIME_SEC / 36), level);

    vprintf(msg, args);
    printf("\n");
    fflush(stdout);

    pthread_mutex_unlock(&printf_mutex);
}

void util::log(const char *msg, ...)
{
    va_list args;
    va_start(args, msg);
    log("info", msg, args);
}

void util::log_debug(const char *msg, ...)
{
    if (!settings.logDebug)
        return;

    va_list args;
    va_start(args, msg);
    log("debug", msg, args);
}

void util::log_info(const char *msg, ...)
{
    if (!settings.logInfo)
        return;

    va_list args;
    va_start(args, msg);
    log("info", msg, args);
}

void util::log_warn(const char *msg, ...)
{
    if (!settings.logWarn)
        return;

    va_list args;
    va_start(args, msg);
    log("warn", msg, args);
}

void util::log_error(const char *msg, ...)
{
    if (!settings.logError)
        return;

    va_list args;
    va_start(args, msg);
    log("error", msg, args);
}

void util::sleep(int seconds)
{
    boost::this_thread::sleep_for( boost::chrono::seconds(seconds) );
}
