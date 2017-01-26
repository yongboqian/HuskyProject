// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:30:53 -0500
//  From Template/Script: data_templates/DataClassTemplate.cpp
 
/*
  CTA RIGHTS

  This document contains information proprietary to General Dynamics
  Robotic Systems and is not to be reproduced, transmitted, transferred,
  or otherwise used without the express written consent of General
  Dynamics Robotic Systems except as described below.

  GOVERNMENT PURPOSE RIGHTS

  Contract No.:        W911NF-10-2-0016, Articles of Collaboration,
                       Article 5, Intellectual Property
  Contractor Name:     General Dynamics Robotic Systems, Inc. (GDRS)
  Contractor Address:  1231 Tech Court, Westminster, MD  21157

  Expiration Date - None

  Technical data and computer software first created by Member(s) in
  performance of the Agreement will be disclosed to the Government.
  General Dynamics Robotic Systems retains the entire right, title, and
  interest throughout the world to each subject invention subject to the
  provisions of this clause and 37 CFR Part 401, 32 CFR 32.36, and
  34 CFR 34.25. The Government shall have the right to obtain, reproduce,
  publish or otherwise use the work for Government purposes.

  NON-EXCLUSIVE LICENSE TO CONSORTIUM PARTICIPANTS
  Consortium Members and subawardees are defined as 'Participants'
  Under Article 5.3, Participants are granted a nonexclusive, royalty-
  free, non-sublicenseable, non-assignable, license to Consortium
  Intellectual Property for the limited purpose of performing tasks under
  The Cooperative Agreement, for Government purposes only, and to make and
  have the same made solely for such use.

*/

#include <math.h> // to allow use of common constants...
#include <common/Error.h>
#include "costmap_2d/VoxelGrid.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int costmap_2d::VoxelGrid::ID;
const unsigned int costmap_2d::VoxelGrid::DATA_VERSION;
const std::string costmap_2d::VoxelGrid::DATA_TYPE_NAME = "VoxelGrid";
const std::string costmap_2d::VoxelGrid::DATA_TYPE_FULL_NAME = "costmap_2d::VoxelGrid";
const std::string costmap_2d::VoxelGrid::VERSION_MD5 = "5179d66b9ecf258a94faa420210d68fb";
/* xml source for this class */
const std::string costmap_2d::VoxelGrid::XML_SOURCE = "<class name=\"VoxelGrid\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"48a040827e1322073d78ece5a497029c\" rosDesc=\"Header header\\nuint32[] data\\ngeometry_msgs/Point32 origin\\ngeometry_msgs/Vector3 resolutions\\nuint32 size_x\\nuint32 size_y\\nuint32 size_z\\n\\n\\n================================================================================\\nMSG: std_msgs/Header\\n# Standard metadata for higher-level stamped data types.\\n# This is generally used to communicate timestamped data \\n# in a particular coordinate frame.\\n# \\n# sequence ID: consecutively increasing ID \\nuint32 seq\\n#Two-integer timestamp that is expressed as:\\n# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\\n# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\\n# time-handling sugar is provided by the client library\\ntime stamp\\n#Frame this data is associated with\\n# 0: no frame\\n# 1: global frame\\nstring frame_id\\n\\n================================================================================\\nMSG: geometry_msgs/Point32\\n# This contains the position of a point in free space(with 32 bits of precision).\\n# It is recommeded to use Point wherever possible instead of Point32.  \\n# \\n# This recommendation is to promote interoperability.  \\n#\\n# This message is designed to take up less space when sending\\n# lots of points at once, as in the case of a PointCloud.  \\n\\nfloat32 x\\nfloat32 y\\nfloat32 z\\n================================================================================\\nMSG: geometry_msgs/Vector3\\n# This represents a vector in free space. \\n# It is only meant to represent a direction. Therefore, it does not\\n# make sense to apply a translation to it (e.g., when applying a \\n# generic rigid transformation to a Vector3, tf2 will only apply the\\n# rotation). If you want your data to be translatable too, use the\\n# geometry_msgs/Point message instead.\\n\\nfloat64 x\\nfloat64 y\\n\" comment=\"\" id=\"166564990\">\
  <field name=\"header\" type=\"std_msgs::Header\" sourceType=\"Header\" comment=\"\"/>\
  <field name=\"data\" type=\"vector(unsigned int)\" sourceType=\"uint32\" comment=\"\"/>\
  <field name=\"origin\" type=\"geometry_msgs::Point32\" sourceType=\"geometry_msgs::Point32\" comment=\"\"/>\
  <field name=\"resolutions\" type=\"geometry_msgs::Vector3\" sourceType=\"geometry_msgs::Vector3\" comment=\"\"/>\
  <field name=\"size_x\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"\"/>\
  <field name=\"size_y\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"\"/>\
  <field name=\"size_z\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"\"/>\
</class>";

