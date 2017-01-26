// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 12:55:17 -0500
//  From Template/Script: data_templates/ROSTemplate.cpp.rb
 
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

#include "driver_base_gencpp_ROS.h"
#include <common/Log.h>
#include <common/DataTypeInfo.h>

using namespace std;
using namespace driver_base;

rframe::ROSMessageFactory * ROS_driver_base_gencppfactory = NULL;

extern "C"
{
    /** library access method */
    rframe::MessageFactoryBase * AllocateMessageFactory()
    {
        ROS_driver_base_gencppfactory = new driver_base_gencppROSMessageFactory();

        return ROS_driver_base_gencppfactory;
    };
}

rframe::ROSMessageFactory * driver_base::allocate_driver_base_gencpp()
{
    ROS_driver_base_gencppfactory = new driver_base_gencppROSMessageFactory();
    return ROS_driver_base_gencppfactory;
};

driver_base_gencppROSMessageFactory::driver_base_gencppROSMessageFactory()
{
    name("driver_base_gencpp");
    // use constructor to register data types
    driver_base::registerLibrary();
}

driver_base_gencppROSMessageFactory::~driver_base_gencppROSMessageFactory()
{
}

int driver_base_gencppROSMessageFactory::dataType(ros::SerializedMessage & msg)
{
    return msg.message_type;
}

void driver_base_gencppROSMessageFactory::dataTypes(vector<DataTypeInfo> & ids)
{
    DataTypeInfo info;

    ids.clear();

    info.id(ConfigString::ID);
    info.name(ConfigString::DATA_TYPE_FULL_NAME);
    info.hashKey(ConfigString::DATA_VERSION);
    info.md5Key(ConfigString::VERSION_MD5);
    info.xmlSource(ConfigString::XML_SOURCE);
    info.flat(ConfigString::dataTypeFlat());
    ids.push_back(info);

    info.id(ConfigValue::ID);
    info.name(ConfigValue::DATA_TYPE_FULL_NAME);
    info.hashKey(ConfigValue::DATA_VERSION);
    info.md5Key(ConfigValue::VERSION_MD5);
    info.xmlSource(ConfigValue::XML_SOURCE);
    info.flat(ConfigValue::dataTypeFlat());
    ids.push_back(info);

    info.id(SensorLevels::ID);
    info.name(SensorLevels::DATA_TYPE_FULL_NAME);
    info.hashKey(SensorLevels::DATA_VERSION);
    info.md5Key(SensorLevels::VERSION_MD5);
    info.xmlSource(SensorLevels::XML_SOURCE);
    info.flat(SensorLevels::dataTypeFlat());
    ids.push_back(info);

}

