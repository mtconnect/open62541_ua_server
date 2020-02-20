#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>

#include <boost/asio.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/beast/http/read.hpp>


#include <cstdlib>
#include <iostream>
#include <cctype>
#include <regex>

#include "httpreader.h"

#include "util.h"

namespace beast = boost::beast; // from <boost/beast.hpp>
namespace http = beast::http;   // from <boost/beast/http.hpp>

HttpReader::HttpReader()
{
    m_stream = nullptr;
    m_isSSL = false;
}

HttpReader::~HttpReader()
{
    close();
}

bool HttpReader::connect()
{
    try {
        if (m_scheme.compare("https") == 0)
            connectSSL();
        else {

            // These objects perform our I/O
            tcp::resolver resolver(m_ioc);
            m_stream = new tcp::socket(m_ioc);

            // Look up the domain name
            auto const results = resolver.resolve(m_host, m_port);

            boost::asio::connect(*m_stream, results.begin(), results.end());
        }
    }
    catch (exception &e)
    {
        close();
        util::log_error("%s error: [%s]", m_uri.c_str(), e.what());
        return false;
    }

    boost::system::error_code ec;
    boost::asio::socket_base::keep_alive option(true);
    m_stream->set_option(option, ec);

    boost::asio::ip::tcp::no_delay noDelayOption(true);
    m_stream->set_option(noDelayOption);

    util::log_debug("%s connected", m_uri.c_str());
    return true;
}


bool HttpReader::connectSSL()
{
    // The SSL context is required, and holds certificates
    ssl::context ctx(ssl::context::tlsv12_client);

    // Verify the remote server's certificate
    ctx.set_verify_mode(ssl::verify_none);

    // These objects perform our I/O
    tcp::resolver resolver(m_ioc);
    ssl::stream<tcp::socket> *stream = new ssl::stream<tcp::socket>(m_ioc, ctx);

    // Set SNI Hostname (many hosts need this to handshake successfully)
    if(!SSL_set_tlsext_host_name(stream->native_handle(), m_host.c_str()))
    {
        delete stream;
        beast::error_code ec{static_cast<int>(::ERR_get_error()), net::error::get_ssl_category()};
        throw beast::system_error{ec};
    }

    // Look up the domain name
    auto const results = resolver.resolve(m_host, m_port);

    // Make the connection on the IP address we get from a lookup
    boost::asio::connect(stream->next_layer(), results.begin(), results.end());

    // Perform the SSL handshake
    stream->handshake(ssl::stream_base::client);

    if (m_stream)
    {
        if (m_isSSL)
            delete (ssl::stream<tcp::socket> *)m_stream;
        else
            delete m_stream;
    }

    m_stream = (tcp::socket *)stream;

    return true;
}

void HttpReader::close()
{
    if (m_stream != nullptr)
    {
        try {
            beast::error_code ec;
            m_stream->shutdown(tcp::socket::shutdown_both, ec);
        }
        catch (exception &e)
        {
            util::log_error("%s", e.what());
        }

        if (m_isSSL)
            delete (ssl::stream<tcp::socket> *)m_stream;
        else
            delete m_stream;

        m_stream = nullptr;
        util::log_debug("%s disconnected", m_uri.c_str());
    }
}


bool HttpReader::read(bool streamData)
{
    m_res.clear();

    if (m_stream == nullptr)
    {
        // try to reconnect
        if (!connect())
            return false;
    }

    // Declare a container to hold the response

    string fullPath = m_path + m_query;

    util::log_info("%s read %s", m_uri.c_str(), fullPath.c_str());

    try {

        // Set up an HTTP GET request message
        http::request<http::string_body> req{ http::verb::get, fullPath, 11 };

        req.set(http::field::host, m_host);
        req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);
        req.set(http::field::connection, "Keep-Alive");

        if (m_isSSL)
            http::write(*(ssl::stream<tcp::socket> *)m_stream, req);
        else
            http::write(*m_stream, req);

        if (!streamData)
        {
            // Receive the HTTP response
            beast::flat_buffer buffer;

            if (m_isSSL)
                http::read(*(ssl::stream<tcp::socket> *)m_stream, buffer, m_res);
            else
                http::read(*m_stream, buffer, m_res);

            util::log_info("%s read %s OK", m_uri.c_str(), fullPath.c_str());

        }
        else
        {
            readStream();
        }
    }
    catch(std::exception const& e)
    {
        util::log_error("%s read %s error:[%s]", m_uri.c_str(), fullPath.c_str(), e.what());

        // try reconnect
        close();
        return false;
    }

    return true;
}


static const char* SCHEME_REGEX   = "((http[s]?)://)?";  // match http or https before the ://
static const char* USER_REGEX     = "(([^@/:\\s]+)@)?";  // match anything other than @ / : or whitespace before the ending @
static const char* HOST_REGEX     = "([^@/:\\s]+)";      // mandatory. match anything other than @ / : or whitespace
static const char* PORT_REGEX     = "(:([0-9]{1,5}))?";  // after the : match 1 to 5 digits
static const char* PATH_REGEX     = "(/[^:#?\\s]*)?";    // after the / match anything other than : # ? or whitespace
static const char* QUERY_REGEX    = "(\\?(([^?;&#=]+=[^?;&#=]+)([;|&]([^?;&#=]+=[^?;&#=]+))*))?"; // after the ? match any number of x=y pairs, seperated by & or ;
static const char* FRAGMENT_REGEX = "(#([^#\\s]*))?";    // after the # match anything other than # or whitespace

