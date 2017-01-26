// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 12:55:17 -0500
//  From Template/Script: data_templates/DataLibraryTemplate.cpp
 
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

#include "driver_base_gencpp_Library.h"
#include <common/Log.h>
#include <common/TypeRegistry.h>
#include <messaging/Message.h>

#include <driver_base/ConfigString.h>
#include <driver_base/ConfigValue.h>
#include <driver_base/SensorLevels.h>

extern "C"
{
    /** library access method */
    int rframeRegisterDataLibrary()
    {
        return driver_base::registerLibrary();
    };
}

namespace driver_base
{

    static void deallocateMessage(MessageBase * msg)
    {
        delete msg;
    }

    static int allocateMessage(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
    {
        int retval = rframe::Error::SUCCESS;
        bool found = true;
        switch (id)
        { 
            case ConfigString::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ConfigString>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case ConfigValue::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<ConfigValue>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            case SensorLevels::ID:
            {
                std::shared_ptr<MessageBase> tempMsg(new Message<SensorLevels>(),std::bind(deallocateMessage,std::placeholders::_1));
                if (tempMsg.get() == NULL)
                {
                    retval = rframe::Error::MEMORY_ALLOC;
                } 
                else
                {
                    msg.swap(tempMsg);
                }
                break;
            } 
            default:
            {
                found = false;
            }
        }

        if (found == false)
        {
            retval = rframe::Error::PARAM_RANGE;
        }
        else if (msg.get() == NULL)
        {
            retval = rframe::Error::MEMORY_ALLOC;
        }
        else if (msg.get() != NULL)
        {
            retval = rframe::Error::SUCCESS;
        }

        return retval;
    }

    /** registry this data set with the system */
    //int register_driver_base_gencpp()
    int registerLibrary()
    {
        int retval = rframe::Error::SUCCESS;
        static bool registered = false;
        rframe::TypeRegistry & reg = rframe::TypeRegistry::instance();

        LOG_INFO("registering data for library: driver_base_gencpp");

        if (registered == false)
        {
            registered = true;

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = driver_base::ConfigString::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<driver_base::ConfigString>(
                    // boost::lambda::new_ptr<driver_base::ConfigString>(),
                    [](){ return new driver_base::ConfigString(); },
                                std::bind(allocateMessage,driver_base::ConfigString::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ConfigString");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = driver_base::ConfigString::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(driver_base::ConfigString::DATA_TYPE_NAME,driver_base::ConfigString::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ConfigString");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = driver_base::ConfigValue::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<driver_base::ConfigValue>(
                    // boost::lambda::new_ptr<driver_base::ConfigValue>(),
                    [](){ return new driver_base::ConfigValue(); },
                                std::bind(allocateMessage,driver_base::ConfigValue::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: ConfigValue");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = driver_base::ConfigValue::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(driver_base::ConfigValue::DATA_TYPE_NAME,driver_base::ConfigValue::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: ConfigValue");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = driver_base::SensorLevels::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerType<driver_base::SensorLevels>(
                    // boost::lambda::new_ptr<driver_base::SensorLevels>(),
                    [](){ return new driver_base::SensorLevels(); },
                                std::bind(allocateMessage,driver_base::SensorLevels::ID,
                                          std::placeholders::_1))) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class: SensorLevels");
            }

            if ((retval == rframe::Error::SUCCESS) 
                //  && ((retval = driver_base::SensorLevels::registerType()) != rframe::Error::SUCCESS))
                && ((retval = reg.registerAlias(driver_base::SensorLevels::DATA_TYPE_NAME,driver_base::SensorLevels::DATA_TYPE_FULL_NAME)) != rframe::Error::SUCCESS)
                )
            {
                LOG_CRIT("failed to register class alias to short name: SensorLevels");
            }

        }

        return retval;
    };

    std::string xmlSource()
    {
        return "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
<!--\
 \
  AUTOGENERATED FILE:   do not edit\
\
  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 12:55:11 -0500\
  From Template/Script: rosToXML.rb\
 \
\
-->\
<classes library_name=\"driver_base_gencpp\" namespace=\"driver_base\">\
\
<class name=\"ConfigString\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"bc6ccc4a57f61779c8eaae61e9f422e0\" rosDesc=\"string name\\nstring value\\n\" comment=\"\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"value\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
</class>\
\
<class name=\"ConfigValue\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"d8512f27253c0f65f928a67c329cd658\" rosDesc=\"string name\\nfloat64 value\\n\" comment=\"\">\
  <field name=\"name\" type=\"string\" sourceType=\"string\" comment=\"\"/>\
  <field name=\"value\" type=\"double\" sourceType=\"float64\" comment=\"\"/>\
</class>\
\
<class name=\"SensorLevels\" publicDataMembers=\"true\" sourceIDL=\"ROS\" ros=\"true\" rosMD5=\"6322637bee96d5489db6e2127c47602c\" rosDesc=\"byte RECONFIGURE_CLOSE = 3  # Parameters that need a sensor to be stopped completely when changed\\nbyte RECONFIGURE_STOP = 1  # Parameters that need a sensor to stop streaming when changed\\nbyte RECONFIGURE_RUNNING = 0 # Parameters that can be changed while a sensor is streaming\\n\" comment=\"\">\
  <constant init=\"3\" name=\"RECONFIGURE_CLOSE\" type=\"char\" sourceType=\"byte\" comment=\"Parameters that need a sensor to be stopped completely when changed\"/>\
  <constant init=\"1\" name=\"RECONFIGURE_STOP\" type=\"char\" sourceType=\"byte\" comment=\"Parameters that need a sensor to stop streaming when changed\"/>\
  <constant init=\"0\" name=\"RECONFIGURE_RUNNING\" type=\"char\" sourceType=\"byte\" comment=\"Parameters that can be changed while a sensor is streaming\"/>\
</class>\
\
<dependency name=\"std_msgs_gencpp\"/>\
<dependency name=\"std_srvs_gencpp\"/>\
\
</classes>\
";
    }

}; // end namespace driver_base

