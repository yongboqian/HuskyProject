// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:56 -0500
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
#include "gazebo_msgs/SetLinkStateRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::SetLinkStateRequest::ID;
const unsigned int gazebo_msgs::SetLinkStateRequest::DATA_VERSION;
const std::string gazebo_msgs::SetLinkStateRequest::DATA_TYPE_NAME = "SetLinkStateRequest";
const std::string gazebo_msgs::SetLinkStateRequest::DATA_TYPE_FULL_NAME = "gazebo_msgs::SetLinkStateRequest";
const std::string gazebo_msgs::SetLinkStateRequest::VERSION_MD5 = "05d5e51278e97c5bc919b37f3176e6c1";
/* xml source for this class */
const std::string gazebo_msgs::SetLinkStateRequest::XML_SOURCE = "<class name=\"SetLinkStateRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1781288167\">\
  <field name=\"link_state\" type=\"gazebo_msgs::LinkState\" sourceType=\"gazebo_msgs::LinkState\" comment=\"no comment provided\"/>\
</class>";

gazebo_msgs::SetLinkStateRequest::SetLinkStateRequest() : link_state()
{  
};

gazebo_msgs::SetLinkStateRequest::SetLinkStateRequest(const gazebo_msgs::SetLinkStateRequest & inobj) : link_state(inobj.link_state)
{
};

gazebo_msgs::SetLinkStateRequest::~SetLinkStateRequest()
{
};

gazebo_msgs::SetLinkStateRequest * gazebo_msgs::SetLinkStateRequest::New()
{ 
    return new SetLinkStateRequest();
};

bool gazebo_msgs::SetLinkStateRequest::dataTypeFlat() 
{  
    return gazebo_msgs::LinkState::dataTypeFlat();

};

gazebo_msgs::SetLinkStateRequest & gazebo_msgs::SetLinkStateRequest::operator=(const gazebo_msgs::SetLinkStateRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::SetLinkStateRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::SetLinkStateRequest));
        }
        else */ 
        {

            link_state = inobj.link_state;
        }
    }

    return *this;
}

bool gazebo_msgs::SetLinkStateRequest::operator==(const gazebo_msgs::SetLinkStateRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (link_state == inobj.link_state);
    }

    return ret;
}

bool gazebo_msgs::SetLinkStateRequest::operator!=(const gazebo_msgs::SetLinkStateRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::SetLinkStateRequest::operator<(const gazebo_msgs::SetLinkStateRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (link_state < inobj.link_state) return true;
        if (inobj.link_state <  link_state) return false; ;
    }

    return ret;
}

bool gazebo_msgs::SetLinkStateRequest::operator>(const gazebo_msgs::SetLinkStateRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (link_state > inobj.link_state) return true;
        if (inobj.link_state >  link_state) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::SetLinkStateRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"link_state",t.link_state,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::SetLinkStateRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::SetLinkStateRequest & value)
{
    return s << value.toStr(false);
}

