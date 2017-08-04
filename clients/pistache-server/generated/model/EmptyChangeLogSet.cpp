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


#include "EmptyChangeLogSet.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

EmptyChangeLogSet::EmptyChangeLogSet()
{
    m__class = "";
    m__classIsSet = false;
    m_Kind = "";
    m_KindIsSet = false;
    
}

EmptyChangeLogSet::~EmptyChangeLogSet()
{
}

void EmptyChangeLogSet::validate()
{
    // TODO: implement validation
}

nlohmann::json EmptyChangeLogSet::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_KindIsSet)
    {
        val["kind"] = ModelBase::toJson(m_Kind);
    }
    

    return val;
}

void EmptyChangeLogSet::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("kind") != val.end())
    {
        setKind(val.at("kind"));
        
    }
    
}


std::string EmptyChangeLogSet::getClass() const
{
    return m__class;
}
void EmptyChangeLogSet::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool EmptyChangeLogSet::classIsSet() const
{
    return m__classIsSet;
}
void EmptyChangeLogSet::unset_class()
{
    m__classIsSet = false;
}
std::string EmptyChangeLogSet::getKind() const
{
    return m_Kind;
}
void EmptyChangeLogSet::setKind(std::string value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool EmptyChangeLogSet::kindIsSet() const
{
    return m_KindIsSet;
}
void EmptyChangeLogSet::unsetKind()
{
    m_KindIsSet = false;
}

}
}
}
}
