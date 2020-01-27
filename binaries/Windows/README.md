## Steps to build opcua-MTServer in Windows

- Install these prerequisites if not already
	- Cygwin64 - https://cygwin.com/install.html
		- select to install make, wget, perl and python37
	- git - https://git-scm.com/download/win
	- cmake - https://cmake.org/download/
	- mingw-w64 - http://mingw-w64.org/doku.php/download/mingw-builds. 
		- select Version: 7.3.0, Architecture: x86_6x, Threads: posix, Exception: seh
		- Edit system variable path to include mingw-w64 bin location. 

Perform the following steps in a Cygwin64 terminal:

- Download and build openssl
	- git clone https://github.com/openssl/openssl.git
	- cd openssl
	- git checkout OpenSSL_1_1_1
	- ./Configure mingw64
	- make
	- make install

- Download and build boost
	- wget https://dl.bintray.com/boostorg/release/1.71.0/source/boost_1_71_0.tar.gz
	- tar zxvf boost*.gz
	- cd boost_1_*
	- ./bootstrap.sh
	- ./b2 link=static install --prefix=c:/boost

- Download and build open62541
	- git clone https://github.com/open62541/open62541.git
	- cd open62541
	- git checkout 1.0
	- git submodule update --init --recursive
	- mkdir build && cd build
	- cmake -DCMAKE_INSTALL_PREFIX=c:/open62541 -DBUILD_SHARED_LIBS=FALSE -DCMAKE_BUILD_TYPE=RelWithDebInfo -DUA_NAMESPACE_ZERO=FULL -DUA_ENABLE_SUBSCRIPTIONS_EVENTS=ON .. -G "Unix Makefiles"
	- make
	- make install

-  Download and build open62541_ua_server
	- git clone https://github.com/mtconnect/open62541_ua_server.git
	- cd open62541_ua_server
	- mkdir build && cd build
	- cmake .. -G "Unix Makefiles"
	- make
	- check if opc-MTServer.exe is built in the current directory