costmap_2d::VoxelGrid::VoxelGrid() : header(), data(), origin(), resolutions(), size_x(0), size_y(0), size_z(0)
{  
};

costmap_2d::VoxelGrid::VoxelGrid(const costmap_2d::VoxelGrid & inobj) : header(inobj.header), data(inobj.data), origin(inobj.origin), resolutions(inobj.resolutions), size_x(inobj.size_x), size_y(inobj.size_y), size_z(inobj.size_z)
{
};

costmap_2d::VoxelGrid::~VoxelGrid()
{
};

costmap_2d::VoxelGrid * costmap_2d::VoxelGrid::New()
{ 
    return new VoxelGrid();
};

bool costmap_2d::VoxelGrid::dataTypeFlat() 
{   
    return false; 
};

costmap_2d::VoxelGrid & costmap_2d::VoxelGrid::operator=(const costmap_2d::VoxelGrid & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus costmap_2d::VoxelGrid is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(costmap_2d::VoxelGrid));
        }
        else */ 
        {

            header = inobj.header;
            data = inobj.data;
            origin = inobj.origin;
            resolutions = inobj.resolutions;
            size_x = inobj.size_x;
            size_y = inobj.size_y;
            size_z = inobj.size_z;
        }
    }

    return *this;
}

bool costmap_2d::VoxelGrid::operator==(const costmap_2d::VoxelGrid & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (header == inobj.header)
             && (data == inobj.data)
             && (origin == inobj.origin)
             && (resolutions == inobj.resolutions)
             && (size_x == inobj.size_x)
             && (size_y == inobj.size_y)
             && (size_z == inobj.size_z);
    }

    return ret;
}

bool costmap_2d::VoxelGrid::operator!=(const costmap_2d::VoxelGrid & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool costmap_2d::VoxelGrid::operator<(const costmap_2d::VoxelGrid & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header < inobj.header) return true;
        if (inobj.header <  header) return false; 
        if (data < inobj.data) return true;
        if (inobj.data <  data) return false; 
        if (origin < inobj.origin) return true;
        if (inobj.origin <  origin) return false; 
        if (resolutions < inobj.resolutions) return true;
        if (inobj.resolutions <  resolutions) return false; 
        if (size_x < inobj.size_x) return true;
        if (inobj.size_x <  size_x) return false; 
        if (size_y < inobj.size_y) return true;
        if (inobj.size_y <  size_y) return false; 
        if (size_z < inobj.size_z) return true;
        if (inobj.size_z <  size_z) return false; ;
    }

    return ret;
}

bool costmap_2d::VoxelGrid::operator>(const costmap_2d::VoxelGrid & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (header > inobj.header) return true;
        if (inobj.header >  header) return false; 
        if (data > inobj.data) return true;
        if (inobj.data >  data) return false; 
        if (origin > inobj.origin) return true;
        if (inobj.origin >  origin) return false; 
        if (resolutions > inobj.resolutions) return true;
        if (inobj.resolutions >  resolutions) return false; 
        if (size_x > inobj.size_x) return true;
        if (inobj.size_x >  size_x) return false; 
        if (size_y > inobj.size_y) return true;
        if (inobj.size_y >  size_y) return false; 
        if (size_z > inobj.size_z) return true;
        if (inobj.size_z >  size_z) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const costmap_2d::VoxelGrid & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"header",t.header,indent,false);
    rframe::json_io::encode(sstr,"data",t.data,indent,false);
    rframe::json_io::encode(sstr,"origin",t.origin,indent,false);
    rframe::json_io::encode(sstr,"resolutions",t.resolutions,indent,false);
    rframe::json_io::encode(sstr,"size_x",t.size_x,indent,false);
    rframe::json_io::encode(sstr,"size_y",t.size_y,indent,false);
    rframe::json_io::encode(sstr,"size_z",t.size_z,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string costmap_2d::VoxelGrid::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const costmap_2d::VoxelGrid & value)
{
    return s << value.toStr(false);
}

