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



#include "Body.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Body::Body()
{
    m_Favorite = false;
}

Body::~Body()
{
}

void Body::validate()
{
    // TODO: implement validation
}

web::json::value Body::toJson() const
{
    web::json::value val = web::json::value::object();

    val[U("favorite")] = ModelBase::toJson(m_Favorite);

    return val;
}

void Body::fromJson(web::json::value& val)
{
    setFavorite(ModelBase::boolFromJson(val[U("favorite")]));
}

void Body::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + U("favorite"), m_Favorite));
}

void Body::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    setFavorite(ModelBase::boolFromHttpContent(multipart->getContent(U("favorite"))));
}

bool Body::getFavorite() const
{
    return m_Favorite;
}


void Body::setFavorite(bool value)
{
    m_Favorite = value;
    
}
}
}
}
}

