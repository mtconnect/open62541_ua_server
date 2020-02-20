PROJECT(opcua-MTServer)
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# Boost/openSSL/open62541 settings

SET(Boost_USE_STATIC_LIBS       ON)  # only find static libs
SET(Boost_USE_MULTITHREADED     ON)
SET(Boost_USE_STATIC_RUNTIME    OFF)
#SET(Boost_DEBUG                 ON)
SET(Boost_NO_BOOST_CMAKE ON)

IF (WIN32)
    SET(Boost_ARCHITECTURE          "-x64")
    SET(open62541_INCLUDE_DIR               c:/open62541/include)
    SET(open62541_LIBRARY               c:/open62541/lib/libopen62541.a)
ELSEIF(APPLE)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility-inlines-hidden -fvisibility=hidden")
ENDIF()

FIND_PACKAGE(Boost REQUIRED COMPONENTS thread filesystem log)

# openSSL settings
IF (WIN32)
    SET(OPENSSL_USE_STATIC_LIBS TRUE)
ELSE()
    SET(OPENSSL_USE_STATIC_LIBS FALSE)
ENDIF()

FIND_PACKAGE(OpenSSL REQUIRED)

INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} ${open62541_INCLUDE_DIR} )

ADD_COMPILE_OPTIONS(-w -std=c++11)

ADD_EXECUTABLE(opcua-MTServer opcua_server.cpp types_mgr.cpp mtconnect_ids.cpp nodeset.cpp agenthandler.cpp httpreader.cpp settings.cpp worker.cpp util.cpp types_mtconnect_generated.cpp)

IF (WIN32)
    SET(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

    TARGET_LINK_LIBRARIES( opcua-MTServer LINK_PUBLIC ${Boost_LIBRARIES} Boost::thread Boost::filesystem OpenSSL::SSL ${OPENSSL_CRYPTO_LIBRARY} ${open62541_LIBRARY} ws2_32 mswsock advapi32)

    INSTALL(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION "bin" COMPONENT applications)

    #
    # CPACK macros below here
    #
    SET (CPACK_GENERATOR NSIS)
    SET (CPACK_NSIS_MODIFY_PATH ON)

ELSE()

FIND_PACKAGE(open62541 REQUIRED)
TARGET_LINK_LIBRARIES( opcua-MTServer LINK_PUBLIC ${Boost_LIBRARIES} OpenSSL::SSL open62541::open62541 ${ZLIB_LIBRARIES} ${CMAKE_DL_LIBS} )

    INSTALL(TARGETS ${PROJECT_NAME} DESTINATION ".")

    SET (CPACK_GENERATOR ZIP)
ENDIF()

SET (CPACK_PACKAGE_NAME "opcua-MTServer")
SET (CPACK_PACKAGE_VENDOR "MTConnect")
SET (CPACK_PACKAGE_DESCRIPTION_SUMMARY "opcua-MTServer - OPCUA gateway server to MTConnect agents")
SET (CPACK_PACKAGE_VERSION "1.1.0")
SET (CPACK_PACKAGE_VERSION_MAJOR "1")
SET (CPACK_PACKAGE_VERSION_MINOR "1")
SET (CPACK_PACKAGE_VERSION_PATCH "0")
SET (CPACK_PACKAGE_INSTALL_DIRECTORY "MTConnect OPCUA Server")


# Must be after the last CPACK macros
INCLUDE(CPack)
