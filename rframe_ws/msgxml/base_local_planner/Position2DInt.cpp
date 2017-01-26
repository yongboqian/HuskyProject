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
#include "base_local_planner/Position2DInt.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int base_local_planner::Position2DInt::ID;
const unsigned int base_local_planner::Position2DInt::DATA_VERSION;
const std::string base_local_planner::Position2DInt::DATA_TYPE_NAME = "Position2DInt";
const std::string base_local_planner::Position2DInt::DATA_TYPE_FULL_NAME = "base_local_planner::Position2DInt";
const std::string base_local_planner::Position2DInt::VERSION_MD5 = "7f81526598566f1038f56e0c6a7a2f09";
/* xml source for this class */
const std::string base_local_planner::Position2DInt::XML_SOURCE = "<class name=\"Position2DInt\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"3b834ede922a0fff22c43585c533b49f\" rosDesc=\"int64 x\\n\" comment=\"\" id=\"1715023645\">\
  <field name=\"x\" type=\"long long int\" sourceType=\"int64\" comment=\"\"/>\
  <field name=\"y\" type=\"long long int\" sourceType=\"int64\" comment=\"\"/>\
</class>";

base_local_planner::Position2DInt::Position2DInt() : x(0), y(0)
{  
};

base_local_planner::Position2DInt::Position2DInt(const base_local_planner::Position2DInt & inobj) : x(inobj.x), y(inobj.y)
{
};

base_local_planner::Position2DInt::~Position2DInt()
{
};

base_local_planner::Position2DInt * base_local_planner::Position2DInt::New()
{ 
    return new Position2DInt();
};

bool base_local_planner::Position2DInt::dataTypeFlat() 
{  
    return true;
};

base_local_planner::Position2DInt & base_local_planner::Position2DInt::operator=(const base_local_planner::Position2DInt & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus base_local_planner::Position2DInt is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(base_local_planner::Position2DInt));
        }
        else */ 
        {

            x = inobj.x;
            y = inobj.y;
        }
    }

    return *this;
}

bool base_local_planner::Position2DInt::operator==(const base_local_planner::Position2DInt & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (x == inobj.x)
             && (y == inobj.y);
    }

    return ret;
}

bool base_local_planner::Position2DInt::operator!=(const base_local_planner::Position2DInt & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool base_local_planner::Position2DInt::operator<(const base_local_planner::Position2DInt & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (x < inobj.x) return true;
        if (inobj.x <  x) return false; 
        if (y < inobj.y) return true;
        if (inobj.y <  y) return false; ;
    }

    return ret;
}

bool base_local_planner::Position2DInt::operator>(const base_local_planner::Position2DInt & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (x > inobj.x) return true;
        if (inobj.x >  x) return false; 
        if (y > inobj.y) return true;
        if (inobj.y >  y) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const base_local_planner::Position2DInt & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"x",t.x,indent,false);
    rframe::json_io::encode(sstr,"y",t.y,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string base_local_planner::Position2DInt::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const base_local_planner::Position2DInt & value)
{
    return s << value.toStr(false);
}

