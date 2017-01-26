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
#include "gazebo_msgs/ApplyBodyWrenchRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::ApplyBodyWrenchRequest::ID;
const unsigned int gazebo_msgs::ApplyBodyWrenchRequest::DATA_VERSION;
const std::string gazebo_msgs::ApplyBodyWrenchRequest::DATA_TYPE_NAME = "ApplyBodyWrenchRequest";
const std::string gazebo_msgs::ApplyBodyWrenchRequest::DATA_TYPE_FULL_NAME = "gazebo_msgs::ApplyBodyWrenchRequest";
const std::string gazebo_msgs::ApplyBodyWrenchRequest::VERSION_MD5 = "c4a41df4ceb92d05a18f0ef9b269edfa";
/* xml source for this class */
const std::string gazebo_msgs::ApplyBodyWrenchRequest::XML_SOURCE = "<class name=\"ApplyBodyWrenchRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"Apply Wrench to Gazebo Body.  via the callback mechanism  all Gazebo operations are made in world frame\" id=\"1781288122\">\
  <field name=\"body_name\" type=\"string\" sourceType=\"string\" comment=\"Gazebo body to apply wrench (linear force and torque)  wrench is applied in the gazebo world by default  body names are prefixed by model name, e.g. pr2::base_link\"/>\
  <field name=\"reference_frame\" type=\"string\" sourceType=\"string\" comment=\"wrench is defined in the reference frame of this entity  use inertial frame if left empty  frame names are bodies prefixed by model name, e.g. pr2::base_link\"/>\
  <field name=\"reference_point\" type=\"geometry_msgs::Point\" sourceType=\"geometry_msgs::Point\" comment=\"wrench is defined at this location in the reference frame\"/>\
  <field name=\"wrench\" type=\"geometry_msgs::Wrench\" sourceType=\"geometry_msgs::Wrench\" comment=\"wrench applied to the origin of the body\"/>\
  <field name=\"start_time\" type=\"std_msgs::RosTime\" sourceType=\"time\" comment=\"(optional) wrench application start time (seconds)  if start_time is not specified, or  start_time &lt; current time, start as soon as possible\"/>\
  <field name=\"duration\" type=\"std_msgs::RosDuration\" sourceType=\"duration\" comment=\"no comment provided\"/>\
</class>";

gazebo_msgs::ApplyBodyWrenchRequest::ApplyBodyWrenchRequest() : body_name(), reference_frame(), reference_point(), wrench(), start_time(), duration()
{  
};

gazebo_msgs::ApplyBodyWrenchRequest::ApplyBodyWrenchRequest(const gazebo_msgs::ApplyBodyWrenchRequest & inobj) : body_name(inobj.body_name), reference_frame(inobj.reference_frame), reference_point(inobj.reference_point), wrench(inobj.wrench), start_time(inobj.start_time), duration(inobj.duration)
{
};

gazebo_msgs::ApplyBodyWrenchRequest::~ApplyBodyWrenchRequest()
{
};

gazebo_msgs::ApplyBodyWrenchRequest * gazebo_msgs::ApplyBodyWrenchRequest::New()
{ 
    return new ApplyBodyWrenchRequest();
};

bool gazebo_msgs::ApplyBodyWrenchRequest::dataTypeFlat() 
{  
    return geometry_msgs::Point::dataTypeFlat() && geometry_msgs::Wrench::dataTypeFlat() && std_msgs::RosTime::dataTypeFlat() && std_msgs::RosDuration::dataTypeFlat() && rframe::CodeGenTraits<std::string>::flat();

};

gazebo_msgs::ApplyBodyWrenchRequest & gazebo_msgs::ApplyBodyWrenchRequest::operator=(const gazebo_msgs::ApplyBodyWrenchRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::ApplyBodyWrenchRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::ApplyBodyWrenchRequest));
        }
        else */ 
        {

            body_name = inobj.body_name;
            reference_frame = inobj.reference_frame;
            reference_point = inobj.reference_point;
            wrench = inobj.wrench;
            start_time = inobj.start_time;
            duration = inobj.duration;
        }
    }

    return *this;
}

bool gazebo_msgs::ApplyBodyWrenchRequest::operator==(const gazebo_msgs::ApplyBodyWrenchRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (body_name == inobj.body_name)
             && (reference_frame == inobj.reference_frame)
             && (reference_point == inobj.reference_point)
             && (wrench == inobj.wrench)
             && (start_time == inobj.start_time)
             && (duration == inobj.duration);
    }

    return ret;
}

bool gazebo_msgs::ApplyBodyWrenchRequest::operator!=(const gazebo_msgs::ApplyBodyWrenchRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::ApplyBodyWrenchRequest::operator<(const gazebo_msgs::ApplyBodyWrenchRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (body_name < inobj.body_name) return true;
        if (inobj.body_name <  body_name) return false; 
        if (reference_frame < inobj.reference_frame) return true;
        if (inobj.reference_frame <  reference_frame) return false; 
        if (reference_point < inobj.reference_point) return true;
        if (inobj.reference_point <  reference_point) return false; 
        if (wrench < inobj.wrench) return true;
        if (inobj.wrench <  wrench) return false; 
        if (start_time < inobj.start_time) return true;
        if (inobj.start_time <  start_time) return false; 
        if (duration < inobj.duration) return true;
        if (inobj.duration <  duration) return false; ;
    }

    return ret;
}

bool gazebo_msgs::ApplyBodyWrenchRequest::operator>(const gazebo_msgs::ApplyBodyWrenchRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (body_name > inobj.body_name) return true;
        if (inobj.body_name >  body_name) return false; 
        if (reference_frame > inobj.reference_frame) return true;
        if (inobj.reference_frame >  reference_frame) return false; 
        if (reference_point > inobj.reference_point) return true;
        if (inobj.reference_point >  reference_point) return false; 
        if (wrench > inobj.wrench) return true;
        if (inobj.wrench >  wrench) return false; 
        if (start_time > inobj.start_time) return true;
        if (inobj.start_time >  start_time) return false; 
        if (duration > inobj.duration) return true;
        if (inobj.duration >  duration) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::ApplyBodyWrenchRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"body_name",t.body_name,indent,false);
    rframe::json_io::encode(sstr,"reference_frame",t.reference_frame,indent,false);
    rframe::json_io::encode(sstr,"reference_point",t.reference_point,indent,false);
    rframe::json_io::encode(sstr,"wrench",t.wrench,indent,false);
    rframe::json_io::encode(sstr,"start_time",t.start_time,indent,false);
    rframe::json_io::encode(sstr,"duration",t.duration,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::ApplyBodyWrenchRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::ApplyBodyWrenchRequest & value)
{
    return s << value.toStr(false);
}

