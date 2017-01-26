// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:57 -0500
//  From Template/Script: data_templates/NMLClassTemplate.cpp
 
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
// main rcslib header
#include <nml.hh>
// cms updater header
#include <cms_up.hh>
#include <cms_pup.hh>

#include <common/Error.h>
#include <common/Log.h>
#include <common/Common.h>
#include <common/DataTypeInfo.h>

#include "polled_camera_gencpp_NML.h"
#include "polled_camera_gencpp_Library.h"
#include <messaging/nml/NMLSupport.h>
#include <interfaces/MessageFactoryInterface.h>

#include <GetPolledImageRequest.h>
#include <GetPolledImageResponse.h>
#include <GetPolledImage.h>

#include <boost/iostreams/stream_buffer.hpp>
#include <boost/iostreams/stream.hpp>

#include <boost/serialization/serialization.hpp>
#include <opensource/eos/archive/portable_iarchive.hpp>
#include <opensource/eos/archive/portable_oarchive.hpp>

using namespace std;
using namespace polled_camera;

rframe::NMLMessageFactory * NML_polled_camera_gencppfactory = NULL;

extern "C"
{
    /** library access method */
    rframe::MessageFactoryBase * AllocateMessageFactory()
    {
        NML_polled_camera_gencppfactory = new polled_camera_gencppNMLMessageFactory();
        return NML_polled_camera_gencppfactory;
    };
}

rframe::NMLMessageFactory * polled_camera::allocate_polled_camera_gencpp()
{
    NML_polled_camera_gencppfactory = new polled_camera_gencppNMLMessageFactory();
    return NML_polled_camera_gencppfactory;
};

polled_camera_gencppNMLMessageFactory::polled_camera_gencppNMLMessageFactory()
{
    name("polled_camera_gencpp");
    // use constructor to register data types
    polled_camera::registerLibrary();
}

polled_camera_gencppNMLMessageFactory::~polled_camera_gencppNMLMessageFactory()
{
}

NML_FORMAT_PTR polled_camera_gencppNMLMessageFactory::FormatPointer()
{
    return polled_camera_gencpp_format;
}

int polled_camera_gencppNMLMessageFactory::dataType(NMLmsg & msg)
{
    return msg.type;
}

void polled_camera_gencppNMLMessageFactory::dataTypes(vector<DataTypeInfo> & ids)
{
    DataTypeInfo info;

    ids.clear();

    info.id(GetPolledImageRequest::ID);
    info.name(GetPolledImageRequest::DATA_TYPE_FULL_NAME);
    info.hashKey(GetPolledImageRequest::DATA_VERSION);
    info.md5Key(GetPolledImageRequest::VERSION_MD5);
    info.xmlSource(GetPolledImageRequest::XML_SOURCE);
    info.flat(GetPolledImageRequest::dataTypeFlat());
    ids.push_back(info);

    info.id(GetPolledImageResponse::ID);
    info.name(GetPolledImageResponse::DATA_TYPE_FULL_NAME);
    info.hashKey(GetPolledImageResponse::DATA_VERSION);
    info.md5Key(GetPolledImageResponse::VERSION_MD5);
    info.xmlSource(GetPolledImageResponse::XML_SOURCE);
    info.flat(GetPolledImageResponse::dataTypeFlat());
    ids.push_back(info);

    info.id(GetPolledImage::ID);
    info.name(GetPolledImage::DATA_TYPE_FULL_NAME);
    info.hashKey(GetPolledImage::DATA_VERSION);
    info.md5Key(GetPolledImage::VERSION_MD5);
    info.xmlSource(GetPolledImage::XML_SOURCE);
    info.flat(GetPolledImage::dataTypeFlat());
    ids.push_back(info);

}

