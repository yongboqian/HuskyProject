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
#include "gazebo_msgs/SetJointTrajectoryRequest.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::SetJointTrajectoryRequest::ID;
const unsigned int gazebo_msgs::SetJointTrajectoryRequest::DATA_VERSION;
const std::string gazebo_msgs::SetJointTrajectoryRequest::DATA_TYPE_NAME = "SetJointTrajectoryRequest";
const std::string gazebo_msgs::SetJointTrajectoryRequest::DATA_TYPE_FULL_NAME = "gazebo_msgs::SetJointTrajectoryRequest";
const std::string gazebo_msgs::SetJointTrajectoryRequest::VERSION_MD5 = "b95e2b1774ef9c7bb6ac860e3d2c8500";
/* xml source for this class */
const std::string gazebo_msgs::SetJointTrajectoryRequest::XML_SOURCE = "<class name=\"SetJointTrajectoryRequest\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" comment=\"\" id=\"1781288161\">\
  <field name=\"model_name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"joint_trajectory\" type=\"trajectory_msgs::JointTrajectory\" sourceType=\"trajectory_msgs::JointTrajectory\" comment=\"\"/>\
  <field name=\"model_pose\" type=\"geometry_msgs::Pose\" sourceType=\"geometry_msgs::Pose\" comment=\"\"/>\
  <field name=\"set_model_pose\" type=\"bool\" sourceType=\"bool\" comment=\"\"/>\
  <field name=\"disable_physics_updates\" type=\"bool\" sourceType=\"bool\" comment=\"no comment provided\"/>\
</class>";

gazebo_msgs::SetJointTrajectoryRequest::SetJointTrajectoryRequest() : model_name(), joint_trajectory(), model_pose(), set_model_pose(0), disable_physics_updates(0)
{  
};

gazebo_msgs::SetJointTrajectoryRequest::SetJointTrajectoryRequest(const gazebo_msgs::SetJointTrajectoryRequest & inobj) : model_name(inobj.model_name), joint_trajectory(inobj.joint_trajectory), model_pose(inobj.model_pose), set_model_pose(inobj.set_model_pose), disable_physics_updates(inobj.disable_physics_updates)
{
};

gazebo_msgs::SetJointTrajectoryRequest::~SetJointTrajectoryRequest()
{
};

gazebo_msgs::SetJointTrajectoryRequest * gazebo_msgs::SetJointTrajectoryRequest::New()
{ 
    return new SetJointTrajectoryRequest();
};

bool gazebo_msgs::SetJointTrajectoryRequest::dataTypeFlat() 
{  
    return trajectory_msgs::JointTrajectory::dataTypeFlat() && geometry_msgs::Pose::dataTypeFlat() && rframe::CodeGenTraits<std::string>::flat();

};

gazebo_msgs::SetJointTrajectoryRequest & gazebo_msgs::SetJointTrajectoryRequest::operator=(const gazebo_msgs::SetJointTrajectoryRequest & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::SetJointTrajectoryRequest is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::SetJointTrajectoryRequest));
        }
        else */ 
        {

            model_name = inobj.model_name;
            joint_trajectory = inobj.joint_trajectory;
            model_pose = inobj.model_pose;
            set_model_pose = inobj.set_model_pose;
            disable_physics_updates = inobj.disable_physics_updates;
        }
    }

    return *this;
}

bool gazebo_msgs::SetJointTrajectoryRequest::operator==(const gazebo_msgs::SetJointTrajectoryRequest & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (model_name == inobj.model_name)
             && (joint_trajectory == inobj.joint_trajectory)
             && (model_pose == inobj.model_pose)
             && (set_model_pose == inobj.set_model_pose)
             && (disable_physics_updates == inobj.disable_physics_updates);
    }

    return ret;
}

bool gazebo_msgs::SetJointTrajectoryRequest::operator!=(const gazebo_msgs::SetJointTrajectoryRequest & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::SetJointTrajectoryRequest::operator<(const gazebo_msgs::SetJointTrajectoryRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (model_name < inobj.model_name) return true;
        if (inobj.model_name <  model_name) return false; 
        if (joint_trajectory < inobj.joint_trajectory) return true;
        if (inobj.joint_trajectory <  joint_trajectory) return false; 
        if (model_pose < inobj.model_pose) return true;
        if (inobj.model_pose <  model_pose) return false; 
        if (set_model_pose < inobj.set_model_pose) return true;
        if (inobj.set_model_pose <  set_model_pose) return false; 
        if (disable_physics_updates < inobj.disable_physics_updates) return true;
        if (inobj.disable_physics_updates <  disable_physics_updates) return false; ;
    }

    return ret;
}

bool gazebo_msgs::SetJointTrajectoryRequest::operator>(const gazebo_msgs::SetJointTrajectoryRequest & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (model_name > inobj.model_name) return true;
        if (inobj.model_name >  model_name) return false; 
        if (joint_trajectory > inobj.joint_trajectory) return true;
        if (inobj.joint_trajectory >  joint_trajectory) return false; 
        if (model_pose > inobj.model_pose) return true;
        if (inobj.model_pose >  model_pose) return false; 
        if (set_model_pose > inobj.set_model_pose) return true;
        if (inobj.set_model_pose >  set_model_pose) return false; 
        if (disable_physics_updates > inobj.disable_physics_updates) return true;
        if (inobj.disable_physics_updates >  disable_physics_updates) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::SetJointTrajectoryRequest & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"model_name",t.model_name,indent,false);
    rframe::json_io::encode(sstr,"joint_trajectory",t.joint_trajectory,indent,false);
    rframe::json_io::encode(sstr,"model_pose",t.model_pose,indent,false);
    rframe::json_io::encode(sstr,"set_model_pose",t.set_model_pose,indent,false);
    rframe::json_io::encode(sstr,"disable_physics_updates",t.disable_physics_updates,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::SetJointTrajectoryRequest::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::SetJointTrajectoryRequest & value)
{
    return s << value.toStr(false);
}

