MTConnect/OPC UA Gateway development is now moved to [Metalogi LLC](https://www.metalogi.io). It is part of MetaAgent product that supports running OPC UA gateway as a plugin in the MTConnect Agent in addition to running as a gateway process. Additional functions are added to allow secured connectionss and support MTConnect standard version 1.7 and 1.8. Metalogi MetaAgent consists of ingress and egress modules for both OPC UA and NC-Link. It provides cross-standard interoperability and simplify your system set up in integrating these standards.
-----
Demo version can be downloaded from https://www.metalogi.io/download. You can also check out the documentation and support site https://github.com/meta-logi/metaagent-support
----

MTConnect OPC UA Gateway server, **opcua-MTServer**, implements MTConnect OPC UA Companion Specification. It connects to MTConnect agents for the information of MT devices and monitors their real-time data.

Building
-------

**opcua-MTServer** is written in C++ using **open62541**, **boost** and **openssl** libraries. It uses **CMake** as the build system. First download and install them:

- [open62541](https://open62541.org/)
- [CMake](https://cmake.org)
- [boost](https://www.boost.org)
- [openssl](https://www.openssl.org) - This is to support https secure protocol. For Windows, after the build, prepend the location of libcrypto.dll and libssl.dll to the PATH system variable.

Then run these commands:

- **mkdir build && cd build**
- **cmake ..**
- **make**

If build successful, **opcua-MTServer** should be generated in the current directory.

Checkout **binaries/Windows/README.md** and **binaries/Ubuntu/README.md** for detailed instructions.

Running
-------

Usage:

- opcua-MTServer **[MTConnect Agent URL address] [poll cycle in seconds]**
  
Example:  opcua-MTServer https://smstestbed.nist.gov/vds/GFAgie01 60
or

- opcua-MTServer **[configuration file]**

Example:  opcua-MTServer opcua.cfg

opcua.cfg is a yaml file with configuration sections for MT Agents, logging and server. For example, check out the configurations in **example.cfg**:

```
# MTConnect agents information
agents:
    - name: GFAgie01
      url:  https://smstestbed.nist.gov/vds/GFAgie01
      freq: 1
    - name: Mazak-5610
      url:  http://mtconnect.mazakcorp.com:5610
      freq: 10
    - name: Mazak-5611
      url:  http://mtconnect.mazakcorp.com:5611
      freq: 10
    - name: Mazak-5612
      url:  http://mtconnect.mazakcorp.com:5612
      freq: 10

# serverity can be debug, info, warn, error or off
logging:
    severity: info

# opcua server program name and its discovery port #
server: 
    name: open62541-based MTConnect Gateway
    port: 4840
    initialWaitTime:      30    # initial wait time before reading data from agents
    warningEventSeverity: 500   # OPC UA event severity level for MTConnect Warning conditions
    faultEventSeverity:   1000   # OPC UA event severity level for MTConnect Fault conditions 

```

opcua-MTServer listens on default port **4840**. OPC UA clients can connect to this server using its endpoint URL **opc.tcp://host's name or ip address:4840**. 

To help our project demonstration, an open62541-based MTConnect Gateway server is set up with the above configuration file **example.cfg**. Its endpoint URL is **opc.tcp://opc.mtconnect.org:4840**. **UAExpoert** or any OPC UA clients can communication with this server via this URL.

Changes since v1.0.0 release
-------

1. Instead of polling MTAgents periodically, the server now reads data streaming from MTAgents. The frequency indicates how long MTAgents accumlate the data before pushing. This improves the efficiency of the data transfer specially on fast updates.
2. Expand configurable parameters:
	- Add initial wait time before reading data from MTAgents. This allows the server to reconnect any OPC UA clients before publishing any new data or events.
	- Define OPC UA event severity level for MTConnect warning and fault conditions.
	- Treat any content after '#' as comments.
	- Add another log level - debug.

Pre-built Binary Releases 
-------

Windows, Ubuntu, MacOS and Raspbian pre-built binaries are available in the release tab:

https://github.com/mtconnect/open62541_ua_server/releases
