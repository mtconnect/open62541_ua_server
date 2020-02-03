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
    - name: NIST
      url: https://smstestbed.nist.gov/vds/
      freq: 2
    - name: Mazak1
      url: http://66.42.196.108:5610
      freq: 5
    - name: Mazak2
      url: http://66.42.196.108:5611
      freq: 5
    - name: Mazak3
      url: http://66.42.196.108:5612
      freq: 5

# serverity can be info, warn, error or fatal
logging:
    severity: warn

# opcua server program name and its discover port #
server: 
    name: open62541-based MTConnect Gateway
    port: 4840
```

opcua-MTServer listens on default port **4840**. OPC UA clients can connect to this server using its endpoint URL **opc.tcp://host's name or ip address:4840**. 

A demo server is set up on **opc.tcp://opc.mtconnect.org:4840**.

Binary Releases 
-------

Windows, Ubuntu, MacOS and Raspberry PI 4 pre-built binaries are available:

Windows: [opcua-MTServer-1.0.0-win32.zip](https://github.com/mtconnect/open62541_ua_server/files/3993033/opcua-MTServer-1.0.0-win32.zip)

Ubunt: [opcua-MTServer-1.0.0rc2-Linux.zip](https://github.com/mtconnect/open62541_ua_server/files/3993002/opcua-MTServer-1.0.0rc2-Linux.zip)

MacOS: [opcua-MTServer-1.0.0rc2-Darwin.zip](https://github.com/mtconnect/open62541_ua_server/files/3992997/opcua-MTServer-1.0.0rc2-Darwin.zip)

Raspberry PI 4: [opcua-MTServer-1.0.0rc2-Linux.zip](https://github.com/mtconnect/open62541_ua_server/files/3993028/opcua-MTServer-1.0.0rc2-Linux.zip)

