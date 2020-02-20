#ifndef HTTPREADER_H
#define HTTPREADER_H

#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/ssl/error.hpp>
#include <boost/asio/ssl/stream.hpp>
#include <boost/asio/ip/tcp.hpp>

#include <string>


namespace beast = boost::beast;     // from <boost/beast.hpp>
namespace http = boost::beast::http;    // from <boost/beast/http.hpp>
namespace net = boost::asio;    // from <boost/asio.hpp>
namespace ssl = net::ssl;       // from <boost/asio/ssl.hpp>

using namespace std;
using tcp = boost::asio::ip::tcp;       // from <boost/asio/ip/tcp.hpp>


class HttpReader
{
private:
    string m_uri;

    string m_scheme;
    string m_user;
    string m_host;
    string m_port;
    string m_path;
    string m_query;
    string m_fragment;
    bool m_isSSL;

    tcp::socket *m_stream;
    net::io_context m_ioc;

    http::response<http::string_body> m_res;

    bool connectSSL();
    string readSSL();

    bool read(bool streamData);
    void readStream();

public:
    HttpReader();
    ~HttpReader();

    string getXmlData() { return m_res.body().data(); }

    void setQuery(string query) { m_query = query; }
    bool parseUri(const string &uri);
    bool connect();
    void close();
    bool processQuery() { return read(false); };
    bool processStream() { return read(true); }

    virtual void onRead(string xmlData) = 0;
};


#endif // HTTPREADER_H
