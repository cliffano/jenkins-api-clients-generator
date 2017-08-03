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



#include "UnlabeledLoadStatistics.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UnlabeledLoadStatistics::UnlabeledLoadStatistics()
{
    m__class = U("");
    m__classIsSet = false;
}

UnlabeledLoadStatistics::~UnlabeledLoadStatistics()
{
}

void UnlabeledLoadStatistics::validate()
{
    // TODO: implement validation
}

web::json::value UnlabeledLoadStatistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void UnlabeledLoadStatistics::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void UnlabeledLoadStatistics::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

void UnlabeledLoadStatistics::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
}

utility::string_t UnlabeledLoadStatistics::getClass() const
{
    return m__class;
}


void UnlabeledLoadStatistics::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool UnlabeledLoadStatistics::classIsSet() const
{
    return m__classIsSet;
}

void UnlabeledLoadStatistics::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

