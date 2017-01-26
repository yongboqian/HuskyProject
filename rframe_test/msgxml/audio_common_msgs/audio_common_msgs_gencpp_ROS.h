// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:55 -0500
//  From Template/Script: data_templates/ROSTemplate.h.rb
 
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

#ifndef _CODEGEN_AUDIO_COMMON_MSGS_GENCPP_ROS_H_
#define _CODEGEN_AUDIO_COMMON_MSGS_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "audio_common_msgs_gencpp_Library.h"

#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace audio_common_msgs { 

    /** definition of message factory for audio_common_msgs_gencpp */
    class audio_common_msgs_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        audio_common_msgs_gencppROSMessageFactory();
        /** destructor */
        virtual ~audio_common_msgs_gencppROSMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(ros::SerializedMessage & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<ros::SerializedMessage> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(ros::SerializedMessage * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, ros::SerializedMessage & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( ros::SerializedMessage & src, MessageBase & dst);

		/** see rframe::ROSMessageFactory */
        virtual int typeName(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int desc(std::string & str, rframe::ID_TYPE id);
		/** see rframe::ROSMessageFactory */
        virtual int md5String(std::string & str, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
        virtual int md5(unsigned long long & highOrder, unsigned long long & lowOrder, rframe::ID_TYPE id);
        /** see rframe::ROSMessageFactory */
		int updateHeader(rframe::MessageBase &msg, unsigned int seqNo);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    ROSMessageFactory * allocate_audio_common_msgs_gencpp();

}; // end namespace audio_common_msgs

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<audio_common_msgs::AudioData>
      {
          template <typename Stream> inline static void write(Stream & stream, const audio_common_msgs::AudioData & t)
          { 
              stream.next(t.data); 
          };

          template <typename Stream> inline static void read(Stream & stream, audio_common_msgs::AudioData & t)
          { 
              stream.next(t.data); 
          };

          inline static uint32_t serializedLength(const audio_common_msgs::AudioData & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.data); 
              return size;
          };
      }; // end struct Serializer<audio_common_msgs::AudioData>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<audio_common_msgs::AudioData>
      {

          static const char * value() 
          { 
              return "f43a8e1b362b75baa741461b46adc7e0"; 
          };

          static const uint64_t static_value1 = 0xf43a8e1b362b75baULL;
          static const uint64_t static_value2 = 0xa741461b46adc7e0ULL;
      }; // end struct MD5Sum<audio_common_msgs::AudioData>

      template <> struct DataType<audio_common_msgs::AudioData>
      {
          static const char * value() { return "audio_common_msgs/AudioData";};
      }; // end DataType

      template <> struct Definition<audio_common_msgs::AudioData>
      {
          static const char * value()
          { 
              return "uint8[] data\n";
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_AUDIO_COMMON_MSGS_GENCPP_ROS_H_

