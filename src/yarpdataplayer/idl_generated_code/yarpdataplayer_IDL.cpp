/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarpdataplayer_IDL.h>

#include <yarp/os/idl/WireTypes.h>

class yarpdataplayer_IDL_step_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_step_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_step_helper::s_return_helper = {};

yarpdataplayer_IDL_step_helper::yarpdataplayer_IDL_step_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_step_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("step", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_step_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_setFrame_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_setFrame_helper(const std::int32_t frameNum);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    std::int32_t m_frameNum;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_setFrame_helper::s_return_helper = {};

yarpdataplayer_IDL_setFrame_helper::yarpdataplayer_IDL_setFrame_helper(const std::int32_t frameNum) :
        m_frameNum{frameNum}
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_setFrame_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("setFrame", 1, 1)) {
        return false;
    }
    if (!writer.writeI32(m_frameNum)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_setFrame_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_getFrame_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_getFrame_helper(const std::string& name);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    std::string m_name;

    thread_local static std::int32_t s_return_helper;
};

thread_local std::int32_t yarpdataplayer_IDL_getFrame_helper::s_return_helper = {};

yarpdataplayer_IDL_getFrame_helper::yarpdataplayer_IDL_getFrame_helper(const std::string& name) :
        m_name{name}
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_getFrame_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("getFrame", 1, 1)) {
        return false;
    }
    if (!writer.writeString(m_name)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_getFrame_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readI32(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_load_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_load_helper(const std::string& path);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    std::string m_path;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_load_helper::s_return_helper = {};

yarpdataplayer_IDL_load_helper::yarpdataplayer_IDL_load_helper(const std::string& path) :
        m_path{path}
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_load_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("load", 1, 1)) {
        return false;
    }
    if (!writer.writeString(m_path)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_load_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_getSliderPercentage_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_getSliderPercentage_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::int32_t s_return_helper;
};

thread_local std::int32_t yarpdataplayer_IDL_getSliderPercentage_helper::s_return_helper = {};

yarpdataplayer_IDL_getSliderPercentage_helper::yarpdataplayer_IDL_getSliderPercentage_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_getSliderPercentage_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getSliderPercentage", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_getSliderPercentage_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readI32(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_getStatus_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_getStatus_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string yarpdataplayer_IDL_getStatus_helper::s_return_helper = {};

yarpdataplayer_IDL_getStatus_helper::yarpdataplayer_IDL_getStatus_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_getStatus_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getStatus", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_getStatus_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_play_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_play_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_play_helper::s_return_helper = {};

yarpdataplayer_IDL_play_helper::yarpdataplayer_IDL_play_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_play_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("play", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_play_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_pause_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_pause_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_pause_helper::s_return_helper = {};

yarpdataplayer_IDL_pause_helper::yarpdataplayer_IDL_pause_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_pause_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("pause", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_pause_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_stop_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_stop_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_stop_helper::s_return_helper = {};

yarpdataplayer_IDL_stop_helper::yarpdataplayer_IDL_stop_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_stop_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("stop", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_stop_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class yarpdataplayer_IDL_quit_helper :
        public yarp::os::Portable
{
public:
    explicit yarpdataplayer_IDL_quit_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static bool s_return_helper;
};

thread_local bool yarpdataplayer_IDL_quit_helper::s_return_helper = {};

yarpdataplayer_IDL_quit_helper::yarpdataplayer_IDL_quit_helper()
{
    s_return_helper = {};
}

bool yarpdataplayer_IDL_quit_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("quit", 1, 1)) {
        return false;
    }
    return true;
}

bool yarpdataplayer_IDL_quit_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readBool(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

// Constructor
yarpdataplayer_IDL::yarpdataplayer_IDL()
{
    yarp().setOwner(*this);
}

bool yarpdataplayer_IDL::step()
{
    yarpdataplayer_IDL_step_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::step()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_step_helper::s_return_helper : bool{};
}

bool yarpdataplayer_IDL::setFrame(const std::int32_t frameNum)
{
    yarpdataplayer_IDL_setFrame_helper helper{frameNum};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::setFrame(const std::int32_t frameNum)");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_setFrame_helper::s_return_helper : bool{};
}

std::int32_t yarpdataplayer_IDL::getFrame(const std::string& name)
{
    yarpdataplayer_IDL_getFrame_helper helper{name};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::int32_t yarpdataplayer_IDL::getFrame(const std::string& name)");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_getFrame_helper::s_return_helper : std::int32_t{};
}

bool yarpdataplayer_IDL::load(const std::string& path)
{
    yarpdataplayer_IDL_load_helper helper{path};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::load(const std::string& path)");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_load_helper::s_return_helper : bool{};
}

std::int32_t yarpdataplayer_IDL::getSliderPercentage()
{
    yarpdataplayer_IDL_getSliderPercentage_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::int32_t yarpdataplayer_IDL::getSliderPercentage()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_getSliderPercentage_helper::s_return_helper : std::int32_t{};
}

std::string yarpdataplayer_IDL::getStatus()
{
    yarpdataplayer_IDL_getStatus_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string yarpdataplayer_IDL::getStatus()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_getStatus_helper::s_return_helper : std::string{};
}

bool yarpdataplayer_IDL::play()
{
    yarpdataplayer_IDL_play_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::play()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_play_helper::s_return_helper : bool{};
}

bool yarpdataplayer_IDL::pause()
{
    yarpdataplayer_IDL_pause_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::pause()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_pause_helper::s_return_helper : bool{};
}

bool yarpdataplayer_IDL::stop()
{
    yarpdataplayer_IDL_stop_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::stop()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_stop_helper::s_return_helper : bool{};
}

bool yarpdataplayer_IDL::quit()
{
    yarpdataplayer_IDL_quit_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "bool yarpdataplayer_IDL::quit()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? yarpdataplayer_IDL_quit_helper::s_return_helper : bool{};
}

// help method
std::vector<std::string> yarpdataplayer_IDL::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back("step");
        helpString.emplace_back("setFrame");
        helpString.emplace_back("getFrame");
        helpString.emplace_back("load");
        helpString.emplace_back("getSliderPercentage");
        helpString.emplace_back("getStatus");
        helpString.emplace_back("play");
        helpString.emplace_back("pause");
        helpString.emplace_back("stop");
        helpString.emplace_back("quit");
        helpString.emplace_back("help");
    } else {
        if (functionName == "step") {
            helpString.emplace_back("bool step() ");
            helpString.emplace_back("Steps the player once. The player will be stepped ");
            helpString.emplace_back("until all parts have sent data ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "setFrame") {
            helpString.emplace_back("bool setFrame(const std::int32_t frameNum) ");
            helpString.emplace_back("Sets the frame number to the user desired frame. ");
            helpString.emplace_back("@param frameNum specifies the frame number the user ");
            helpString.emplace_back(" would like to skip to ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "getFrame") {
            helpString.emplace_back("std::int32_t getFrame(const std::string& name) ");
            helpString.emplace_back("Gets the frame number the user is requesting ");
            helpString.emplace_back("@param name specifies the name of the data to modify ");
            helpString.emplace_back(" would like to skip to ");
            helpString.emplace_back("@return i32 returns the current frame index ");
        }
        if (functionName == "load") {
            helpString.emplace_back("bool load(const std::string& path) ");
            helpString.emplace_back("Loads a dataset from a path ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "getSliderPercentage") {
            helpString.emplace_back("std::int32_t getSliderPercentage() ");
            helpString.emplace_back("Get slider percentage ");
            helpString.emplace_back("@return i32 percentage ");
        }
        if (functionName == "getStatus") {
            helpString.emplace_back("std::string getStatus() ");
            helpString.emplace_back("Get the status of playing ");
            helpString.emplace_back("@return the status (playing, paused, stopped) ");
        }
        if (functionName == "play") {
            helpString.emplace_back("bool play() ");
            helpString.emplace_back("Plays the dataSets ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "pause") {
            helpString.emplace_back("bool pause() ");
            helpString.emplace_back("Pauses the dataSets ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "stop") {
            helpString.emplace_back("bool stop() ");
            helpString.emplace_back("Stops the dataSets ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "quit") {
            helpString.emplace_back("bool quit() ");
            helpString.emplace_back("Quit the module. ");
            helpString.emplace_back("@return true/false on success/failure ");
        }
        if (functionName == "help") {
            helpString.emplace_back("std::vector<std::string> help(const std::string& functionName = \"--all\")");
            helpString.emplace_back("Return list of available commands, or help message for a specific function");
            helpString.emplace_back("@param functionName name of command for which to get a detailed description. If none or '--all' is provided, print list of available commands");
            helpString.emplace_back("@return list of strings (one string per line)");
        }
    }
    if (helpString.empty()) {
        helpString.emplace_back("Command not found");
    }
    return helpString;
}

// read from ConnectionReader
bool yarpdataplayer_IDL::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }

    std::string tag = reader.readTag();
    bool direct = (tag == "__direct__");
    if (direct) {
        tag = reader.readTag();
    }
    while (!reader.isError()) {
        if (tag == "step") {
            yarpdataplayer_IDL_step_helper::s_return_helper = step();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_step_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "setFrame") {
            std::int32_t frameNum;
            if (!reader.readI32(frameNum)) {
                reader.fail();
                return false;
            }
            yarpdataplayer_IDL_setFrame_helper::s_return_helper = setFrame(frameNum);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_setFrame_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getFrame") {
            std::string name;
            if (!reader.readString(name)) {
                reader.fail();
                return false;
            }
            yarpdataplayer_IDL_getFrame_helper::s_return_helper = getFrame(name);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeI32(yarpdataplayer_IDL_getFrame_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "load") {
            std::string path;
            if (!reader.readString(path)) {
                reader.fail();
                return false;
            }
            yarpdataplayer_IDL_load_helper::s_return_helper = load(path);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_load_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getSliderPercentage") {
            yarpdataplayer_IDL_getSliderPercentage_helper::s_return_helper = getSliderPercentage();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeI32(yarpdataplayer_IDL_getSliderPercentage_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getStatus") {
            yarpdataplayer_IDL_getStatus_helper::s_return_helper = getStatus();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(yarpdataplayer_IDL_getStatus_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "play") {
            yarpdataplayer_IDL_play_helper::s_return_helper = play();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_play_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "pause") {
            yarpdataplayer_IDL_pause_helper::s_return_helper = pause();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_pause_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "stop") {
            yarpdataplayer_IDL_stop_helper::s_return_helper = stop();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_stop_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "quit") {
            yarpdataplayer_IDL_quit_helper::s_return_helper = quit();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeBool(yarpdataplayer_IDL_quit_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "help") {
            std::string functionName;
            if (!reader.readString(functionName)) {
                functionName = "--all";
            }
            auto help_strings = help(functionName);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeTag("many", 1, 0)) {
                    return false;
                }
                if (!writer.writeListBegin(BOTTLE_TAG_INT32, static_cast<uint32_t>(help_strings.size()))) {
                    return false;
                }
                for (const auto& help_string : help_strings) {
                    if (!writer.writeString(help_string)) {
                        return false;
                    }
                }
                if (!writer.writeListEnd()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        std::string next_tag = reader.readTag();
        if (next_tag == "") {
            break;
        }
        tag.append("_").append(next_tag);
    }
    return false;
}
