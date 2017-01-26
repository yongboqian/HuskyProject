// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:56 -0500
//  From Template/Script: data_templates/DataClassSerializationTemplate.cpp
 
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

#include <stdio.h>

// override the itemName template function used within serialization

#include <common/Log.h>
#include <common/BsonIo.h>
#include <common/SerializationCppHelpers.h>
#include <common/SerializationHelpers.h>

#include <driver_base/ConfigString.h>
#include <driver_base/ConfigValue.h>
#include <driver_base/SensorLevels.h>

using namespace std;

template<class Archive> void driver_base::ConfigString::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("value",value);
}

string driver_base::ConfigString::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const driver_base::ConfigString & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ConfigString",robj);

    */
    string s = str.str();

    return s;
};

bool driver_base::ConfigString::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    driver_base::ConfigString & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ConfigString",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(driver_base::ConfigString); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(driver_base::ConfigString); // defined in common/SerialzationHelpers.h

template<class Archive> void driver_base::ConfigValue::serialize(Archive &ar, const unsigned int fileVersion)
{   

    ar & boost::serialization::make_nvp("name",name);

    ar & boost::serialization::make_nvp("value",value);
}

string driver_base::ConfigValue::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const driver_base::ConfigValue & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("ConfigValue",robj);

    */
    string s = str.str();

    return s;
};

bool driver_base::ConfigValue::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    driver_base::ConfigValue & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("ConfigValue",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(driver_base::ConfigValue); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(driver_base::ConfigValue); // defined in common/SerialzationHelpers.h

template<class Archive> void driver_base::SensorLevels::serialize(Archive &ar, const unsigned int fileVersion)
{   

}

string driver_base::SensorLevels::toXML() const
{
    stringstream str;
    std::cout << "toXML commented out" << std::endl;
    /*
    const driver_base::SensorLevels & robj = (*this);

    boost::archive::xml_oarchive oa(str,boost::archive::no_header);
    oa & boost::serialization::make_nvp("SensorLevels",robj);

    */
    string s = str.str();

    return s;
};

bool driver_base::SensorLevels::fromXML(const string &str)
{
    bool retval = true;
        std::cout << "fromXML commented out" << std::endl;
    /*
    stringstream sstr(str);
    driver_base::SensorLevels & robj = (*this);

    try
    {
        boost::archive::xml_iarchive oa(sstr,boost::archive::no_header);
        oa & boost::serialization::make_nvp("SensorLevels",robj);
    }
    catch (exception & e)
    {
        retval = false;
    }

    */
    return retval;
};

GENERIC_SERIALIZATION_ENTRYPOINTS(driver_base::SensorLevels); // defined in common/Common.h

INSTANTIATE_BOOST_SERIALIZATION(driver_base::SensorLevels); // defined in common/SerialzationHelpers.h

