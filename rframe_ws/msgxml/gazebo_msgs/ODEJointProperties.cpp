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
#include "gazebo_msgs/ODEJointProperties.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::ODEJointProperties::ID;
const unsigned int gazebo_msgs::ODEJointProperties::DATA_VERSION;
const std::string gazebo_msgs::ODEJointProperties::DATA_TYPE_NAME = "ODEJointProperties";
const std::string gazebo_msgs::ODEJointProperties::DATA_TYPE_FULL_NAME = "gazebo_msgs::ODEJointProperties";
const std::string gazebo_msgs::ODEJointProperties::VERSION_MD5 = "01872e2f8392eb916def52a68e136b20";
/* xml source for this class */
const std::string gazebo_msgs::ODEJointProperties::XML_SOURCE = "<class name=\"ODEJointProperties\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"1b744c32a920af979f53afe2f9c3511f\" rosDesc=\"# access to low level joint properties, change these at your own risk\\nfloat64[] damping             # joint damping\\nfloat64[] hiStop              # joint limit\\nfloat64[] loStop              # joint limit\\nfloat64[] erp                 # set joint erp\\nfloat64[] cfm                 # set joint cfm\\nfloat64[] stop_erp            # set joint erp for joint limit \\&quot;contact\\&quot; joint\\nfloat64[] stop_cfm            # set joint cfm for joint limit \\&quot;contact\\&quot; joint\\nfloat64[] fudge_factor        # joint fudge_factor applied at limits, see ODE manual for info.\\nfloat64[] fmax                # ode joint param fmax\\nfloat64[] vel                 # ode joint param vel\\n\" comment=\"access to low level joint properties, change these at your own risk\" id=\"1781288119\">\
  <field name=\"damping\" type=\"vector(double)\" sourceType=\"float64\" comment=\"joint damping\"/>\
  <field name=\"hiStop\" type=\"vector(double)\" sourceType=\"float64\" comment=\"joint limit\"/>\
  <field name=\"loStop\" type=\"vector(double)\" sourceType=\"float64\" comment=\"joint limit\"/>\
  <field name=\"erp\" type=\"vector(double)\" sourceType=\"float64\" comment=\"set joint erp\"/>\
  <field name=\"cfm\" type=\"vector(double)\" sourceType=\"float64\" comment=\"set joint cfm\"/>\
  <field name=\"stop_erp\" type=\"vector(double)\" sourceType=\"float64\" comment=\"set joint erp for joint limit &quot;contact&quot; joint\"/>\
  <field name=\"stop_cfm\" type=\"vector(double)\" sourceType=\"float64\" comment=\"set joint cfm for joint limit &quot;contact&quot; joint\"/>\
  <field name=\"fudge_factor\" type=\"vector(double)\" sourceType=\"float64\" comment=\"joint fudge_factor applied at limits, see ODE manual for info.\"/>\
  <field name=\"fmax\" type=\"vector(double)\" sourceType=\"float64\" comment=\"ode joint param fmax\"/>\
  <field name=\"vel\" type=\"vector(double)\" sourceType=\"float64\" comment=\"ode joint param vel\"/>\
</class>";

gazebo_msgs::ODEJointProperties::ODEJointProperties() : damping(), hiStop(), loStop(), erp(), cfm(), stop_erp(), stop_cfm(), fudge_factor(), fmax(), vel()
{  
};

gazebo_msgs::ODEJointProperties::ODEJointProperties(const gazebo_msgs::ODEJointProperties & inobj) : damping(inobj.damping), hiStop(inobj.hiStop), loStop(inobj.loStop), erp(inobj.erp), cfm(inobj.cfm), stop_erp(inobj.stop_erp), stop_cfm(inobj.stop_cfm), fudge_factor(inobj.fudge_factor), fmax(inobj.fmax), vel(inobj.vel)
{
};

gazebo_msgs::ODEJointProperties::~ODEJointProperties()
{
};

gazebo_msgs::ODEJointProperties * gazebo_msgs::ODEJointProperties::New()
{ 
    return new ODEJointProperties();
};

bool gazebo_msgs::ODEJointProperties::dataTypeFlat() 
{   
    return false; 
};

