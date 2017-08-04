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


#include "GithubScmlinks.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

GithubScmlinks::GithubScmlinks()
{
    m_SelfIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

GithubScmlinks::~GithubScmlinks()
{
}

void GithubScmlinks::validate()
{
    // TODO: implement validation
}

nlohmann::json GithubScmlinks::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_SelfIsSet)
    {
        val["self"] = ModelBase::toJson(m_Self);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void GithubScmlinks::fromJson(nlohmann::json& val)
{
    if(val.find("self") != val.end())
    {
        if(!val["self"].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val["self"]);
            setSelf( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    
}


std::shared_ptr<Link> GithubScmlinks::getSelf() const
{
    return m_Self;
}
void GithubScmlinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool GithubScmlinks::selfIsSet() const
{
    return m_SelfIsSet;
}
void GithubScmlinks::unsetSelf()
{
    m_SelfIsSet = false;
}
std::string GithubScmlinks::getClass() const
{
    return m__class;
}
void GithubScmlinks::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubScmlinks::classIsSet() const
{
    return m__classIsSet;
}
void GithubScmlinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
