#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <string>
#include <map>

using namespace std;

class Settings
{
private:
    map< string, string > m_collection;

public:
    bool logInfo;
    bool logWarn;
    bool logError;

    int parse(string filename);

    string get(string key, string defValue);
    void set(string key, string value);

    void dump();

    Settings();
};

#endif // ITEMMANAGER_H