gazebo_msgs::ODEJointProperties & gazebo_msgs::ODEJointProperties::operator=(const gazebo_msgs::ODEJointProperties & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::ODEJointProperties is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::ODEJointProperties));
        }
        else */ 
        {

            damping = inobj.damping;
            hiStop = inobj.hiStop;
            loStop = inobj.loStop;
            erp = inobj.erp;
            cfm = inobj.cfm;
            stop_erp = inobj.stop_erp;
            stop_cfm = inobj.stop_cfm;
            fudge_factor = inobj.fudge_factor;
            fmax = inobj.fmax;
            vel = inobj.vel;
        }
    }

    return *this;
}

bool gazebo_msgs::ODEJointProperties::operator==(const gazebo_msgs::ODEJointProperties & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (damping == inobj.damping)
             && (hiStop == inobj.hiStop)
             && (loStop == inobj.loStop)
             && (erp == inobj.erp)
             && (cfm == inobj.cfm)
             && (stop_erp == inobj.stop_erp)
             && (stop_cfm == inobj.stop_cfm)
             && (fudge_factor == inobj.fudge_factor)
             && (fmax == inobj.fmax)
             && (vel == inobj.vel);
    }

    return ret;
}

bool gazebo_msgs::ODEJointProperties::operator!=(const gazebo_msgs::ODEJointProperties & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::ODEJointProperties::operator<(const gazebo_msgs::ODEJointProperties & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (damping < inobj.damping) return true;
        if (inobj.damping <  damping) return false; 
        if (hiStop < inobj.hiStop) return true;
        if (inobj.hiStop <  hiStop) return false; 
        if (loStop < inobj.loStop) return true;
        if (inobj.loStop <  loStop) return false; 
        if (erp < inobj.erp) return true;
        if (inobj.erp <  erp) return false; 
        if (cfm < inobj.cfm) return true;
        if (inobj.cfm <  cfm) return false; 
        if (stop_erp < inobj.stop_erp) return true;
        if (inobj.stop_erp <  stop_erp) return false; 
        if (stop_cfm < inobj.stop_cfm) return true;
        if (inobj.stop_cfm <  stop_cfm) return false; 
        if (fudge_factor < inobj.fudge_factor) return true;
        if (inobj.fudge_factor <  fudge_factor) return false; 
        if (fmax < inobj.fmax) return true;
        if (inobj.fmax <  fmax) return false; 
        if (vel < inobj.vel) return true;
        if (inobj.vel <  vel) return false; ;
    }

    return ret;
}

bool gazebo_msgs::ODEJointProperties::operator>(const gazebo_msgs::ODEJointProperties & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (damping > inobj.damping) return true;
        if (inobj.damping >  damping) return false; 
        if (hiStop > inobj.hiStop) return true;
        if (inobj.hiStop >  hiStop) return false; 
        if (loStop > inobj.loStop) return true;
        if (inobj.loStop >  loStop) return false; 
        if (erp > inobj.erp) return true;
        if (inobj.erp >  erp) return false; 
        if (cfm > inobj.cfm) return true;
        if (inobj.cfm >  cfm) return false; 
        if (stop_erp > inobj.stop_erp) return true;
        if (inobj.stop_erp >  stop_erp) return false; 
        if (stop_cfm > inobj.stop_cfm) return true;
        if (inobj.stop_cfm >  stop_cfm) return false; 
        if (fudge_factor > inobj.fudge_factor) return true;
        if (inobj.fudge_factor >  fudge_factor) return false; 
        if (fmax > inobj.fmax) return true;
        if (inobj.fmax >  fmax) return false; 
        if (vel > inobj.vel) return true;
        if (inobj.vel >  vel) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::ODEJointProperties & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"damping",t.damping,indent,false);
    rframe::json_io::encode(sstr,"hiStop",t.hiStop,indent,false);
    rframe::json_io::encode(sstr,"loStop",t.loStop,indent,false);
    rframe::json_io::encode(sstr,"erp",t.erp,indent,false);
    rframe::json_io::encode(sstr,"cfm",t.cfm,indent,false);
    rframe::json_io::encode(sstr,"stop_erp",t.stop_erp,indent,false);
    rframe::json_io::encode(sstr,"stop_cfm",t.stop_cfm,indent,false);
    rframe::json_io::encode(sstr,"fudge_factor",t.fudge_factor,indent,false);
    rframe::json_io::encode(sstr,"fmax",t.fmax,indent,false);
    rframe::json_io::encode(sstr,"vel",t.vel,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::ODEJointProperties::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::ODEJointProperties & value)
{
    return s << value.toStr(false);
}