int polled_camera_gencppNMLMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<NMLmsg> & msg)
{
    int retval = rframe::Error::SUCCESS;
    bool found = true;

    switch (id)
    { 
        case GetPolledImageRequest::ID:
        {
            //GetPolledImageRequestNML * newmsg = new GetPolledImageRequestNML();
            // allocate new data member, with link to appropriate destroy callback
            // what bind does is create a callback into this specific instance for the deallcoateTransport
            // member.
            std::shared_ptr<NMLmsg> newmsg(new GetPolledImageRequestNML(),std::bind(&polled_camera_gencppNMLMessageFactory::deallocateTransport,this,std::placeholders::_1));

            if (newmsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(newmsg);
                    /*                    *msg = static_cast<NMLmsg*>(newmsg);

                    if (*msg == NULL)
                    {
                        delete newmsg;
                        retval = rframe::Error::CAST;
                    }
                    */

            }
            break;
        } 
        case GetPolledImageResponse::ID:
        {
            //GetPolledImageResponseNML * newmsg = new GetPolledImageResponseNML();
            // allocate new data member, with link to appropriate destroy callback
            // what bind does is create a callback into this specific instance for the deallcoateTransport
            // member.
            std::shared_ptr<NMLmsg> newmsg(new GetPolledImageResponseNML(),std::bind(&polled_camera_gencppNMLMessageFactory::deallocateTransport,this,std::placeholders::_1));

            if (newmsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(newmsg);
                    /*                    *msg = static_cast<NMLmsg*>(newmsg);

                    if (*msg == NULL)
                    {
                        delete newmsg;
                        retval = rframe::Error::CAST;
                    }
                    */

            }
            break;
        } 
        case GetPolledImage::ID:
        {
            //GetPolledImageNML * newmsg = new GetPolledImageNML();
            // allocate new data member, with link to appropriate destroy callback
            // what bind does is create a callback into this specific instance for the deallcoateTransport
            // member.
            std::shared_ptr<NMLmsg> newmsg(new GetPolledImageNML(),std::bind(&polled_camera_gencppNMLMessageFactory::deallocateTransport,this,std::placeholders::_1));

            if (newmsg.get() == NULL)
            {
                retval = rframe::Error::MEMORY_ALLOC;
            }
            else
            {
                msg.swap(newmsg);
                    /*                    *msg = static_cast<NMLmsg*>(newmsg);

                    if (*msg == NULL)
                    {
                        delete newmsg;
                        retval = rframe::Error::CAST;
                    }
                    */

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

int polled_camera_gencppNMLMessageFactory::allocate(rframe::ID_TYPE id, std::shared_ptr<MessageBase> & msg)
{
    int retval = rframe::Error::SUCCESS;
    bool found = true;

    switch (id)
    { 
        case GetPolledImageRequest::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<GetPolledImageRequest>(),std::bind(&polled_camera_gencppNMLMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
        case GetPolledImageResponse::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<GetPolledImageResponse>(),std::bind(&polled_camera_gencppNMLMessageFactory::deallocateMessage,this,std::placeholders::_1));

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
        case GetPolledImage::ID:
        {
            std::shared_ptr<MessageBase> tempMsg(new Message<GetPolledImage>(),std::bind(&polled_camera_gencppNMLMessageFactory::deallocateMessage,this,std::placeholders::_1));

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

int polled_camera_gencppNMLMessageFactory::deallocateMessage(MessageBase * msg)
{
    int retval = Error::SUCCESS;

    delete msg;

    return retval;
}

int polled_camera_gencppNMLMessageFactory::deallocateTransport(NMLmsg * msg)
{
    int retval = Error::SUCCESS;

    if (msg != NULL)
    {
        switch (msg->type)
        { 
            case GetPolledImageRequest::ID:
            {
                GetPolledImageRequestNML * tempmsg = static_cast<GetPolledImageRequestNML*>(msg);

                if (tempmsg != NULL)
                {
                    delete tempmsg;
                }
                break;
            } 
            case GetPolledImageResponse::ID:
            {
                GetPolledImageResponseNML * tempmsg = static_cast<GetPolledImageResponseNML*>(msg);

                if (tempmsg != NULL)
                {
                    delete tempmsg;
                }
                break;
            } 
            case GetPolledImage::ID:
            {
                GetPolledImageNML * tempmsg = static_cast<GetPolledImageNML*>(msg);

                if (tempmsg != NULL)
                {
                    delete tempmsg;
                }
                break;
            } 
            default:
            {
                retval = Error::NOT_FOUND;
                break;
            }
        }
    }

    return retval;
}

int polled_camera_gencppNMLMessageFactory::toTransport(MessageBase & src, NMLmsg & dst)
{
    int retval = rframe::Error::SUCCESS;

    if ((unsigned int)dst.type != src.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (dst.type)
        { 
            case GetPolledImageRequest::ID:
            {
                GetPolledImageRequestNML & tempDst = static_cast<GetPolledImageRequestNML&>(dst);
                Message<GetPolledImageRequest > & tempSrc = static_cast<Message<GetPolledImageRequest>&>(src);

                if (tempSrc.version() != GetPolledImageRequest::DATA_VERSION)
                {
                    LOG_CRIT(__FUNCTION__ << " version mismatch on write of GetPolledImageRequest: " << __FILE__ << " expected: " 
                             << GetPolledImageRequest::DATA_VERSION << " got: " << tempSrc.version());
                    cout << __FUNCTION__ << " version mismatch on write of GetPolledImageRequest: " << __FILE__ << " expected: " 
                         << GetPolledImageRequest::DATA_VERSION << " got: " << tempSrc.version() << endl;
                    retval = rframe::Error::MSG_VERSION;
                }
                else
                {

                    // set version
                    tempDst.nmlVersion = tempSrc.version();
                    // set timestamp
                    tempDst.nmlTimestamp = tempSrc.timestamp();
                    // set module id
                    tempDst.nmlModuleId = tempSrc.moduleId();

                    tempDst.nmlPayload = tempSrc.payload();   
                }
                break;
            } 
            case GetPolledImageResponse::ID:
            {
                GetPolledImageResponseNML & tempDst = static_cast<GetPolledImageResponseNML&>(dst);
                Message<GetPolledImageResponse > & tempSrc = static_cast<Message<GetPolledImageResponse>&>(src);

                if (tempSrc.version() != GetPolledImageResponse::DATA_VERSION)
                {
                    LOG_CRIT(__FUNCTION__ << " version mismatch on write of GetPolledImageResponse: " << __FILE__ << " expected: " 
                             << GetPolledImageResponse::DATA_VERSION << " got: " << tempSrc.version());
                    cout << __FUNCTION__ << " version mismatch on write of GetPolledImageResponse: " << __FILE__ << " expected: " 
                         << GetPolledImageResponse::DATA_VERSION << " got: " << tempSrc.version() << endl;
                    retval = rframe::Error::MSG_VERSION;
                }
                else
                {

                    // set version
                    tempDst.nmlVersion = tempSrc.version();
                    // set timestamp
                    tempDst.nmlTimestamp = tempSrc.timestamp();
                    // set module id
                    tempDst.nmlModuleId = tempSrc.moduleId();

                    tempDst.nmlPayload = tempSrc.payload();   
                }
                break;
            } 
            case GetPolledImage::ID:
            {
                GetPolledImageNML & tempDst = static_cast<GetPolledImageNML&>(dst);
                Message<GetPolledImage > & tempSrc = static_cast<Message<GetPolledImage>&>(src);

                if (tempSrc.version() != GetPolledImage::DATA_VERSION)
                {
                    LOG_CRIT(__FUNCTION__ << " version mismatch on write of GetPolledImage: " << __FILE__ << " expected: " 
                             << GetPolledImage::DATA_VERSION << " got: " << tempSrc.version());
                    cout << __FUNCTION__ << " version mismatch on write of GetPolledImage: " << __FILE__ << " expected: " 
                         << GetPolledImage::DATA_VERSION << " got: " << tempSrc.version() << endl;
                    retval = rframe::Error::MSG_VERSION;
                }
                else
                {

                    // set version
                    tempDst.nmlVersion = tempSrc.version();
                    // set timestamp
                    tempDst.nmlTimestamp = tempSrc.timestamp();
                    // set module id
                    tempDst.nmlModuleId = tempSrc.moduleId();

                    tempDst.nmlPayload = tempSrc.payload();   
                }
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

int polled_camera_gencppNMLMessageFactory::fromTransport(NMLmsg & src, MessageBase & dst)
{
    int retval = rframe::Error::SUCCESS;

    if ((unsigned int)src.type != dst.id())
    {
        retval = rframe::Error::PARAM;
    }
    else
    {
        switch (src.type)
        { 
            case GetPolledImageRequest::ID:
            {
                GetPolledImageRequestNML & tempSrc = static_cast<GetPolledImageRequestNML&>(src);
                Message<GetPolledImageRequest > & tempDst = static_cast<Message<GetPolledImageRequest>&>(dst);

                // check data version BEFORE tryinng to unpack
                if (GetPolledImageRequest::DATA_VERSION != tempSrc.nmlVersion)
                {
                    retval = rframe::Error::MSG_VERSION;
                    break; // skip unpacking of payload
                }

                tempDst.moduleId(tempSrc.nmlModuleId);
                tempDst.timestamp(tempSrc.nmlTimestamp);

                tempDst.payload(tempSrc.nmlPayload);
                break;
            } 
            case GetPolledImageResponse::ID:
            {
                GetPolledImageResponseNML & tempSrc = static_cast<GetPolledImageResponseNML&>(src);
                Message<GetPolledImageResponse > & tempDst = static_cast<Message<GetPolledImageResponse>&>(dst);

                // check data version BEFORE tryinng to unpack
                if (GetPolledImageResponse::DATA_VERSION != tempSrc.nmlVersion)
                {
                    retval = rframe::Error::MSG_VERSION;
                    break; // skip unpacking of payload
                }

                tempDst.moduleId(tempSrc.nmlModuleId);
                tempDst.timestamp(tempSrc.nmlTimestamp);

                tempDst.payload(tempSrc.nmlPayload);
                break;
            } 
            case GetPolledImage::ID:
            {
                GetPolledImageNML & tempSrc = static_cast<GetPolledImageNML&>(src);
                Message<GetPolledImage > & tempDst = static_cast<Message<GetPolledImage>&>(dst);

                // check data version BEFORE tryinng to unpack
                if (GetPolledImage::DATA_VERSION != tempSrc.nmlVersion)
                {
                    retval = rframe::Error::MSG_VERSION;
                    break; // skip unpacking of payload
                }

                tempDst.moduleId(tempSrc.nmlModuleId);
                tempDst.timestamp(tempSrc.nmlTimestamp);

                tempDst.payload(tempSrc.nmlPayload);
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

int polled_camera_gencppNMLMessageFactory::constructBuffer(rframe::ID_TYPE id, void * buffer)
{
    int retval = Error::SUCCESS;

    switch (id)
    { 
        case GetPolledImageRequest::ID:
        {
            // only need to construct if data type is not flat
            if (GetPolledImageRequest::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("constructing GetPolledImageRequest at %p\n",buffer);
                GetPolledImageRequestNML * p = static_cast<GetPolledImageRequestNML*>(buffer);
                // construct the type at pointer p
                new (p) GetPolledImageRequestNML();
            }
            else
            {
                FLOG_DEBUG3("skipping constructing GetPolledImageRequest at %p,, is flat\n",buffer);
            }
            break;
        } 
        case GetPolledImageResponse::ID:
        {
            // only need to construct if data type is not flat
            if (GetPolledImageResponse::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("constructing GetPolledImageResponse at %p\n",buffer);
                GetPolledImageResponseNML * p = static_cast<GetPolledImageResponseNML*>(buffer);
                // construct the type at pointer p
                new (p) GetPolledImageResponseNML();
            }
            else
            {
                FLOG_DEBUG3("skipping constructing GetPolledImageResponse at %p,, is flat\n",buffer);
            }
            break;
        } 
        case GetPolledImage::ID:
        {
            // only need to construct if data type is not flat
            if (GetPolledImage::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("constructing GetPolledImage at %p\n",buffer);
                GetPolledImageNML * p = static_cast<GetPolledImageNML*>(buffer);
                // construct the type at pointer p
                new (p) GetPolledImageNML();
            }
            else
            {
                FLOG_DEBUG3("skipping constructing GetPolledImage at %p,, is flat\n",buffer);
            }
            break;
        } 
        default:
        {
            retval = Error::NOT_FOUND;
        }
    }

    return retval;
}

int polled_camera_gencppNMLMessageFactory::destructBuffer(rframe::ID_TYPE id, void * buffer)
{
    int retval = Error::SUCCESS;

    if (buffer == nullptr) return retval;

    switch (id)
    { 
        case GetPolledImageRequest::ID:
        {
            // only need to destruct if data type is not flat
            if (GetPolledImageRequest::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("destructing GetPolledImageRequest at %p\n",buffer);
                GetPolledImageRequestNML * p = static_cast<GetPolledImageRequestNML*>(buffer);
                p->~GetPolledImageRequestNML();
            }
            else
            {
                FLOG_DEBUG3("skipping destruction GetPolledImageRequest at %p, is flat\n",buffer);
            }
            break;
        } 
        case GetPolledImageResponse::ID:
        {
            // only need to destruct if data type is not flat
            if (GetPolledImageResponse::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("destructing GetPolledImageResponse at %p\n",buffer);
                GetPolledImageResponseNML * p = static_cast<GetPolledImageResponseNML*>(buffer);
                p->~GetPolledImageResponseNML();
            }
            else
            {
                FLOG_DEBUG3("skipping destruction GetPolledImageResponse at %p, is flat\n",buffer);
            }
            break;
        } 
        case GetPolledImage::ID:
        {
            // only need to destruct if data type is not flat
            if (GetPolledImage::dataTypeFlat() == false)
            {
                FLOG_DEBUG3("destructing GetPolledImage at %p\n",buffer);
                GetPolledImageNML * p = static_cast<GetPolledImageNML*>(buffer);
                p->~GetPolledImageNML();
            }
            else
            {
                FLOG_DEBUG3("skipping destruction GetPolledImage at %p, is flat\n",buffer);
            }
            break;
        } 
        default:
        {
            retval = Error::NOT_FOUND;
        }
    }

    return retval;
}

void polled_camera::nmlupdate(CMS * cms, GetPolledImageRequest & inobj)
{
    if (cms != NULL)
    {
        //        rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"nmlupdate GetPolledImageRequest, old style, cms mode is %d, neutral is %d",cms->mode,cms->neutral_encoding_method);

        nmlupdate(cms,inobj.response_namespace);
        nmlupdate(cms,inobj.timeout);
        cms->update(inobj.binning_x);
        cms->update(inobj.binning_y);
        nmlupdate(cms,inobj.roi);

    }  
 }

GetPolledImageRequestNML::GetPolledImageRequestNML() : NMLmsg((NMLTYPE)GetPolledImageRequest::ID,sizeof(GetPolledImageRequestNML)), nmlVersion(GetPolledImageRequest::DATA_VERSION), nmlTimestamp(rframe::timestamp()), nmlModuleId(0), nmlPayload(/*new GetPolledImageRequest()*/)
{
};

GetPolledImageRequestNML::~GetPolledImageRequestNML()
{
};

GetPolledImageRequestNML & GetPolledImageRequestNML::operator=(const GetPolledImageRequestNML & inobj)
{
    if (this != &inobj)
    {
        type = inobj.type;
        size = inobj.size;
        nmlPayload = inobj.nmlPayload;

        nmlVersion = inobj.nmlVersion;
        nmlTimestamp = inobj.nmlTimestamp;
        nmlModuleId = inobj.nmlModuleId;

    }

    return *this;
}

GetPolledImageRequestNML & GetPolledImageRequestNML::operator=(const GetPolledImageRequest & inobj)
{
    if (&nmlPayload != &inobj)
    {
        nmlPayload = inobj;

        type = (NMLTYPE)(inobj.ID);
        size = sizeof(GetPolledImageRequest);

        nmlVersion = inobj.DATA_VERSION;
        // nmlTimestamp & module id  set in constructor

    }

    return *this;
}

void GetPolledImageRequestNML::update(CMS * cms)
{
#if 1  
    cms->update(nmlVersion);
    cms->update(nmlTimestamp);
    cms->update(nmlModuleId);
    nmlupdate(cms,static_cast<GetPolledImageRequest&>(nmlPayload));
#else   // use of boost serialization is deprecated

      cout << "ERROR ERROR ERRROR: GetPolledImageRequestNML Using deprecated boost serialization within nml update!" << endl;

#if 0
      left in in case we go back to a shared_ptr<T> for nml payload, need to allocate here if necessary.
      // check to make sure we have a place for the data
      if (nmlPayload.get() == NULL)
      {
          std::shared_ptr<GetPolledImageRequest> temp(new GetPolledImageRequest());
          nmlPayload.swap(temp);
      }
#endif

      //    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"ERROR: polled_camera_gencpp: nml::update called for message %d, which should use boost serialization",(int)type);

    NMLUpdaterHelper updater(cms);

    int count = 0;
    // on encode this next line reserves space, on decode it extracts the data size
    updater.storeDataStart();
    cms->update(count);
    char * buf = updater.encodedData();
    unsigned int len = updater.spaceLeft();

    if (cms->mode == CMS_ENCODE)
    {

        boost::iostreams::basic_array_sink<char> helperSink(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_sink<char> > source(helperSink);

        // boost serialize
        {
            //boost::archive::binary_oarchive oa(source,boost::archive::no_header);
            eos::portable_oarchive oa(source); // portable archives require header, but its only a byte.
            oa << nmlVersion << nmlTimestamp << nmlModuleId << nmlPayload;
        }

        int wroteSize = boost::iostreams::seek(source,0,std::ios_base::cur);

        updater.updateEncoded(wroteSize);

        updater.storeCount(wroteSize);
    }
    else
    {
        boost::iostreams::basic_array_source<char> device(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_source<char> > source(device);

        // boost serialize
        {
            //boost::archive::binary_iarchive ia(source,boost::archive::no_header);
            eos::portable_iarchive ia(source);
            ia >> nmlVersion;

            if (GetPolledImageRequest::DATA_VERSION != nmlVersion)
            {
                LOG_CRIT(__FUNCTION__ << "ERROR: GetPolledImageRequest Message version mismatch, expected " << GetPolledImageRequest::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranted!");
                cout << __FUNCTION__ << "ERROR: GetPolledImageRequest Message version mismatch, expected " << GetPolledImageRequest::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranteed!" << endl;

            }
            else
            {
                ia >> nmlTimestamp >> nmlModuleId >> nmlPayload;
            }
        }    

    }

#endif
}

void polled_camera::nmlupdate(CMS * cms, GetPolledImageResponse & inobj)
{
    if (cms != NULL)
    {
        //        rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"nmlupdate GetPolledImageResponse, old style, cms mode is %d, neutral is %d",cms->mode,cms->neutral_encoding_method);

        cms->update(inobj.success);
        nmlupdate(cms,inobj.status_message);
        nmlupdate(cms,inobj.stamp);

    }  
 }

GetPolledImageResponseNML::GetPolledImageResponseNML() : NMLmsg((NMLTYPE)GetPolledImageResponse::ID,sizeof(GetPolledImageResponseNML)), nmlVersion(GetPolledImageResponse::DATA_VERSION), nmlTimestamp(rframe::timestamp()), nmlModuleId(0), nmlPayload(/*new GetPolledImageResponse()*/)
{
};

GetPolledImageResponseNML::~GetPolledImageResponseNML()
{
};

GetPolledImageResponseNML & GetPolledImageResponseNML::operator=(const GetPolledImageResponseNML & inobj)
{
    if (this != &inobj)
    {
        type = inobj.type;
        size = inobj.size;
        nmlPayload = inobj.nmlPayload;

        nmlVersion = inobj.nmlVersion;
        nmlTimestamp = inobj.nmlTimestamp;
        nmlModuleId = inobj.nmlModuleId;

    }

    return *this;
}

GetPolledImageResponseNML & GetPolledImageResponseNML::operator=(const GetPolledImageResponse & inobj)
{
    if (&nmlPayload != &inobj)
    {
        nmlPayload = inobj;

        type = (NMLTYPE)(inobj.ID);
        size = sizeof(GetPolledImageResponse);

        nmlVersion = inobj.DATA_VERSION;
        // nmlTimestamp & module id  set in constructor

    }

    return *this;
}

void GetPolledImageResponseNML::update(CMS * cms)
{
#if 1  
    cms->update(nmlVersion);
    cms->update(nmlTimestamp);
    cms->update(nmlModuleId);
    nmlupdate(cms,static_cast<GetPolledImageResponse&>(nmlPayload));
#else   // use of boost serialization is deprecated

      cout << "ERROR ERROR ERRROR: GetPolledImageResponseNML Using deprecated boost serialization within nml update!" << endl;

#if 0
      left in in case we go back to a shared_ptr<T> for nml payload, need to allocate here if necessary.
      // check to make sure we have a place for the data
      if (nmlPayload.get() == NULL)
      {
          std::shared_ptr<GetPolledImageResponse> temp(new GetPolledImageResponse());
          nmlPayload.swap(temp);
      }
#endif

      //    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"ERROR: polled_camera_gencpp: nml::update called for message %d, which should use boost serialization",(int)type);

    NMLUpdaterHelper updater(cms);

    int count = 0;
    // on encode this next line reserves space, on decode it extracts the data size
    updater.storeDataStart();
    cms->update(count);
    char * buf = updater.encodedData();
    unsigned int len = updater.spaceLeft();

    if (cms->mode == CMS_ENCODE)
    {

        boost::iostreams::basic_array_sink<char> helperSink(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_sink<char> > source(helperSink);

        // boost serialize
        {
            //boost::archive::binary_oarchive oa(source,boost::archive::no_header);
            eos::portable_oarchive oa(source); // portable archives require header, but its only a byte.
            oa << nmlVersion << nmlTimestamp << nmlModuleId << nmlPayload;
        }

        int wroteSize = boost::iostreams::seek(source,0,std::ios_base::cur);

        updater.updateEncoded(wroteSize);

        updater.storeCount(wroteSize);
    }
    else
    {
        boost::iostreams::basic_array_source<char> device(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_source<char> > source(device);

        // boost serialize
        {
            //boost::archive::binary_iarchive ia(source,boost::archive::no_header);
            eos::portable_iarchive ia(source);
            ia >> nmlVersion;

            if (GetPolledImageResponse::DATA_VERSION != nmlVersion)
            {
                LOG_CRIT(__FUNCTION__ << "ERROR: GetPolledImageResponse Message version mismatch, expected " << GetPolledImageResponse::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranted!");
                cout << __FUNCTION__ << "ERROR: GetPolledImageResponse Message version mismatch, expected " << GetPolledImageResponse::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranteed!" << endl;

            }
            else
            {
                ia >> nmlTimestamp >> nmlModuleId >> nmlPayload;
            }
        }    

    }

#endif
}

void polled_camera::nmlupdate(CMS * cms, GetPolledImage & inobj)
{
    if (cms != NULL)
    {
        //        rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"nmlupdate GetPolledImage, old style, cms mode is %d, neutral is %d",cms->mode,cms->neutral_encoding_method);

        nmlupdate(cms,inobj.request);
        nmlupdate(cms,inobj.response);

    }  
 }

GetPolledImageNML::GetPolledImageNML() : NMLmsg((NMLTYPE)GetPolledImage::ID,sizeof(GetPolledImageNML)), nmlVersion(GetPolledImage::DATA_VERSION), nmlTimestamp(rframe::timestamp()), nmlModuleId(0), nmlPayload(/*new GetPolledImage()*/)
{
};

GetPolledImageNML::~GetPolledImageNML()
{
};

GetPolledImageNML & GetPolledImageNML::operator=(const GetPolledImageNML & inobj)
{
    if (this != &inobj)
    {
        type = inobj.type;
        size = inobj.size;
        nmlPayload = inobj.nmlPayload;

        nmlVersion = inobj.nmlVersion;
        nmlTimestamp = inobj.nmlTimestamp;
        nmlModuleId = inobj.nmlModuleId;

    }

    return *this;
}

GetPolledImageNML & GetPolledImageNML::operator=(const GetPolledImage & inobj)
{
    if (&nmlPayload != &inobj)
    {
        nmlPayload = inobj;

        type = (NMLTYPE)(inobj.ID);
        size = sizeof(GetPolledImage);

        nmlVersion = inobj.DATA_VERSION;
        // nmlTimestamp & module id  set in constructor

    }

    return *this;
}

void GetPolledImageNML::update(CMS * cms)
{
#if 1  
    cms->update(nmlVersion);
    cms->update(nmlTimestamp);
    cms->update(nmlModuleId);
    nmlupdate(cms,static_cast<GetPolledImage&>(nmlPayload));
#else   // use of boost serialization is deprecated

      cout << "ERROR ERROR ERRROR: GetPolledImageNML Using deprecated boost serialization within nml update!" << endl;

#if 0
      left in in case we go back to a shared_ptr<T> for nml payload, need to allocate here if necessary.
      // check to make sure we have a place for the data
      if (nmlPayload.get() == NULL)
      {
          std::shared_ptr<GetPolledImage> temp(new GetPolledImage());
          nmlPayload.swap(temp);
      }
#endif

      //    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,DBG,"ERROR: polled_camera_gencpp: nml::update called for message %d, which should use boost serialization",(int)type);

    NMLUpdaterHelper updater(cms);

    int count = 0;
    // on encode this next line reserves space, on decode it extracts the data size
    updater.storeDataStart();
    cms->update(count);
    char * buf = updater.encodedData();
    unsigned int len = updater.spaceLeft();

    if (cms->mode == CMS_ENCODE)
    {

        boost::iostreams::basic_array_sink<char> helperSink(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_sink<char> > source(helperSink);

        // boost serialize
        {
            //boost::archive::binary_oarchive oa(source,boost::archive::no_header);
            eos::portable_oarchive oa(source); // portable archives require header, but its only a byte.
            oa << nmlVersion << nmlTimestamp << nmlModuleId << nmlPayload;
        }

        int wroteSize = boost::iostreams::seek(source,0,std::ios_base::cur);

        updater.updateEncoded(wroteSize);

        updater.storeCount(wroteSize);
    }
    else
    {
        boost::iostreams::basic_array_source<char> device(buf,len);
        boost::iostreams::stream<boost::iostreams::basic_array_source<char> > source(device);

        // boost serialize
        {
            //boost::archive::binary_iarchive ia(source,boost::archive::no_header);
            eos::portable_iarchive ia(source);
            ia >> nmlVersion;

            if (GetPolledImage::DATA_VERSION != nmlVersion)
            {
                LOG_CRIT(__FUNCTION__ << "ERROR: GetPolledImage Message version mismatch, expected " << GetPolledImage::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranted!");
                cout << __FUNCTION__ << "ERROR: GetPolledImage Message version mismatch, expected " << GetPolledImage::DATA_VERSION << " but got " << nmlVersion << " stopping read, buffer state is not guaranteed!" << endl;

            }
            else
            {
                ia >> nmlTimestamp >> nmlModuleId >> nmlPayload;
            }
        }    

    }

#endif
}

int polled_camera::polled_camera_gencpp_format(NMLTYPE type, void * buffer, CMS* cms)
{
    int retval = 1;
    int retval2 = rframe::Error::SUCCESS;

          //printf("polled_camera_gencpp_format: buffer parameters: type: %d, %p, encode: %d\n",(int)type, buffer,cms->mode);

    switch (type)
    { 
        case 0:
        {
            // do nothing, 0 is passed in on buffer creation
            break;
        }
        case GetPolledImageRequest::ID:
        {
            int oldPointerCheckDisabled = cms->pointer_check_disabled;
            cms->pointer_check_disabled = 1;

            //  cout << "message is for GetPolledImageRequest, id " << GetPolledImageRequest::ID << endl;

            if (cms->mode == CMS_DECODE)
            {

                retval2 = NML_polled_camera_gencppfactory->constructBuffer(type,buffer);
                if (retval2 != rframe::Error::SUCCESS)
                {
                    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,CRIT,"polled_camera_gencpp_format: failed construction: id: %d, error: %d",(int)type,retval2);
                }
            }
            else
            {

            }

            ((GetPolledImageRequestNML*)buffer)->update(cms);

            cms->pointer_check_disabled = oldPointerCheckDisabled;

            break;
        } 
        case GetPolledImageResponse::ID:
        {
            int oldPointerCheckDisabled = cms->pointer_check_disabled;
            cms->pointer_check_disabled = 1;

            //  cout << "message is for GetPolledImageResponse, id " << GetPolledImageResponse::ID << endl;

            if (cms->mode == CMS_DECODE)
            {

                retval2 = NML_polled_camera_gencppfactory->constructBuffer(type,buffer);
                if (retval2 != rframe::Error::SUCCESS)
                {
                    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,CRIT,"polled_camera_gencpp_format: failed construction: id: %d, error: %d",(int)type,retval2);
                }
            }
            else
            {

            }

            ((GetPolledImageResponseNML*)buffer)->update(cms);

            cms->pointer_check_disabled = oldPointerCheckDisabled;

            break;
        } 
        case GetPolledImage::ID:
        {
            int oldPointerCheckDisabled = cms->pointer_check_disabled;
            cms->pointer_check_disabled = 1;

            //  cout << "message is for GetPolledImage, id " << GetPolledImage::ID << endl;

            if (cms->mode == CMS_DECODE)
            {

                retval2 = NML_polled_camera_gencppfactory->constructBuffer(type,buffer);
                if (retval2 != rframe::Error::SUCCESS)
                {
                    rframe::Log::instance()->logFormatted(DEFAULT_LOG_MODULE_ID,CRIT,"polled_camera_gencpp_format: failed construction: id: %d, error: %d",(int)type,retval2);
                }
            }
            else
            {

            }

            ((GetPolledImageNML*)buffer)->update(cms);

            cms->pointer_check_disabled = oldPointerCheckDisabled;

            break;
        }                   
        default:
        {

            retval = 0;
            break;
        }
    }

          //   printf("format done\n");
    return retval;
}

