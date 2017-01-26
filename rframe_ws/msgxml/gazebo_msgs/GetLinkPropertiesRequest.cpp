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
#include "gazebo_msgs/GetLinkPropertiesRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::GetLinkPropertiesRequest::ID;
const unsigned int gazebo_msgs::GetLinkPropertiesRequest::DATA_VERSION;
const std::string gazebo_msgs::GetLinkPropertiesRequest::DATA_TYPE_NAME = "GetLinkPropertiesRequest";
const std::string gazebo_msgs::GetLinkPropertiesRequest::DATA_TYPE_FULL_NAME = "gazebo_msgs::GetLinkPropertiesRequest";
const std::string gazebo_msgs::GetLinkPropertiesRequest::VERSION_MD5 = "2dc76e2406d47169bbedb1a53b754503";
/* xml source for this class */
const std::string gazebo_msgs::GetLinkPropertiesRequest::XML_SOURCE = "<class name=\"GetLinkPropertiesRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1781288137\">\
  <field name=\"link_name\" type=\"string\" sourceType=\"string\" comment=\"no comment provided\"/>\
</class>";

gazebo_msgs::GetLinkPropertiesRequest::GetLinkPropertiesRequest() : link_name()
{  
};

gazebo_msgs::GetLinkPropertiesRequest::GetLinkPropertiesRequest(const gazebo_msgs::GetLinkPropertiesRequest & inobj) : link_name(inobj.link_name)
{
};

gazebo_msgs::GetLinkPropertiesRequest::~GetLinkPropertiesRequest()
{
};

gazebo_msgs::GetLinkPropertiesRequest * gazebo_msgs::GetLinkPropertiesRequest::New()
{ 
    return new GetLinkPropertiesRequest();
};

bool gazebo_msgs::GetLinkPropertiesRequest::dataTypeFlat() 
{  
    return rframe::CodeGenTraits<std::string>::flat();

};

gazebo_msgs::GetLinkPropertiesRequest & gazebo_msgs::GetLinkPropertiesRequest::operator=(const gazebo_msgs::GetLinkPropertiesRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::GetLinkPropertiesRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::GetLinkPropertiesRequest));
        }
        else */ 
        {

            link_name = inobj.link_name;
        }
    }

    return *this;
}

bool gazebo_msgs::GetLinkPropertiesRequest::operator==(const gazebo_msgs::GetLinkPropertiesRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (link_name == inobj.link_name);
    }

    return ret;
}

bool gazebo_msgs::GetLinkPropertiesRequest::operator!=(const gazebo_msgs::GetLinkPropertiesRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::GetLinkPropertiesRequest::operator<(const gazebo_msgs::GetLinkPropertiesRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (link_name < inobj.link_name) return true;
        if (inobj.link_name <  link_name) return false; ;
    }

    return ret;
}

bool gazebo_msgs::GetLinkPropertiesRequest::operator>(const gazebo_msgs::GetLinkPropertiesRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (link_name > inobj.link_name) return true;
        if (inobj.link_name >  link_name) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::GetLinkPropertiesRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"link_name",t.link_name,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::GetLinkPropertiesRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::GetLinkPropertiesRequest & value)
{
    return s << value.toStr(false);
}