static const std::regex regExpr(std::string("^")
    + SCHEME_REGEX + USER_REGEX
    + HOST_REGEX + PORT_REGEX
    + PATH_REGEX + QUERY_REGEX
    + FRAGMENT_REGEX + "$");

bool HttpReader::parseUri(const string &uri)
{
    m_uri = uri;

    std::smatch matchResults;
    if (std::regex_match(uri.cbegin(), uri.cend(), matchResults, regExpr))
    {
        m_scheme.assign(matchResults[2].first, matchResults[2].second);
        boost::algorithm::to_lower(m_scheme);

        m_user.assign(matchResults[4].first, matchResults[4].second);
        m_host.assign(matchResults[5].first, matchResults[5].second);
        m_port.assign(matchResults[7].first, matchResults[7].second);
        m_path.assign(matchResults[8].first, matchResults[8].second);
        m_query.assign(matchResults[10].first, matchResults[10].second);
        m_fragment.assign(matchResults[15].first, matchResults[15].second);

        if (m_port.length() == 0)
        {
            if (m_scheme.compare("https") == 0)
            {
                m_port = "443";
                m_isSSL = true;
            }
            else
                m_port = "80";
        }
        return true;
    }

    return false;
}

void HttpReader::readStream()
{
    // Declare the parser with an empty body since
    // we plan on capturing the chunks ourselves.
    http::response_parser<http::empty_body> p;

    // Allow for an unlimited body size
    p.body_limit((std::numeric_limits<std::uint64_t>::max)());

    // First read the complete header
    beast::error_code ec;
    beast::flat_buffer buffer;

    if (m_isSSL)
        http::read_header(*(ssl::stream<tcp::socket> *)m_stream, buffer, p, ec);
    else
        http::read_header(*m_stream, buffer, p, ec);

    if (ec)
        throw std::runtime_error(ec.message());

    // This string will hold the body of each chunk
    std::string chunk;

    // This container will hold the extensions for each chunk
    http::chunk_extensions ce;

    // Declare our chunk header callback  This is invoked
    // after each chunk header and also after the last chunk.
    auto header_cb =
    [&](std::uint64_t size,         // Size of the chunk, or zero for the last chunk
        beast::string_view extensions,     // The raw chunk-extensions string. Already validated.
        beast::error_code& ev)             // We can set this to indicate an error
    {
        // Parse the chunk extensions so we can access them easily
        ce.parse(extensions, ev);
        if (ev)
            return;

        // See if the chunk is too big
        if (size > (std::numeric_limits<std::size_t>::max)())
        {
            ev = http::error::body_limit;
            return;
        }

        // Make sure we have enough storage, and
        // reset the container for the upcoming chunk
        chunk.reserve(static_cast<std::size_t>(size));
        chunk.clear();
    };

    // Set the callback.
    p.on_chunk_header(header_cb);


    // Declare the chunk body callback.
    auto body_cb =
    [&](std::uint64_t remain,   // The number of bytes left in this chunk
        beast::string_view body,       // A buffer holding chunk body data
        beast::error_code& ec)         // We can set this to indicate an error
    {
        // If this is the last piece of the chunk body,
        // set the error so that the call to `read` returns
        // and we can process the chunk.
        if (remain == body.size())
            ec = http::error::end_of_chunk;

        // Append this piece to our container
        chunk.append(body.data(), body.size());

        // The return value informs the parser of how much of the body we
        // consumed.
        return body.size();
    };
    p.on_chunk_body(body_cb);

    boost::asio::streambuf response;

    string xmlString;
    while(! p.is_done())
    {
        if (m_isSSL)
            http::read(*(ssl::stream<tcp::socket> *)m_stream, buffer, p, ec);
        else
            http::read(*m_stream, buffer, p, ec);

        if (!ec)
            continue;
        else if (ec != http::error::end_of_chunk)
            throw std::runtime_error(ec.message());
        else
            ec = {};

        response.sputn(chunk.c_str(), chunk.size());

        string line;
        std::istream response_stream(&response);

        const string start_marker = "<MTConnectStreams";
        const string end_marker = "</MTConnectStreams>";

        while (std::getline(response_stream, line))
        {
            // look for xml message between sections
            if (line == "\r")
            {
                // it should only have one xml message, assume multiples on the safe side
                while (xmlString.length() > 0)
                {
                    size_t found = xmlString.find(end_marker);

                    if (found == string::npos)
                        break;

                    string extract = xmlString.substr(0, found + end_marker.length());

                    xmlString = xmlString.substr(found + end_marker.length());

                    found = extract.find(start_marker);
                    if (found != string::npos)
                        extract = extract.substr(found);
                    else
                    {
                        util::log_error("unknown xml [%s]", extract.c_str());
                        break;
                    }

                    onRead(extract);
                }
            }
            else
                xmlString += line;
        }
    }
}
