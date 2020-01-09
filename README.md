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

Usage:

- opcua-MTServer **[MTConnect Agent URL address] [poll cycle in seconds]**
  
Example:  opcua-MTServer https://smstestbed.nist.gov/vds/GFAgie01 60
or

- opcua-MTServer **[configuration file]**

Example:  opcua-MTServer opcua.cfg

opcua.cfg allows connections to multiple MTConnect Agents. The file is a CSV file. Each line contains <agent's url> and its poll frequency in seconds.

opcua-MTServer listens on default port 4840. OPC UA clients can connect to this server using its endpoint URL **opc.tcp://<host server ip address>:4840**

Binary Releases 
-------

Windows, Ubuntu, MacOS and Raspberry PI 4 pre-built binaries are available:

Windows: [opcua-MTServer-1.0.0-win32.zip](https://github.com/mtconnect/open62541_ua_server/files/3993033/opcua-MTServer-1.0.0-win32.zip)

Ubunt: [opcua-MTServer-1.0.0rc2-Linux.zip](https://github.com/mtconnect/open62541_ua_server/files/3993002/opcua-MTServer-1.0.0rc2-Linux.zip)

MacOS: [opcua-MTServer-1.0.0rc2-Darwin.zip](https://github.com/mtconnect/open62541_ua_server/files/3992997/opcua-MTServer-1.0.0rc2-Darwin.zip)

Raspberry PI 4: [opcua-MTServer-1.0.0rc2-Linux.zip](https://github.com/mtconnect/open62541_ua_server/files/3993028/opcua-MTServer-1.0.0rc2-Linux.zip)

