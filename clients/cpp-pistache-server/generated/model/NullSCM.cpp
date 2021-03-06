/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "NullSCM.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NullSCM::NullSCM()
{
    m__class = "";
    m__classIsSet = false;
    
}

NullSCM::~NullSCM()
{
}

void NullSCM::validate()
{
    // TODO: implement validation
}

nlohmann::json NullSCM::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void NullSCM::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


std::string NullSCM::getClass() const
{
    return m__class;
}
void NullSCM::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool NullSCM::classIsSet() const
{
    return m__classIsSet;
}
void NullSCM::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

