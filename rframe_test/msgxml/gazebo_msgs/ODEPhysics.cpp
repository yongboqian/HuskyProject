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
#include "gazebo_msgs/ODEPhysics.h"

#include <common/JsonIo.h> // include here so container types are included by the class header 

using namespace std;

const unsigned int gazebo_msgs::ODEPhysics::ID;
const unsigned int gazebo_msgs::ODEPhysics::DATA_VERSION;
const std::string gazebo_msgs::ODEPhysics::DATA_TYPE_NAME = "ODEPhysics";
const std::string gazebo_msgs::ODEPhysics::DATA_TYPE_FULL_NAME = "gazebo_msgs::ODEPhysics";
const std::string gazebo_msgs::ODEPhysics::VERSION_MD5 = "895939bb30b8cbb218b306248d043887";
/* xml source for this class */
const std::string gazebo_msgs::ODEPhysics::XML_SOURCE = "<class name=\"ODEPhysics\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"667d56ddbd547918c32d1934503dc335\" rosDesc=\"bool auto_disable_bodies           # enable auto disabling of bodies, default false\\nuint32 sor_pgs_precon_iters        # preconditioning inner iterations when uisng projected Gauss Seidel\\nuint32 sor_pgs_iters               # inner iterations when uisng projected Gauss Seidel\\nfloat64 sor_pgs_w                  # relaxation parameter when using projected Gauss Seidel, 1 = no relaxation\\nfloat64 sor_pgs_rms_error_tol      # rms error tolerance before stopping inner iterations\\nfloat64 contact_surface_layer      # contact \\&quot;dead-band\\&quot; width\\nfloat64 contact_max_correcting_vel # contact maximum correction velocity\\nfloat64 cfm                        # global constraint force mixing\\nfloat64 erp                        # global error reduction parameter\\nuint32 max_contacts                # maximum contact joints between two geoms\\n\" comment=\"\" id=\"1781288120\">\
  <field name=\"auto_disable_bodies\" type=\"bool\" sourceType=\"bool\" comment=\"enable auto disabling of bodies, default false\"/>\
  <field name=\"sor_pgs_precon_iters\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"preconditioning inner iterations when uisng projected Gauss Seidel\"/>\
  <field name=\"sor_pgs_iters\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"inner iterations when uisng projected Gauss Seidel\"/>\
  <field name=\"sor_pgs_w\" type=\"double\" sourceType=\"float64\" comment=\"relaxation parameter when using projected Gauss Seidel, 1 = no relaxation\"/>\
  <field name=\"sor_pgs_rms_error_tol\" type=\"double\" sourceType=\"float64\" comment=\"rms error tolerance before stopping inner iterations\"/>\
  <field name=\"contact_surface_layer\" type=\"double\" sourceType=\"float64\" comment=\"contact &quot;dead-band&quot; width\"/>\
  <field name=\"contact_max_correcting_vel\" type=\"double\" sourceType=\"float64\" comment=\"contact maximum correction velocity\"/>\
  <field name=\"cfm\" type=\"double\" sourceType=\"float64\" comment=\"global constraint force mixing\"/>\
  <field name=\"erp\" type=\"double\" sourceType=\"float64\" comment=\"global error reduction parameter\"/>\
  <field name=\"max_contacts\" type=\"unsigned int\" sourceType=\"uint32\" comment=\"maximum contact joints between two geoms\"/>\
</class>";

gazebo_msgs::ODEPhysics::ODEPhysics() : auto_disable_bodies(0), sor_pgs_precon_iters(0), sor_pgs_iters(0), sor_pgs_w(0), sor_pgs_rms_error_tol(0), contact_surface_layer(0), contact_max_correcting_vel(0), cfm(0), erp(0), max_contacts(0)
{  
};

gazebo_msgs::ODEPhysics::ODEPhysics(const gazebo_msgs::ODEPhysics & inobj) : auto_disable_bodies(inobj.auto_disable_bodies), sor_pgs_precon_iters(inobj.sor_pgs_precon_iters), sor_pgs_iters(inobj.sor_pgs_iters), sor_pgs_w(inobj.sor_pgs_w), sor_pgs_rms_error_tol(inobj.sor_pgs_rms_error_tol), contact_surface_layer(inobj.contact_surface_layer), contact_max_correcting_vel(inobj.contact_max_correcting_vel), cfm(inobj.cfm), erp(inobj.erp), max_contacts(inobj.max_contacts)
{
};

