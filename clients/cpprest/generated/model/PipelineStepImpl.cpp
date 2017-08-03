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



#include "PipelineStepImpl.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PipelineStepImpl::PipelineStepImpl()
{
    m__class = U("");
    m__classIsSet = false;
    m__linksIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_InputIsSet = false;
    m_Result = U("");
    m_ResultIsSet = false;
    m_StartTime = U("");
    m_StartTimeIsSet = false;
    m_State = U("");
    m_StateIsSet = false;
}

PipelineStepImpl::~PipelineStepImpl()
{
}

void PipelineStepImpl::validate()
{
    // TODO: implement validation
}

web::json::value PipelineStepImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val[U("_links")] = ModelBase::toJson(m__links);
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
    if(m_InputIsSet)
    {
        val[U("input")] = ModelBase::toJson(m_Input);
    }
    if(m_ResultIsSet)
    {
        val[U("result")] = ModelBase::toJson(m_Result);
    }
    if(m_StartTimeIsSet)
    {
        val[U("startTime")] = ModelBase::toJson(m_StartTime);
    }
    if(m_StateIsSet)
    {
        val[U("state")] = ModelBase::toJson(m_State);
    }

    return val;
}

void PipelineStepImpl::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("_links")))
    {
        if(!val[U("_links")].is_null())
        {
            std::shared_ptr<PipelineStepImpllinks> newItem(new PipelineStepImpllinks());
            newItem->fromJson(val[U("_links")]);
            setLinks( newItem );
        }
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
    if(val.has_field(U("input")))
    {
        if(!val[U("input")].is_null())
        {
            std::shared_ptr<InputStepImpl> newItem(new InputStepImpl());
            newItem->fromJson(val[U("input")]);
            setInput( newItem );
        }
    }
    if(val.has_field(U("result")))
    {
        setResult(ModelBase::stringFromJson(val[U("result")]));
    }
    if(val.has_field(U("startTime")))
    {
        setStartTime(ModelBase::stringFromJson(val[U("startTime")]));
    }
    if(val.has_field(U("state")))
    {
        setState(ModelBase::stringFromJson(val[U("state")]));
    }
}

void PipelineStepImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, U("_links."));
        }
        
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
    if(m_InputIsSet)
    {
        if (m_Input.get())
        {
            m_Input->toMultipart(multipart, U("input."));
        }
        
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("result"), m_Result));
        
    }
    if(m_StartTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("startTime"), m_StartTime));
        
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("state"), m_State));
        
    }
}

void PipelineStepImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("_links")))
    {
        if(multipart->hasContent(U("_links")))
        {
            std::shared_ptr<PipelineStepImpllinks> newItem(new PipelineStepImpllinks());
            newItem->fromMultiPart(multipart, U("_links."));
            setLinks( newItem );
        }
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
    if(multipart->hasContent(U("input")))
    {
        if(multipart->hasContent(U("input")))
        {
            std::shared_ptr<InputStepImpl> newItem(new InputStepImpl());
            newItem->fromMultiPart(multipart, U("input."));
            setInput( newItem );
        }
    }
    if(multipart->hasContent(U("result")))
    {
        setResult(ModelBase::stringFromHttpContent(multipart->getContent(U("result"))));
    }
    if(multipart->hasContent(U("startTime")))
    {
        setStartTime(ModelBase::stringFromHttpContent(multipart->getContent(U("startTime"))));
    }
    if(multipart->hasContent(U("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(U("state"))));
    }
}

utility::string_t PipelineStepImpl::getClass() const
{
    return m__class;
}


void PipelineStepImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineStepImpl::classIsSet() const
{
    return m__classIsSet;
}

void PipelineStepImpl::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<PipelineStepImpllinks> PipelineStepImpl::getLinks() const
{
    return m__links;
}


void PipelineStepImpl::setLinks(std::shared_ptr<PipelineStepImpllinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool PipelineStepImpl::linksIsSet() const
{
    return m__linksIsSet;
}

void PipelineStepImpl::unset_links()
{
    m__linksIsSet = false;
}

utility::string_t PipelineStepImpl::getDisplayName() const
{
    return m_DisplayName;
}


void PipelineStepImpl::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool PipelineStepImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void PipelineStepImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

int32_t PipelineStepImpl::getDurationInMillis() const
{
    return m_DurationInMillis;
}


void PipelineStepImpl::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool PipelineStepImpl::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}

void PipelineStepImpl::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}

utility::string_t PipelineStepImpl::getId() const
{
    return m_Id;
}


void PipelineStepImpl::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelineStepImpl::idIsSet() const
{
    return m_IdIsSet;
}

void PipelineStepImpl::unsetId()
{
    m_IdIsSet = false;
}

std::shared_ptr<InputStepImpl> PipelineStepImpl::getInput() const
{
    return m_Input;
}


void PipelineStepImpl::setInput(std::shared_ptr<InputStepImpl> value)
{
    m_Input = value;
    m_InputIsSet = true;
}
bool PipelineStepImpl::inputIsSet() const
{
    return m_InputIsSet;
}

void PipelineStepImpl::unsetInput()
{
    m_InputIsSet = false;
}

utility::string_t PipelineStepImpl::getResult() const
{
    return m_Result;
}


void PipelineStepImpl::setResult(utility::string_t value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool PipelineStepImpl::resultIsSet() const
{
    return m_ResultIsSet;
}

void PipelineStepImpl::unsetResult()
{
    m_ResultIsSet = false;
}

utility::string_t PipelineStepImpl::getStartTime() const
{
    return m_StartTime;
}


void PipelineStepImpl::setStartTime(utility::string_t value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool PipelineStepImpl::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}

void PipelineStepImpl::unsetStartTime()
{
    m_StartTimeIsSet = false;
}

utility::string_t PipelineStepImpl::getState() const
{
    return m_State;
}


void PipelineStepImpl::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool PipelineStepImpl::stateIsSet() const
{
    return m_StateIsSet;
}

void PipelineStepImpl::unsetState()
{
    m_StateIsSet = false;
}

}
}
}
}

