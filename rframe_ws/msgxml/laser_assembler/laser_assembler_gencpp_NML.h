// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2017-01-26 12:55:19 -0500
//  From Template/Script: data_templates/NMLHeaderTemplate.h
 
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

#ifndef _CODEGEN_LASER_ASSEMBLER_GENCPPNML_H_
#define _CODEGEN_LASER_ASSEMBLER_GENCPPNML_H_

#include <messaging/nml/NMLMessageFactory.h>
//#include <DataTypeInfo.h>
#include <messaging/Message.h>

#include "laser_assembler_gencpp_NMLSupport.h"

namespace rframe { class DataTypeInfo; };

#include "AssembleScansRequest.h"
#include "AssembleScansResponse.h"
#include "AssembleScans.h"
#include "AssembleScans2Request.h"
#include "AssembleScans2Response.h"
#include "AssembleScans2.h"

namespace laser_assembler {

    /** definition of message factory for laser_assembler_gencpp */
    class laser_assembler_gencppNMLMessageFactory : public NMLMessageFactory
    {
    public:
        /** constructor */
        laser_assembler_gencppNMLMessageFactory();
        /** destructor */
        virtual ~laser_assembler_gencppNMLMessageFactory();

        /** see  rframe::MessageFactoryInterface */
        virtual void dataTypes(std::vector<DataTypeInfo> & ids);
        /** see  rframe::MessageFactoryInterface */
        virtual int dataType(NMLmsg & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<NMLmsg> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateTransport(NMLmsg * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int deallocateMessage(MessageBase * msg);
        /** see  rframe::MessageFactoryInterface */
        virtual int toTransport( MessageBase & src, NMLmsg & dst);
        /** see  rframe::MessageFactoryInterface */
        virtual int fromTransport( NMLmsg & src, MessageBase & dst);

        /** \return poitner to nml format function */
        virtual NML_FORMAT_PTR FormatPointer();
        /** run constructor for class of type id in the provided buffer */
        virtual int constructBuffer(rframe::ID_TYPE id, void * buffer);
        /** run destructor for class of type id in the buffer */
        virtual int destructBuffer(rframe::ID_TYPE id, void * buffer);
    };

    /** factory allocation function for use when not dynamically loading the factory library  */
    NMLMessageFactory * allocate_laser_assembler_gencpp();

    /** NML interface for AssembleScansRequest 

    */
    class AssembleScansRequestNML : public NMLmsg
    {
    public:

        /** constructor */
        AssembleScansRequestNML();
        /** destructor */
        ~AssembleScansRequestNML();

        /** assignment operator */
        AssembleScansRequestNML & operator=(const AssembleScansRequestNML &inobj);
        /** assignment operator for base data class */
        AssembleScansRequestNML & operator=(const AssembleScansRequest &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        AssembleScansRequest nmlPayload;

        /** set payload */
        void payload(const AssembleScansRequest &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AssembleScansRequest> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AssembleScansRequest * payload() { return & nmlPayload; };

    //     std::shared_ptr<AssembleScansRequest> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AssembleScansResponse 

    */
    class AssembleScansResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        AssembleScansResponseNML();
        /** destructor */
        ~AssembleScansResponseNML();

        /** assignment operator */
        AssembleScansResponseNML & operator=(const AssembleScansResponseNML &inobj);
        /** assignment operator for base data class */
        AssembleScansResponseNML & operator=(const AssembleScansResponse &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        AssembleScansResponse nmlPayload;

        /** set payload */
        void payload(const AssembleScansResponse &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AssembleScansResponse> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AssembleScansResponse * payload() { return & nmlPayload; };

    //     std::shared_ptr<AssembleScansResponse> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AssembleScans 

    */
    class AssembleScansNML : public NMLmsg
    {
    public:

        /** constructor */
        AssembleScansNML();
        /** destructor */
        ~AssembleScansNML();

        /** assignment operator */
        AssembleScansNML & operator=(const AssembleScansNML &inobj);
        /** assignment operator for base data class */
        AssembleScansNML & operator=(const AssembleScans &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        AssembleScans nmlPayload;

        /** set payload */
        void payload(const AssembleScans &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AssembleScans> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AssembleScans * payload() { return & nmlPayload; };

    //     std::shared_ptr<AssembleScans> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AssembleScans2Request 

    */
    class AssembleScans2RequestNML : public NMLmsg
    {
    public:

        /** constructor */
        AssembleScans2RequestNML();
        /** destructor */
        ~AssembleScans2RequestNML();

        /** assignment operator */
        AssembleScans2RequestNML & operator=(const AssembleScans2RequestNML &inobj);
        /** assignment operator for base data class */
        AssembleScans2RequestNML & operator=(const AssembleScans2Request &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        AssembleScans2Request nmlPayload;

        /** set payload */
        void payload(const AssembleScans2Request &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AssembleScans2Request> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AssembleScans2Request * payload() { return & nmlPayload; };

    //     std::shared_ptr<AssembleScans2Request> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AssembleScans2Response 

    */
    class AssembleScans2ResponseNML : public NMLmsg
    {
    public:

        /** constructor */
        AssembleScans2ResponseNML();
        /** destructor */
        ~AssembleScans2ResponseNML();

        /** assignment operator */
        AssembleScans2ResponseNML & operator=(const AssembleScans2ResponseNML &inobj);
        /** assignment operator for base data class */
        AssembleScans2ResponseNML & operator=(const AssembleScans2Response &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        AssembleScans2Response nmlPayload;

        /** set payload */
        void payload(const AssembleScans2Response &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AssembleScans2Response> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AssembleScans2Response * payload() { return & nmlPayload; };

    //     std::shared_ptr<AssembleScans2Response> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    /** NML interface for AssembleScans2 

    */
    class AssembleScans2NML : public NMLmsg
    {
    public:

        /** constructor */
        AssembleScans2NML();
        /** destructor */
        ~AssembleScans2NML();

        /** assignment operator */
        AssembleScans2NML & operator=(const AssembleScans2NML &inobj);
        /** assignment operator for base data class */
        AssembleScans2NML & operator=(const AssembleScans2 &inobj);

        /** static flag, if true boost serialization should be used to serialize this message */
        static const bool useBoost = true;

        /** nml serialization access */
        void update( CMS*);

        /** message version, used to verify message versions match on read */
        unsigned int nmlVersion;
        /** timestamp of message creation */
        double nmlTimestamp;
        /** id of module which sent the message */
        rframe::ID_TYPE nmlModuleId;

        /** nml payload */
        AssembleScans2 nmlPayload;

        /** set payload */
        void payload(const AssembleScans2 &data) 
        {
            nmlPayload = data;
        };

        /** set payload from shared_ptr */
        void payload(std::shared_ptr<AssembleScans2> & data)
        {
            nmlPayload = *data.get();
        };

        /** \return pointer to nml payload */
        AssembleScans2 * payload() { return & nmlPayload; };

    //     std::shared_ptr<AssembleScans2> nmlPayload; reminder that nmlPayload used to be a pointer
    // but the only way this could work well is if we knew to instantiate it due to dataTypeFlat()
    // which we cannot know until compile/run time...
    };

    // predeclaration of nmlupdate functions (necessary due to namespaces )

    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, laser_assembler::AssembleScansRequest & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, laser_assembler::AssembleScansResponse & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, laser_assembler::AssembleScans & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, laser_assembler::AssembleScans2Request & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, laser_assembler::AssembleScans2Response & inobj);
    /** serialize a message to/from a buffer 
     \param cms buffer data structure to be serailized to/from
     \param inobj object to be serialized*/
    void nmlupdate(CMS *cms, laser_assembler::AssembleScans2 & inobj);

    /** nml format function */
    int laser_assembler_gencpp_format(NMLTYPE type, void * buffer, CMS* cms);

}; // end namespace laser_assembler

#endif // _LASER_ASSEMBLER_GENCPPNML_H_
