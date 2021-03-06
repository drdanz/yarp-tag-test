/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/test/PointDLists.h>

namespace yarp {
namespace test {

// Default constructor
PointDLists::PointDLists() :
        WirePortable(),
        name("pointLists"),
        firstList(),
        secondList()
{
}

// Constructor with field values
PointDLists::PointDLists(const std::string& name,
                         const std::vector<PointD>& firstList,
                         const std::vector<PointD>& secondList) :
        WirePortable(),
        name(name),
        firstList(firstList),
        secondList(secondList)
{
}

// Read structure on a Wire
bool PointDLists::read(yarp::os::idl::WireReader& reader)
{
    if (!read_name(reader)) {
        return false;
    }
    if (!read_firstList(reader)) {
        return false;
    }
    if (!read_secondList(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool PointDLists::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(3)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool PointDLists::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_name(writer)) {
        return false;
    }
    if (!write_firstList(writer)) {
        return false;
    }
    if (!write_secondList(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool PointDLists::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string PointDLists::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
PointDLists::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new PointDLists;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
PointDLists::Editor::Editor(PointDLists& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
PointDLists::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool PointDLists::Editor::edit(PointDLists& obj, bool dirty)
{
    if (obj_owned) {
        delete this->obj;
    }
    this->obj = &obj;
    obj_owned = false;
    dirty_flags(dirty);
    return true;
}

// Editor: validity check
bool PointDLists::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
PointDLists& PointDLists::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void PointDLists::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void PointDLists::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: name setter
void PointDLists::Editor::set_name(const std::string& name)
{
    will_set_name();
    obj->name = name;
    mark_dirty_name();
    communicate();
    did_set_name();
}

// Editor: name getter
const std::string& PointDLists::Editor::get_name() const
{
    return obj->name;
}

// Editor: name will_set
bool PointDLists::Editor::will_set_name()
{
    return true;
}

// Editor: name did_set
bool PointDLists::Editor::did_set_name()
{
    return true;
}

// Editor: firstList setter
void PointDLists::Editor::set_firstList(const std::vector<PointD>& firstList)
{
    will_set_firstList();
    obj->firstList = firstList;
    mark_dirty_firstList();
    communicate();
    did_set_firstList();
}

// Editor: firstList setter (list)
void PointDLists::Editor::set_firstList(size_t index, const PointD& elem)
{
    will_set_firstList();
    obj->firstList[index] = elem;
    mark_dirty_firstList();
    communicate();
    did_set_firstList();
}

// Editor: firstList getter
const std::vector<PointD>& PointDLists::Editor::get_firstList() const
{
    return obj->firstList;
}

// Editor: firstList will_set
bool PointDLists::Editor::will_set_firstList()
{
    return true;
}

// Editor: firstList did_set
bool PointDLists::Editor::did_set_firstList()
{
    return true;
}

// Editor: secondList setter
void PointDLists::Editor::set_secondList(const std::vector<PointD>& secondList)
{
    will_set_secondList();
    obj->secondList = secondList;
    mark_dirty_secondList();
    communicate();
    did_set_secondList();
}

// Editor: secondList setter (list)
void PointDLists::Editor::set_secondList(size_t index, const PointD& elem)
{
    will_set_secondList();
    obj->secondList[index] = elem;
    mark_dirty_secondList();
    communicate();
    did_set_secondList();
}

// Editor: secondList getter
const std::vector<PointD>& PointDLists::Editor::get_secondList() const
{
    return obj->secondList;
}

// Editor: secondList will_set
bool PointDLists::Editor::will_set_secondList()
{
    return true;
}

// Editor: secondList did_set
bool PointDLists::Editor::did_set_secondList()
{
    return true;
}

// Editor: clean
void PointDLists::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool PointDLists::Editor::read(yarp::os::ConnectionReader& connection)
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        return false;
    }
    int len = reader.getLength();
    if (len == 0) {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(1)) {
            return false;
        }
        writer.writeString("send: 'help' or 'patch (param1 val1) (param2 val2)'");
        return true;
    }
    std::string tag;
    if (!reader.readString(tag)) {
        return false;
    }
    if (tag == "help") {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(2)) {
            return false;
        }
        if (!writer.writeTag("many", 1, 0)) {
            return false;
        }
        if (reader.getLength() > 0) {
            std::string field;
            if (!reader.readString(field)) {
                return false;
            }
            if (field == "name") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::string name")) {
                    return false;
                }
            }
            if (field == "firstList") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::vector<PointD> firstList")) {
                    return false;
                }
            }
            if (field == "secondList") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::vector<PointD> secondList")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(4)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("name");
        writer.writeString("firstList");
        writer.writeString("secondList");
        return true;
    }
    bool nested = true;
    bool have_act = false;
    if (tag != "patch") {
        if (((len - 1) % 2) != 0) {
            return false;
        }
        len = 1 + ((len - 1) / 2);
        nested = false;
        have_act = true;
    }
    for (int i = 1; i < len; ++i) {
        if (nested && !reader.readListHeader(3)) {
            return false;
        }
        std::string act;
        std::string key;
        if (have_act) {
            act = tag;
        } else if (!reader.readString(act)) {
            return false;
        }
        if (!reader.readString(key)) {
            return false;
        }
        if (key == "name") {
            will_set_name();
            if (!obj->nested_read_name(reader)) {
                return false;
            }
            did_set_name();
        } else if (key == "firstList") {
            will_set_firstList();
            if (!obj->nested_read_firstList(reader)) {
                return false;
            }
            did_set_firstList();
        } else if (key == "secondList") {
            will_set_secondList();
            if (!obj->nested_read_secondList(reader)) {
                return false;
            }
            did_set_secondList();
        } else {
            // would be useful to have a fallback here
        }
    }
    reader.accept();
    yarp::os::idl::WireWriter writer(reader);
    if (writer.isNull()) {
        return true;
    }
    writer.writeListHeader(1);
    writer.writeVocab32('o', 'k');
    return true;
}

