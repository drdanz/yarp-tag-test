/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-FileCopyrightText: 2006-2010 RobotCub Consortium
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <yarp/os/Network.h>
#include <yarp/os/ResourceFinder.h>

#include <string>
#include <iostream>

using namespace yarp::os;

using namespace std;
int main(int argc, char *argv[])
{
    Network yarp;

    ResourceFinder rf;
    rf.setDefaultConfigFile("config.ini");
    rf.setDefaultContext("randomMotion");
    rf.configure(argc, argv);

    std::string robotName=rf.find("robot").asString();
    std::string partName=rf.find("part").asString();
    int joint=rf.find("joint").asInt32();

    cout<<"Running with:"<<endl;
    cout<<"robot: "<<robotName.c_str()<<endl;
    cout<<"part: "<<partName.c_str()<<endl;
    cout<<"joint: "<<joint<<endl;

    return 0;
}
