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



#include "FavoriteImpllinks.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

FavoriteImpllinks::FavoriteImpllinks()
{
    m_SelfIsSet = false;
    m__class = U("");
    m__classIsSet = false;
}

FavoriteImpllinks::~FavoriteImpllinks()
{
}

void FavoriteImpllinks::validate()
{
    // TODO: implement validation
}

web::json::value FavoriteImpllinks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SelfIsSet)
    {
        val[U("self")] = ModelBase::toJson(m_Self);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void FavoriteImpllinks::fromJson(web::json::value& val)
{
    if(val.has_field(U("self")))
    {
        if(!val[U("self")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[U("self")]);
            setSelf( newItem );
        }
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void FavoriteImpllinks::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_SelfIsSet)
    {
        if (m_Self.get())
        {
            m_Self->toMultipart(multipart, U("self."));
        }
        
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
}

void FavoriteImpllinks::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("self")))
    {
        if(multipart->hasContent(U("self")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, U("self."));
            setSelf( newItem );
        }
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
}

std::shared_ptr<Link> FavoriteImpllinks::getSelf() const
{
    return m_Self;
}


void FavoriteImpllinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool FavoriteImpllinks::selfIsSet() const
{
    return m_SelfIsSet;
}

void FavoriteImpllinks::unsetSelf()
{
    m_SelfIsSet = false;
}

utility::string_t FavoriteImpllinks::getClass() const
{
    return m__class;
}


void FavoriteImpllinks::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool FavoriteImpllinks::classIsSet() const
{
    return m__classIsSet;
}

void FavoriteImpllinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

