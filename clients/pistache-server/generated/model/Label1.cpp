/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "Label1.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

Label1::Label1()
{
    m__class = "";
    m__classIsSet = false;
    
}

Label1::~Label1()
{
}

void Label1::validate()
{
    // TODO: implement validation
}

nlohmann::json Label1::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void Label1::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    
}


std::string Label1::getClass() const
{
    return m__class;
}
void Label1::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool Label1::classIsSet() const
{
    return m__classIsSet;
}
void Label1::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