int driver_base_gencppROSMessageFactory::typeName(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case ConfigString::ID:
        {
            str = "driver_base/ConfigString";
            break;
        }
        case ConfigValue::ID:
        {
            str = "driver_base/ConfigValue";
            break;
        }
        case SensorLevels::ID:
        {
            str = "driver_base/SensorLevels";
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::desc(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case ConfigString::ID:
        {
            str = "string name\nstring value\n";
            break;
        }
        case ConfigValue::ID:
        {
            str = "string name\nfloat64 value\n";
            break;
        }
        case SensorLevels::ID:
        {
            str = "byte RECONFIGURE_CLOSE = 3  # Parameters that need a sensor to be stopped completely when changed\nbyte RECONFIGURE_STOP = 1  # Parameters that need a sensor to stop streaming when changed\nbyte RECONFIGURE_RUNNING = 0 # Parameters that can be changed while a sensor is streaming\n";
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::md5String(std::string & str, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case ConfigString::ID:
        {
            str = "bc6ccc4a57f61779c8eaae61e9f422e0";
            break;
        }
        case ConfigValue::ID:
        {
            str = "d8512f27253c0f65f928a67c329cd658";
            break;
        }
        case SensorLevels::ID:
        {
            str = "6322637bee96d5489db6e2127c47602c";
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    {   
        case ConfigString::ID:
        {   
		    highOrder = 0xbc6ccc4a57f61779ULL;
            lowOrder = 0xc8eaae61e9f422e0ULL;
            break;
        }
        case ConfigValue::ID:
        {   
		    highOrder = 0xd8512f27253c0f65ULL;
            lowOrder = 0xf928a67c329cd658ULL;
            break;
        }
        case SensorLevels::ID:
        {   
		    highOrder = 0x6322637bee96d548ULL;
            lowOrder = 0x9db6e2127c47602cULL;
            break;
        }
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    { 
        case ConfigString::ID:
        case ConfigValue::ID:
        case SensorLevels::ID:
        {
            break;
        } 
        default:
	    {
            retval = rframe::Error::PARAM_RANGE;
            break;
	    }
    }

    if (retval == rframe::Error::SUCCESS)
	{
        std::shared_ptr<ros::SerializedMessage> newmsg(new ros::SerializedMessage);

        if (newmsg.get() == NULL)
	    {
            retval = rframe::Error::MEMORY_ALLOC;
        }
        else
	    {
            newmsg->message_type = id;
            msg.swap(newmsg);
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
{
    int retval = rframe::Error::SUCCESS;

    switch (id)
    { 
        case ConfigString::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<ConfigString>(),std::bind(&driver_base_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
            std::shared_ptr<MessageBase> tempMsg(new Message<ConfigValue>(),std::bind(&driver_base_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
            std::shared_ptr<MessageBase> tempMsg(new Message<SensorLevels>(),std::bind(&driver_base_gencppROSMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
            retval = rframe::Error::PARAM_RANGE;
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::deallocateMessage(MessageBase * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
	{
        delete msg;
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::deallocateTransport(ros::SerializedMessage * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
    {
        delete msg;
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::toTransport(MessageBase & src, ros::SerializedMessage & dst)
{
    int retval = rframe::Error::SUCCESS;

    if (dst.message_type != src.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (dst.message_type)
        { 
            case ConfigString::ID:
            {
                Message<ConfigString > & tempSrc = static_cast<Message<ConfigString>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: driver_base_gencpp::ConfigString buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
				}

                // deprecated, now uses pre allocated buffers
                dst.num_bytes = bufSize+sizeof(uint32_t);

                // create stream to hold serialized data + its length
                ros::serialization::OStream stream(dst.buf.get(),dst.num_bytes);
                // encode buffer length
				ros::serialization::serialize(stream,(uint32_t)bufSize);
                // encode payload
			    dst.message_start = stream.getData();
                ros::serialization::serialize(stream,tempSrc.payload());
                break;
            } 
            case ConfigValue::ID:
            {
                Message<ConfigValue > & tempSrc = static_cast<Message<ConfigValue>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: driver_base_gencpp::ConfigValue buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
				}

                // deprecated, now uses pre allocated buffers
                dst.num_bytes = bufSize+sizeof(uint32_t);

                // create stream to hold serialized data + its length
                ros::serialization::OStream stream(dst.buf.get(),dst.num_bytes);
                // encode buffer length
				ros::serialization::serialize(stream,(uint32_t)bufSize);
                // encode payload
			    dst.message_start = stream.getData();
                ros::serialization::serialize(stream,tempSrc.payload());
                break;
            } 
            case SensorLevels::ID:
            {
                Message<SensorLevels > & tempSrc = static_cast<Message<SensorLevels>&>(src);
                unsigned int bufSize = ros::serialization::serializationLength(tempSrc.payload());

			    if (bufSize >= dst.buffer_max_size)
				{
                     retval = rframe::Error::BUFFER_OVERRUN;
					 LOG_CRIT("ROS::toTransport: driver_base_gencpp::SensorLevels buffer overrun " << bufSize << " vs " << dst.buffer_max_size);
				}

                // deprecated, now uses pre allocated buffers
                dst.num_bytes = bufSize+sizeof(uint32_t);

                // create stream to hold serialized data + its length
                ros::serialization::OStream stream(dst.buf.get(),dst.num_bytes);
                // encode buffer length
				ros::serialization::serialize(stream,(uint32_t)bufSize);
                // encode payload
			    dst.message_start = stream.getData();
                ros::serialization::serialize(stream,tempSrc.payload());
                break;
            } 
            default:
            {
                retval = rframe::Error::PARAM;
                break;
            }
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::fromTransport(ros::SerializedMessage & src, MessageBase & dst)
{
    int retval = rframe::Error::SUCCESS;

    if ((unsigned int)src.message_type != dst.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (src.message_type)
        { 
            case ConfigString::ID:
            {
                Message<ConfigString > & tempDst = static_cast<Message<ConfigString>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case ConfigValue::ID:
            {
                Message<ConfigValue > & tempDst = static_cast<Message<ConfigValue>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            case SensorLevels::ID:
            {
                Message<SensorLevels > & tempDst = static_cast<Message<SensorLevels>&>(dst);

                ros::serialization::IStream stream(src.buf.get()+sizeof(int32_t),src.num_bytes-sizeof(int32_t));
                ros::serialization::deserialize(stream,tempDst.payload());

                break;
            } 
            default:
            {
                retval = rframe::Error::PARAM;
            }
        }
    }

    return retval;
}

int driver_base_gencppROSMessageFactory::updateHeader(rframe::MessageBase &msg, unsigned int seqNo)
{
    int retval = rframe::Error::SUCCESS;

    switch (msg.id())
    {   
        // ConfigString does not have a Header as its first member 
        // ConfigValue does not have a Header as its first member 
        default:
        {
            retval = rframe::Error::NOT_FOUND;
            break;
        }
    }

    return retval;
}
