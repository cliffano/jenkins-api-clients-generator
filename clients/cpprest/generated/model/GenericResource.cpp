/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GenericResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GenericResource::GenericResource()
{
    m__class = U("");
    m__classIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_Result = U("");
    m_ResultIsSet = false;
    m_StartTime = U("");
    m_StartTimeIsSet = false;
}

GenericResource::~GenericResource()
{
}

void GenericResource::validate()
{
    // TODO: implement validation
}

web::json::value GenericResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val[U("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DurationInMillisIsSet)
    {
        val[U("durationInMillis")] = ModelBase::toJson(m_DurationInMillis);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ResultIsSet)
    {
        val[U("result")] = ModelBase::toJson(m_Result);
    }
    if(m_StartTimeIsSet)
    {
        val[U("startTime")] = ModelBase::toJson(m_StartTime);
    }

    return val;
}

void GenericResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
    }
    if(val.has_field(U("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromJson(val[U("durationInMillis")]));
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("result")))
    {
        setResult(ModelBase::stringFromJson(val[U("result")]));
    }
    if(val.has_field(U("startTime")))
    {
        setStartTime(ModelBase::stringFromJson(val[U("startTime")]));
    }
}

void GenericResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayName"), m_DisplayName));
        
    }
    if(m_DurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("durationInMillis"), m_DurationInMillis));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("result"), m_Result));
        
    }
    if(m_StartTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("startTime"), m_StartTime));
        
    }
}

void GenericResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
    if(multipart->hasContent(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("displayName"))));
    }
    if(multipart->hasContent(U("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(U("durationInMillis"))));
    }
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("result")))
    {
        setResult(ModelBase::stringFromHttpContent(multipart->getContent(U("result"))));
    }
    if(multipart->hasContent(U("startTime")))
    {
        setStartTime(ModelBase::stringFromHttpContent(multipart->getContent(U("startTime"))));
    }
}

utility::string_t GenericResource::getClass() const
{
    return m__class;
}


void GenericResource::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GenericResource::classIsSet() const
{
    return m__classIsSet;
}

void GenericResource::unset_class()
{
    m__classIsSet = false;
}

utility::string_t GenericResource::getDisplayName() const
{
    return m_DisplayName;
}


void GenericResource::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool GenericResource::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void GenericResource::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

int32_t GenericResource::getDurationInMillis() const
{
    return m_DurationInMillis;
}


void GenericResource::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool GenericResource::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}

void GenericResource::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}

utility::string_t GenericResource::getId() const
{
    return m_Id;
}


void GenericResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool GenericResource::idIsSet() const
{
    return m_IdIsSet;
}

void GenericResource::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t GenericResource::getResult() const
{
    return m_Result;
}


void GenericResource::setResult(utility::string_t value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool GenericResource::resultIsSet() const
{
    return m_ResultIsSet;
}

void GenericResource::unsetResult()
{
    m_ResultIsSet = false;
}

utility::string_t GenericResource::getStartTime() const
{
    return m_StartTime;
}


void GenericResource::setStartTime(utility::string_t value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool GenericResource::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}

void GenericResource::unsetStartTime()
{
    m_StartTimeIsSet = false;
}

}
}
}
}