// Editor: write
bool PointDLists::Editor::write(yarp::os::ConnectionWriter& connection) const
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(dirty_count + 1)) {
        return false;
    }
    if (!writer.writeString("patch")) {
        return false;
    }
    if (is_dirty_name) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("name")) {
            return false;
        }
        if (!obj->nested_write_name(writer)) {
            return false;
        }
    }
    if (is_dirty_firstList) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("firstList")) {
            return false;
        }
        if (!obj->nested_write_firstList(writer)) {
            return false;
        }
    }
    if (is_dirty_secondList) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("secondList")) {
            return false;
        }
        if (!obj->nested_write_secondList(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void PointDLists::Editor::communicate()
{
    if (group != 0) {
        return;
    }
    if (yarp().canWrite()) {
        yarp().write(*this);
        clean();
    }
}

// Editor: mark dirty overall
void PointDLists::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: name mark_dirty
void PointDLists::Editor::mark_dirty_name()
{
    if (is_dirty_name) {
        return;
    }
    dirty_count++;
    is_dirty_name = true;
    mark_dirty();
}

// Editor: firstList mark_dirty
void PointDLists::Editor::mark_dirty_firstList()
{
    if (is_dirty_firstList) {
        return;
    }
    dirty_count++;
    is_dirty_firstList = true;
    mark_dirty();
}

// Editor: secondList mark_dirty
void PointDLists::Editor::mark_dirty_secondList()
{
    if (is_dirty_secondList) {
        return;
    }
    dirty_count++;
    is_dirty_secondList = true;
    mark_dirty();
}

// Editor: dirty_flags
void PointDLists::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_name = flag;
    is_dirty_firstList = flag;
    is_dirty_secondList = flag;
    dirty_count = flag ? 3 : 0;
}

// read name field
bool PointDLists::read_name(yarp::os::idl::WireReader& reader)
{
    if (!reader.readString(name)) {
        name = "pointLists";
    }
    return true;
}

// write name field
bool PointDLists::write_name(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(name)) {
        return false;
    }
    return true;
}

// read (nested) name field
bool PointDLists::nested_read_name(yarp::os::idl::WireReader& reader)
{
    if (!reader.readString(name)) {
        name = "pointLists";
    }
    return true;
}

// write (nested) name field
bool PointDLists::nested_write_name(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(name)) {
        return false;
    }
    return true;
}

// read firstList field
bool PointDLists::read_firstList(yarp::os::idl::WireReader& reader)
{
    firstList.clear();
    uint32_t _size0;
    yarp::os::idl::WireState _etype3;
    reader.readListBegin(_etype3, _size0);
    firstList.resize(_size0);
    for (size_t _i4 = 0; _i4 < _size0; ++_i4) {
        if (!reader.readNested(firstList[_i4])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write firstList field
bool PointDLists::write_firstList(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(firstList.size()))) {
        return false;
    }
    for (const auto& _item5 : firstList) {
        if (!writer.writeNested(_item5)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) firstList field
bool PointDLists::nested_read_firstList(yarp::os::idl::WireReader& reader)
{
    firstList.clear();
    uint32_t _size6;
    yarp::os::idl::WireState _etype9;
    reader.readListBegin(_etype9, _size6);
    firstList.resize(_size6);
    for (size_t _i10 = 0; _i10 < _size6; ++_i10) {
        if (!reader.readNested(firstList[_i10])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) firstList field
bool PointDLists::nested_write_firstList(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(firstList.size()))) {
        return false;
    }
    for (const auto& _item11 : firstList) {
        if (!writer.writeNested(_item11)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read secondList field
bool PointDLists::read_secondList(yarp::os::idl::WireReader& reader)
{
    secondList.clear();
    uint32_t _size12;
    yarp::os::idl::WireState _etype15;
    reader.readListBegin(_etype15, _size12);
    secondList.resize(_size12);
    for (size_t _i16 = 0; _i16 < _size12; ++_i16) {
        if (!reader.readNested(secondList[_i16])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write secondList field
bool PointDLists::write_secondList(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(secondList.size()))) {
        return false;
    }
    for (const auto& _item17 : secondList) {
        if (!writer.writeNested(_item17)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

// read (nested) secondList field
bool PointDLists::nested_read_secondList(yarp::os::idl::WireReader& reader)
{
    secondList.clear();
    uint32_t _size18;
    yarp::os::idl::WireState _etype21;
    reader.readListBegin(_etype21, _size18);
    secondList.resize(_size18);
    for (size_t _i22 = 0; _i22 < _size18; ++_i22) {
        if (!reader.readNested(secondList[_i22])) {
            reader.fail();
            return false;
        }
    }
    reader.readListEnd();
    return true;
}

// write (nested) secondList field
bool PointDLists::nested_write_secondList(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeListBegin(BOTTLE_TAG_LIST, static_cast<uint32_t>(secondList.size()))) {
        return false;
    }
    for (const auto& _item23 : secondList) {
        if (!writer.writeNested(_item23)) {
            return false;
        }
    }
    if (!writer.writeListEnd()) {
        return false;
    }
    return true;
}

} // namespace yarp
} // namespace test
