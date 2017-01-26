// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 15:30:54 -0500
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
#include "move_base_msgs/MoveBaseResult.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int move_base_msgs::MoveBaseResult::ID;
const unsigned int move_base_msgs::MoveBaseResult::DATA_VERSION;
const std::string move_base_msgs::MoveBaseResult::DATA_TYPE_NAME = "MoveBaseResult";
const std::string move_base_msgs::MoveBaseResult::DATA_TYPE_FULL_NAME = "move_base_msgs::MoveBaseResult";
const std::string move_base_msgs::MoveBaseResult::VERSION_MD5 = "51ce0f52b25d49b0a67333f5828874c2";
/* xml source for this class */
const std::string move_base_msgs::MoveBaseResult::XML_SOURCE = "<class name=\"MoveBaseResult\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d41d8cd98f00b204e9800998ecf8427e\" rosDesc=\"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\\n\" comment=\"\" id=\"1344994996\">\
</class>";

move_base_msgs::MoveBaseResult::MoveBaseResult() 
{  
};

move_base_msgs::MoveBaseResult::MoveBaseResult(const move_base_msgs::MoveBaseResult & inobj) 
{
};

move_base_msgs::MoveBaseResult::~MoveBaseResult()
{
};

move_base_msgs::MoveBaseResult * move_base_msgs::MoveBaseResult::New()
{ 
    return new MoveBaseResult();
};

bool move_base_msgs::MoveBaseResult::dataTypeFlat() 
{  
    return true;
};

move_base_msgs::MoveBaseResult & move_base_msgs::MoveBaseResult::operator=(const move_base_msgs::MoveBaseResult & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus move_base_msgs::MoveBaseResult is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(move_base_msgs::MoveBaseResult));
        }
        else */ 
        {

        }
    }

    return *this;
}

bool move_base_msgs::MoveBaseResult::operator==(const move_base_msgs::MoveBaseResult & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
    }

    return ret;
}

bool move_base_msgs::MoveBaseResult::operator!=(const move_base_msgs::MoveBaseResult & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool move_base_msgs::MoveBaseResult::operator<(const move_base_msgs::MoveBaseResult & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm
        ;
    }

    return ret;
}

bool move_base_msgs::MoveBaseResult::operator>(const move_base_msgs::MoveBaseResult & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm
        ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const move_base_msgs::MoveBaseResult & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string move_base_msgs::MoveBaseResult::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const move_base_msgs::MoveBaseResult & value)
{
    return s << value.toStr(false);
}

