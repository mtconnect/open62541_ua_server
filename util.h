#ifndef UTIL_H
#define UTIL_H

#include <open62541/server.h>
#include <boost/property_tree/ptree.hpp>
#include <string>

#include <stdarg.h>

using namespace std;
using boost::property_tree::ptree;

#define VerifyReturn(a) util::handleStatus(a, __FUNCTION__, __FILE__, __LINE__ )

class util
{
public:
    static string toString(UA_String& ua_str) {
        return std::string(reinterpret_cast<char*>(ua_str.data), ua_str.length);
    }

    static UA_String toUAString(string &str) {
        return UA_STRING((char*) str.c_str());
    }

    static UA_LocalizedText toUALocalizedText(string &str) {
        return UA_LOCALIZEDTEXT("en-US", (char*) str.c_str());
    }

    static UA_QualifiedName toUAQualifiedName(UA_UInt16 nsIndex, string &str) {
        return UA_QUALIFIEDNAME(nsIndex, (char*) str.c_str());
    }

    static UA_NodeId toUANodeId(UA_UInt16 nsIndex, string &str) {
        return UA_NODEID_STRING (nsIndex, (char*) str.c_str());
    }

    static UA_DateTime toUADateTime(string &dateTime);

    static inline bool handleStatus(UA_StatusCode status, const char *function, const char *filename, int linenum)
    {
        if (status == UA_STATUSCODE_GOOD)
            return true;
        else
        {
            fprintf(stderr, "UA call error (%s, %s, %d): [%s]\n", function, filename, linenum, UA_StatusCode_name(status));
            return false;
        }
    }

    static string toCamelCase(string &input);

    static string getJSON_data(ptree &tree, string path);
    static bool isLeafNode(ptree::iterator &p);
    static void dump(ptree &pt);
    static void strptime(const char* s, const char* f, struct tm* tm);

    static void writeDataWithTimeStamp(UA_Server *server, UA_NodeId nodeId, string dateTime, UA_Variant &myVar);
    static bool writeNodeData(UA_Server *server, UA_NodeId &nodeId, string result);

    static UA_StatusCode writeObject(UA_Server *server, const UA_NodeId objectId,
                                  const UA_NodeId referenceType,
                                  const UA_QualifiedName componentName,
                                  const UA_Variant value);

    static UA_StatusCode writeObject_scalar(UA_Server *server, const UA_NodeId objectId,
                                  const UA_NodeId referenceType,
                                  const UA_QualifiedName componentName,
                                  const void *value, const UA_DataType *type);

    static void log(const char * level, const char *msg, va_list args);

    static void log_info(const char *msg, ...)  { va_list args; va_start(args, msg); log("info", msg, args);  }
    static void log_warn(const char *msg, ...)  { va_list args; va_start(args, msg); log("warn", msg, args);  }
    static void log_error(const char *msg, ...) { va_list args; va_start(args, msg); log("error", msg, args); }

};

#endif // UTIL_H
