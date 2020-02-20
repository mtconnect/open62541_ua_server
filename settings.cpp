#include <iostream>
#include <fstream>

#include <boost/thread.hpp>
#include <boost/tokenizer.hpp>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string/trim.hpp>
#include "settings.h"

using namespace boost;

Settings::Settings()
{
    logDebug = true;
    logInfo = true;
    logWarn = true;
    logError = true;
}

string Settings::get(string key, string defValue)
{
    std::map<string, string>::iterator i = m_collection.find(key);

    if (i != m_collection.end())
        return i->second;

    return defValue;
}

void Settings::set(string key, string value)
{
    m_collection.insert(pair<string, string>(key, value));
}

void Settings::dump()
{
    for (map<string, string>::iterator p = m_collection.begin(); p != m_collection.end(); p++)
        std::cout << p->first << ": " << p->second << std::endl;
}

int Settings::parse(string filename)
{
    ifstream in(filename);
    if (!in.is_open())
        return -1;

    typedef boost::tokenizer<boost::char_separator<char> > tokenizer;
    vector< string > vec;
    string line;
    string keyPath;
    string key;
    string value;
    unsigned long pos;

    int seqNum = 0;

    while (getline(in, line))
    {
        algorithm::trim(line);

        pos = line.find_first_of("#");

        if (pos != string::npos)
        {
            line = line.substr(0, pos);
            algorithm::trim(line);
        }

        // blank line
        if (line.length() == 0)
            continue;

        pos = line.find_first_of(":");

        if (pos == string::npos)
        {
            std::cerr << "Invalid input [" << line << "]" << endl;
            continue;
        }

        key = line.substr(0, pos);
        value = line.substr(pos + 1);

        algorithm::trim(key);
        algorithm::trim(value);

        if (value.length() == 0)
        {
            keyPath = key;
            seqNum = 0;
            continue;
        }

        if (key[0] == '-')
        {
            seqNum++;
            key = key.substr(1);
            algorithm::trim(key);
        }

        if (seqNum != 0)
            key += std::to_string(seqNum);

        m_collection.insert(pair<string, string>(keyPath+"|"+key, value));
    }

    in.close();

    string logLevel = get("logging|severity", "info");
    if (logLevel.compare("info") == 0)
        logDebug = false;
    else
    if (logLevel.compare("warn") == 0)
    {
        logDebug = false;
        logInfo = false;
    }
    else if (logLevel.compare("error") == 0)
    {
        logDebug = false;
        logInfo = false;
        logWarn = false;
    }
    else if (logLevel.compare("off") == 0)
    {
        logDebug = false;
        logInfo = false;
        logWarn = false;
        logError = false;
    }

    return 0;
}

