// 
//  AUTOGENERATED FILE:   do not edit
//
//  Generated by:         yongbo on yongbo-XPS-15-9550, 2016-11-23 17:33:57 -0500
//  From Template/Script: data_templates/BSONSerializationTemplate.cpp
 
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

#include <common/BsonIo.h>
#include <common/Time.h>
#include <common/Log.h>

#include <theora_image_transport/Packet.h>

using namespace std;

template <> int rframe::bson_io::encode(rframe::bson_io::BsonObj & b, const theora_image_transport::Packet & inobj, const char * name)
{
    int retval = Error::SUCCESS;

    BsonObj child;
    BsonObj * doc = &b;
    if (name != nullptr)
    {
        bson_append_document_begin(b,name,strlen(name),child);
        doc = &child;
    }

    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.header,"header");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.data,"data");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.b_o_s,"b_o_s");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.e_o_s,"e_o_s");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.granulepos,"granulepos");
    if (retval == Error::SUCCESS) retval = rframe::bson_io::encode(*doc,inobj.packetno,"packetno");

    if (name != nullptr)
    {
        bson_append_document_end(b,child);
    }

    return retval;
}

template <> int rframe::bson_io::decode(theora_image_transport::Packet & t, rframe::bson_io::BsonIterator &it, const char * name, bool lookupFields)
{
    int retval = rframe::Error::SUCCESS;

    if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of Packet, lookup fields: " << lookupFields << endl;

    if (lookupFields == false)
    {
        rframe::bson_io::BsonIterator * tempIt, child;
        tempIt = &it;

        if (name != nullptr)
        {
            if (bson_iter_next(it) == false) return Error::PARAM;
            if (bson_iter_recurse(it,child) == false) return Error::IO;
            tempIt = &child;
        }

        // decode of member header
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member header" << endl;
            retval = rframe::bson_io::decode(t.header,*tempIt,"header",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member data
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member data" << endl;
            retval = rframe::bson_io::decode(t.data,*tempIt,"data",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member b_o_s
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member b_o_s" << endl;
            retval = rframe::bson_io::decode(t.b_o_s,*tempIt,"b_o_s",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member e_o_s
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member e_o_s" << endl;
            retval = rframe::bson_io::decode(t.e_o_s,*tempIt,"e_o_s",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member granulepos
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member granulepos" << endl;
            retval = rframe::bson_io::decode(t.granulepos,*tempIt,"granulepos",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

        // decode of member packetno
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member packetno" << endl;
            retval = rframe::bson_io::decode(t.packetno,*tempIt,"packetno",lookupFields);
            if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
        }    

    } // end lookup fields
    else
    {
        rframe::bson_io::BsonIterator it2, storedIter;
        storedIter = it;

        // decode of member header
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member header" << endl;
            it2 = it["header"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.header,it2,"header",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member data
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member data" << endl;
            it2 = it["data"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.data,it2,"data",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member b_o_s
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member b_o_s" << endl;
            it2 = it["b_o_s"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.b_o_s,it2,"b_o_s",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member e_o_s
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member e_o_s" << endl;
            it2 = it["e_o_s"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.e_o_s,it2,"e_o_s",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member granulepos
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member granulepos" << endl;
            it2 = it["granulepos"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.granulepos,it2,"granulepos",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        // decode of member packetno
        if ((retval == Error::NOT_FOUND) || (retval == Error::SUCCESS))
        {            
            if (rframe::bson_io::bsonDebug == true) cout << "bsoncodegen decode of member packetno" << endl;
            it2 = it["packetno"];
            if (it2.valid() == false) retval = Error::NOT_FOUND;
            else
            {
                retval = rframe::bson_io::decode(t.packetno,it2,"packetno",lookupFields);
                if (rframe::bson_io::bsonDebug == true) cout << "  field retval is " << std::dec << retval << endl;
              if ((retval == rframe::Error::SUCCESS) && (storedIter.iter().off < it2.iter().off))
              {
                  storedIter = it2;
              }

            }
        }

        if ((retval == rframe::Error::SUCCESS) && (it.iter().off < storedIter.iter().off)) it = storedIter;
    }

    return retval;
}

