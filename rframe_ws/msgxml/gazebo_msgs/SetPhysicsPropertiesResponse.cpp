// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 12:55:18 -0500
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
#include "gazebo_msgs/SetPhysicsPropertiesResponse.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::SetPhysicsPropertiesResponse::ID;
const unsigned int gazebo_msgs::SetPhysicsPropertiesResponse::DATA_VERSION;
const std::string gazebo_msgs::SetPhysicsPropertiesResponse::DATA_TYPE_NAME = "SetPhysicsPropertiesResponse";
const std::string gazebo_msgs::SetPhysicsPropertiesResponse::DATA_TYPE_FULL_NAME = "gazebo_msgs::SetPhysicsPropertiesResponse";
const std::string gazebo_msgs::SetPhysicsPropertiesResponse::VERSION_MD5 = "2c936af1e54b802ecb8e81f187f31133";
/* xml source for this class */
const std::string gazebo_msgs::SetPhysicsPropertiesResponse::XML_SOURCE = "<class name=\"SetPhysicsPropertiesResponse\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"sets pose and twist of a link.  All children link poses/twists of the URDF tree will be updated accordingly\" id=\"1781288177\">\
  <field name=\"success\" type=\"bool\" sourceType=\"bool\" comment=\"return true if set wrench successful\"/>\
  <field name=\"status_message\" type=\"string\" sourceType=\"string\" comment=\"comments if available\"/>\
</class>";

gazebo_msgs::SetPhysicsPropertiesResponse::SetPhysicsPropertiesResponse() : success(0), status_message()
{  
};

gazebo_msgs::SetPhysicsPropertiesResponse::SetPhysicsPropertiesResponse(const gazebo_msgs::SetPhysicsPropertiesResponse & inobj) : success(inobj.success), status_message(inobj.status_message)
{
};

gazebo_msgs::SetPhysicsPropertiesResponse::~SetPhysicsPropertiesResponse()
{
};

gazebo_msgs::SetPhysicsPropertiesResponse * gazebo_msgs::SetPhysicsPropertiesResponse::New()
{ 
    return new SetPhysicsPropertiesResponse();
};

bool gazebo_msgs::SetPhysicsPropertiesResponse::dataTypeFlat() 
{  
    return rframe::CodeGenTraits<std::string>::flat();

};

gazebo_msgs::SetPhysicsPropertiesResponse & gazebo_msgs::SetPhysicsPropertiesResponse::operator=(const gazebo_msgs::SetPhysicsPropertiesResponse & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::SetPhysicsPropertiesResponse is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::SetPhysicsPropertiesResponse));
        }
        else */ 
        {

            success = inobj.success;
            status_message = inobj.status_message;
        }
    }

    return *this;
}

bool gazebo_msgs::SetPhysicsPropertiesResponse::operator==(const gazebo_msgs::SetPhysicsPropertiesResponse & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (success == inobj.success)
             && (status_message == inobj.status_message);
    }

    return ret;
}

bool gazebo_msgs::SetPhysicsPropertiesResponse::operator!=(const gazebo_msgs::SetPhysicsPropertiesResponse & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::SetPhysicsPropertiesResponse::operator<(const gazebo_msgs::SetPhysicsPropertiesResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (success < inobj.success) return true;
        if (inobj.success <  success) return false; 
        if (status_message < inobj.status_message) return true;
        if (inobj.status_message <  status_message) return false; ;
    }

    return ret;
}

bool gazebo_msgs::SetPhysicsPropertiesResponse::operator>(const gazebo_msgs::SetPhysicsPropertiesResponse & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (success > inobj.success) return true;
        if (inobj.success >  success) return false; 
        if (status_message > inobj.status_message) return true;
        if (inobj.status_message >  status_message) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::SetPhysicsPropertiesResponse & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"success",t.success,indent,false);
    rframe::json_io::encode(sstr,"status_message",t.status_message,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::SetPhysicsPropertiesResponse::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::SetPhysicsPropertiesResponse & value)
{
    return s << value.toStr(false);
}