gazebo_msgs::ODEPhysics::~ODEPhysics()
{
};

gazebo_msgs::ODEPhysics * gazebo_msgs::ODEPhysics::New()
{ 
    return new ODEPhysics();
};

bool gazebo_msgs::ODEPhysics::dataTypeFlat() 
{  
    return true;
};

gazebo_msgs::ODEPhysics & gazebo_msgs::ODEPhysics::operator=(const gazebo_msgs::ODEPhysics & inobj)
{
    if (this != &inobj)
    {

        // if datatype is flat, optimize with memcpy (complier level optimiation)
              /*  if (dataTypeFlat() == true)
                  REMOVED invalid when assigning from a parent type as this is the pointer to the derived type, thus gazebo_msgs::ODEPhysics is copied to the wrong location

        {
            memcpy(this,&inobj,sizeof(gazebo_msgs::ODEPhysics));
        }
        else */ 
        {

            auto_disable_bodies = inobj.auto_disable_bodies;
            sor_pgs_precon_iters = inobj.sor_pgs_precon_iters;
            sor_pgs_iters = inobj.sor_pgs_iters;
            sor_pgs_w = inobj.sor_pgs_w;
            sor_pgs_rms_error_tol = inobj.sor_pgs_rms_error_tol;
            contact_surface_layer = inobj.contact_surface_layer;
            contact_max_correcting_vel = inobj.contact_max_correcting_vel;
            cfm = inobj.cfm;
            erp = inobj.erp;
            max_contacts = inobj.max_contacts;
        }
    }

    return *this;
}

bool gazebo_msgs::ODEPhysics::operator==(const gazebo_msgs::ODEPhysics & inobj) const
{
    bool ret = true;

    if (this != &inobj)
    { 
        ret = ret 
             && (auto_disable_bodies == inobj.auto_disable_bodies)
             && (sor_pgs_precon_iters == inobj.sor_pgs_precon_iters)
             && (sor_pgs_iters == inobj.sor_pgs_iters)
             && (sor_pgs_w == inobj.sor_pgs_w)
             && (sor_pgs_rms_error_tol == inobj.sor_pgs_rms_error_tol)
             && (contact_surface_layer == inobj.contact_surface_layer)
             && (contact_max_correcting_vel == inobj.contact_max_correcting_vel)
             && (cfm == inobj.cfm)
             && (erp == inobj.erp)
             && (max_contacts == inobj.max_contacts);
    }

    return ret;
}

bool gazebo_msgs::ODEPhysics::operator!=(const gazebo_msgs::ODEPhysics & inobj) const
{
    bool ret = false;

    if (this != &inobj)
    {
        ret = !operator==(inobj);
    }

    return ret;
}

bool gazebo_msgs::ODEPhysics::operator<(const gazebo_msgs::ODEPhysics & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {  
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (auto_disable_bodies < inobj.auto_disable_bodies) return true;
        if (inobj.auto_disable_bodies <  auto_disable_bodies) return false; 
        if (sor_pgs_precon_iters < inobj.sor_pgs_precon_iters) return true;
        if (inobj.sor_pgs_precon_iters <  sor_pgs_precon_iters) return false; 
        if (sor_pgs_iters < inobj.sor_pgs_iters) return true;
        if (inobj.sor_pgs_iters <  sor_pgs_iters) return false; 
        if (sor_pgs_w < inobj.sor_pgs_w) return true;
        if (inobj.sor_pgs_w <  sor_pgs_w) return false; 
        if (sor_pgs_rms_error_tol < inobj.sor_pgs_rms_error_tol) return true;
        if (inobj.sor_pgs_rms_error_tol <  sor_pgs_rms_error_tol) return false; 
        if (contact_surface_layer < inobj.contact_surface_layer) return true;
        if (inobj.contact_surface_layer <  contact_surface_layer) return false; 
        if (contact_max_correcting_vel < inobj.contact_max_correcting_vel) return true;
        if (inobj.contact_max_correcting_vel <  contact_max_correcting_vel) return false; 
        if (cfm < inobj.cfm) return true;
        if (inobj.cfm <  cfm) return false; 
        if (erp < inobj.erp) return true;
        if (inobj.erp <  erp) return false; 
        if (max_contacts < inobj.max_contacts) return true;
        if (inobj.max_contacts <  max_contacts) return false; ;
    }

    return ret;
}

