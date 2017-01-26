// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:57 -0500
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

#ifndef _CODEGEN_POLLED_CAMERA_GENCPP_ROS_H_
#define _CODEGEN_POLLED_CAMERA_GENCPP_ROS_H_

#include <opensource/ros/serialization.h>
#include <opensource/ros/message_traits.h>
#include <opensource/ros/message_operations.h>

#include <messaging/ros/ROSMessageFactory.h>
#include <messaging/Message.h>

namespace rframe { class DataTypeInfo; };

#include "polled_camera_gencpp_Library.h"

#include "sensor_msgs/sensor_msgs_gencpp_ROS.h"
#include "std_msgs/std_msgs_gencpp_ROS.h"
#include "std_srvs/std_srvs_gencpp_ROS.h"

namespace polled_camera { 

    /** definition of message factory for polled_camera_gencpp */
    class polled_camera_gencppROSMessageFactory : public ROSMessageFactory
    {
    public:
        /** constructor */
        polled_camera_gencppROSMessageFactory();
        /** destructor */
        virtual ~polled_camera_gencppROSMessageFactory();

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
    ROSMessageFactory * allocate_polled_camera_gencpp();

}; // end namespace polled_camera

// declare ros serialization templates
namespace ros
{
  namespace serialization
  {  

      template <> struct Serializer<polled_camera::GetPolledImageRequest>
      {
          template <typename Stream> inline static void write(Stream & stream, const polled_camera::GetPolledImageRequest & t)
          { 
              stream.next(t.response_namespace); 
              stream.next(t.timeout); 
              stream.next(t.binning_x); 
              stream.next(t.binning_y); 
              stream.next(t.roi); 
          };

          template <typename Stream> inline static void read(Stream & stream, polled_camera::GetPolledImageRequest & t)
          { 
              stream.next(t.response_namespace); 
              stream.next(t.timeout); 
              stream.next(t.binning_x); 
              stream.next(t.binning_y); 
              stream.next(t.roi); 
          };

          inline static uint32_t serializedLength(const polled_camera::GetPolledImageRequest & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.response_namespace); 
              size += serializationLength(t.timeout); 
              size += serializationLength(t.binning_x); 
              size += serializationLength(t.binning_y); 
              size += serializationLength(t.roi); 
              return size;
          };
      }; // end struct Serializer<polled_camera::GetPolledImageRequest>

      template <> struct Serializer<polled_camera::GetPolledImageResponse>
      {
          template <typename Stream> inline static void write(Stream & stream, const polled_camera::GetPolledImageResponse & t)
          { 
              stream.next(t.success); 
              stream.next(t.status_message); 
              stream.next(t.stamp); 
          };

          template <typename Stream> inline static void read(Stream & stream, polled_camera::GetPolledImageResponse & t)
          { 
              stream.next(t.success); 
              stream.next(t.status_message); 
              stream.next(t.stamp); 
          };

          inline static uint32_t serializedLength(const polled_camera::GetPolledImageResponse & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.success); 
              size += serializationLength(t.status_message); 
              size += serializationLength(t.stamp); 
              return size;
          };
      }; // end struct Serializer<polled_camera::GetPolledImageResponse>

      template <> struct Serializer<polled_camera::GetPolledImage>
      {
          template <typename Stream> inline static void write(Stream & stream, const polled_camera::GetPolledImage & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          template <typename Stream> inline static void read(Stream & stream, polled_camera::GetPolledImage & t)
          { 
              stream.next(t.request); 
              stream.next(t.response); 
          };

          inline static uint32_t serializedLength(const polled_camera::GetPolledImage & t)
          { 
              uint32_t size = 0;

              size += serializationLength(t.request); 
              size += serializationLength(t.response); 
              return size;
          };
      }; // end struct Serializer<polled_camera::GetPolledImage>

  }; // namespace serialization

  namespace message_traits
  {

      template <> struct MD5Sum<polled_camera::GetPolledImageRequest>
      {

          static const char * value() 
          { 
              return "c77ed43e530fd48e9e7a2a93845e154c"; 
          };

          static const uint64_t static_value1 = 0xc77ed43e530fd48eULL;
          static const uint64_t static_value2 = 0x9e7a2a93845e154cULL;
      }; // end struct MD5Sum<polled_camera::GetPolledImageRequest>

      template <> struct DataType<polled_camera::GetPolledImageRequest>
      {
          static const char * value() { return "polled_camera/GetPolledImageRequest";};
      }; // end DataType

      template <> struct Definition<polled_camera::GetPolledImageRequest>
      {
          static const char * value()
          { 
              return polled_camera::GetPolledImageRequest::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<polled_camera::GetPolledImageResponse>
      {

          static const char * value() 
          { 
              return "dbf1f851bc511800e6129ccd5a3542ab"; 
          };

          static const uint64_t static_value1 = 0xdbf1f851bc511800ULL;
          static const uint64_t static_value2 = 0xe6129ccd5a3542abULL;
      }; // end struct MD5Sum<polled_camera::GetPolledImageResponse>

      template <> struct DataType<polled_camera::GetPolledImageResponse>
      {
          static const char * value() { return "polled_camera/GetPolledImageResponse";};
      }; // end DataType

      template <> struct Definition<polled_camera::GetPolledImageResponse>
      {
          static const char * value()
          { 
              return polled_camera::GetPolledImageResponse::XML_SOURCE.c_str();
          };
      };

      template <> struct MD5Sum<polled_camera::GetPolledImage>
      {

          static const char * value() 
          { 
              return "d41d8cd98f00b204e9800998ecf8427e"; 
          };

          static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
          static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
      }; // end struct MD5Sum<polled_camera::GetPolledImage>

      template <> struct DataType<polled_camera::GetPolledImage>
      {
          static const char * value() { return "polled_camera/GetPolledImage";};
      }; // end DataType

      template <> struct Definition<polled_camera::GetPolledImage>
      {
          static const char * value()
          { 
              return polled_camera::GetPolledImage::XML_SOURCE.c_str();
          };
      };

  }; // end namespace message_traits

}; // namespace ros

#endif // _CODEGEN_POLLED_CAMERA_GENCPP_ROS_H_

