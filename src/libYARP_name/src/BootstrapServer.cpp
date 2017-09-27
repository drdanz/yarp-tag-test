/*
 * Copyright (C) 2009 RobotCub Consortium
 * Authors: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#include <yarp/conf/system.h>

#include <yarp/os/impl/FallbackNameServer.h>


#include <yarp/os/impl/NameServer.h>
#include <yarp/os/impl/NameConfig.h>
#include <yarp/os/all.h>

#include <yarp/name/NameServerConnectionHandler.h>

#include <yarp/name/BootstrapServer.h>

using namespace yarp::os;
using namespace yarp::name;
using namespace yarp::os::impl;

/**
 *
 * Adapt YARP multicast server to use a different NameService.
 *
 */

class BootstrapServerAdapter : public NameServerStub {
private:
    FallbackNameServer *fallback;
    NameServerConnectionHandler handler;
public:
    BootstrapServerAdapter(NameService& owner) : handler(&owner) {
        fallback = new FallbackNameServer(*this);
        if (fallback==NULL) {
            fprintf(stderr,"Cannot allocate ServerAdapter\n");
            ::exit(1);
        }
    }

    virtual ~BootstrapServerAdapter() {
        if (fallback!=NULL) delete fallback;
        fallback = NULL;
    }

    virtual ConstString apply(const ConstString& txt, const Contact& remote) override {
        DummyConnector con, con2;
        con.setTextMode(true);
        ConnectionWriter& writer = con.getWriter();
        writer.appendString(txt.c_str());
        bool ok = handler.apply(con.getReader(),&(con2.getWriter()));
        ConstString result = "";
        if (ok) {
            result = con2.getReader().expectText().c_str();
        }
        printf("ASKED %s, GAVE %s\n", txt.c_str(), result.c_str());
        return result;
    }

    bool start() {
        return fallback->start();
    }

    bool stop() {
        fallback->close();
        return true;
    }
};

BootstrapServer::BootstrapServer(NameService& owner) {

    implementation = new BootstrapServerAdapter(owner);
    if (implementation==NULL) {
        fprintf(stderr,"Cannot allocate ServerAdapter\n");
        ::exit(1);
    }
}

BootstrapServer::~BootstrapServer() {

    if (implementation!=NULL) {
        delete ((BootstrapServerAdapter*)implementation);
        implementation = NULL;
    }

}

bool BootstrapServer::start() {

    if (implementation!=NULL) {
        return ((BootstrapServerAdapter*)implementation)->start();
    }
    return false;
}

bool BootstrapServer::stop() {

    if (implementation!=NULL) {
        return ((BootstrapServerAdapter*)implementation)->stop();
    }
    return false;
}


bool BootstrapServer::configFileBootstrap(yarp::os::Contact& contact,
                                          bool configFileRequired,
                                          bool mayEditConfigFile) {
    Contact suggest = contact;

    // see what address is lying around
    Contact prev;
    NameConfig conf;
    if (conf.fromFile()) {
        prev = conf.getAddress();
    } else if (configFileRequired) {
        fprintf(stderr,"Could not read configuration file %s\n",
                conf.getConfigFileName().c_str());
        return false;
    }

    // merge
    if (prev.isValid()) {
        if (suggest.getHost() == "...") {
            suggest.setHost(prev.getHost());
        }
        if (suggest.getCarrier() == "...") {
            suggest.setCarrier(prev.getCarrier());
        }
        if (suggest.getPort() == 0) {
            suggest.setPort(prev.getPort());
        }
    }

    if (suggest.getRegName() == "...") {
        suggest.setName(conf.getNamespace());
    }

    // still something not set?
    if (suggest.getPort() == 0) {
        suggest.setPort(10000);
    }
    if (suggest.getHost() == "...") {
        // should get my IP
        suggest.setHost(conf.getHostName());
    }

    if (!configFileRequired)  {
        // finally, should make sure IP is local, and if not, correct it
        if (!conf.isLocalName(suggest.getHost())) {
            fprintf(stderr,"Overriding non-local address for name server\n");
            suggest.setHost(conf.getHostName());
        } else {
            // Let's just check we're not a loopback
            ConstString betterHost = conf.getHostName(false,suggest.getHost());
            if (betterHost!=suggest.getHost()) {
                fprintf(stderr,"Overriding loopback address for name server\n");
                suggest.setHost(betterHost);
            }
        }
    }

    bool changed = false;
    if (prev.isValid()) {
        changed = (prev.getHost() != suggest.getHost()) ||
            (prev.getPort() != suggest.getPort()) ||
            (conf.getMode() != "yarp" && conf.getMode() != "");
    }
    if (changed && !mayEditConfigFile) {
        fprintf(stderr,"PROBLEM: need to change settings in %s\n",
                conf.getConfigFileName().c_str());
        fprintf(stderr,"  Current settings: host %s port %d family %s\n",
                prev.getHost().c_str(), prev.getPort(),
                (conf.getMode()=="")?"yarp":conf.getMode().c_str());
        fprintf(stderr,"  Desired settings:  host %s port %d family %s\n",
                suggest.getHost().c_str(), suggest.getPort(), "yarp");
        fprintf(stderr,"Please specify '--write' if it is ok to overwrite current settings, or\n");
        fprintf(stderr,"Please specify '--read' to use the current settings, or\n");
        fprintf(stderr,"delete %s\n", conf.getConfigFileName().c_str());
        return false;
    }
    bool shouldSave = changed || !prev.isValid();

    if (shouldSave) {
        // and save
        conf.setAddress(suggest);
        if (!conf.toFile()) {
            fprintf(stderr,"Could not save configuration file %s\n",
                    conf.getConfigFileName().c_str());
        }
    }

    contact = suggest;
    return true;
}


Contact BootstrapServer::where() {
    Contact addr = FallbackNameServer::getAddress();
    addr.setName("fallback");
    return addr;
}

//#endif