bool gazebo_msgs::ODEPhysics::operator>(const gazebo_msgs::ODEPhysics & inobj) const
{
    bool ret = false;

    if (this == &inobj)
    {
        ret = false;
    }
    else
    {
        // comparison algorithm based on std::lexicographical_compare algorithm

        if (auto_disable_bodies > inobj.auto_disable_bodies) return true;
        if (inobj.auto_disable_bodies >  auto_disable_bodies) return false; 
        if (sor_pgs_precon_iters > inobj.sor_pgs_precon_iters) return true;
        if (inobj.sor_pgs_precon_iters >  sor_pgs_precon_iters) return false; 
        if (sor_pgs_iters > inobj.sor_pgs_iters) return true;
        if (inobj.sor_pgs_iters >  sor_pgs_iters) return false; 
        if (sor_pgs_w > inobj.sor_pgs_w) return true;
        if (inobj.sor_pgs_w >  sor_pgs_w) return false; 
        if (sor_pgs_rms_error_tol > inobj.sor_pgs_rms_error_tol) return true;
        if (inobj.sor_pgs_rms_error_tol >  sor_pgs_rms_error_tol) return false; 
        if (contact_surface_layer > inobj.contact_surface_layer) return true;
        if (inobj.contact_surface_layer >  contact_surface_layer) return false; 
        if (contact_max_correcting_vel > inobj.contact_max_correcting_vel) return true;
        if (inobj.contact_max_correcting_vel >  contact_max_correcting_vel) return false; 
        if (cfm > inobj.cfm) return true;
        if (inobj.cfm >  cfm) return false; 
        if (erp > inobj.erp) return true;
        if (inobj.erp >  erp) return false; 
        if (max_contacts > inobj.max_contacts) return true;
        if (inobj.max_contacts >  max_contacts) return false; ;
    }

    return ret;
}

template <> void rframe::json_io::encode(std::stringstream & sstr, const char * name, const gazebo_msgs::ODEPhysics & t, std::string & indent, bool lastItem)
{
    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectStart(sstr,name,indent);

    rframe::json_io::encode(sstr,"auto_disable_bodies",t.auto_disable_bodies,indent,false);
    rframe::json_io::encode(sstr,"sor_pgs_precon_iters",t.sor_pgs_precon_iters,indent,false);
    rframe::json_io::encode(sstr,"sor_pgs_iters",t.sor_pgs_iters,indent,false);
    rframe::json_io::encode(sstr,"sor_pgs_w",t.sor_pgs_w,indent,false);
    rframe::json_io::encode(sstr,"sor_pgs_rms_error_tol",t.sor_pgs_rms_error_tol,indent,false);
    rframe::json_io::encode(sstr,"contact_surface_layer",t.contact_surface_layer,indent,false);
    rframe::json_io::encode(sstr,"contact_max_correcting_vel",t.contact_max_correcting_vel,indent,false);
    rframe::json_io::encode(sstr,"cfm",t.cfm,indent,false);
    rframe::json_io::encode(sstr,"erp",t.erp,indent,false);
    rframe::json_io::encode(sstr,"max_contacts",t.max_contacts,indent,true);

    if ((name) && (*name != '\0')) rframe::json_io::encodeObjectEnd(sstr,indent,lastItem);
}

std::string gazebo_msgs::ODEPhysics::toStr(bool pretty) const
{

    stringstream sstr;
    string indent = (pretty == true) ? "\n" : "";

    rframe::json_io::encodeObjectStartMain(sstr,indent);
    rframe::json_io::encode(sstr,"",*this,indent,true);
    rframe::json_io::encodeObjectEnd(sstr,indent,true); // false so as to  not add , at end of string

    return sstr.str();

};

std::basic_ostream<char>& operator<<(std::basic_ostream<char> &s, const gazebo_msgs::ODEPhysics & value)
{
    return s << value.toStr(false);
}

