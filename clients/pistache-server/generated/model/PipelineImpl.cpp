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


#include "PipelineImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

PipelineImpl::PipelineImpl()
{
    m__class = "";
    m__classIsSet = false;
    m_DisplayName = "";
    m_DisplayNameIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_FullName = "";
    m_FullNameIsSet = false;
    m_LatestRun = "";
    m_LatestRunIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Organization = "";
    m_OrganizationIsSet = false;
    m_WeatherScore = 0;
    m_WeatherScoreIsSet = false;
    m__linksIsSet = false;
    
}

PipelineImpl::~PipelineImpl()
{
}

void PipelineImpl::validate()
{
    // TODO: implement validation
}

nlohmann::json PipelineImpl::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val["displayName"] = ModelBase::toJson(m_DisplayName);
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val["estimatedDurationInMillis"] = m_EstimatedDurationInMillis;
    }
    if(m_FullNameIsSet)
    {
        val["fullName"] = ModelBase::toJson(m_FullName);
    }
    if(m_LatestRunIsSet)
    {
        val["latestRun"] = ModelBase::toJson(m_LatestRun);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val["organization"] = ModelBase::toJson(m_Organization);
    }
    if(m_WeatherScoreIsSet)
    {
        val["weatherScore"] = m_WeatherScore;
    }
    if(m__linksIsSet)
    {
        val["_links"] = ModelBase::toJson(m__links);
    }
    

    return val;
}

void PipelineImpl::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("displayName") != val.end())
    {
        setDisplayName(val.at("displayName"));
        
    }
    if(val.find("estimatedDurationInMillis") != val.end())
    {
        setEstimatedDurationInMillis(val.at("estimatedDurationInMillis"));
    }
    if(val.find("fullName") != val.end())
    {
        setFullName(val.at("fullName"));
        
    }
    if(val.find("latestRun") != val.end())
    {
        setLatestRun(val.at("latestRun"));
        
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
        
    }
    if(val.find("organization") != val.end())
    {
        setOrganization(val.at("organization"));
        
    }
    if(val.find("weatherScore") != val.end())
    {
        setWeatherScore(val.at("weatherScore"));
    }
    if(val.find("_links") != val.end())
    {
        if(!val["_links"].is_null())
        {
            std::shared_ptr<PipelineImpllinks> newItem(new PipelineImpllinks());
            newItem->fromJson(val["_links"]);
            setLinks( newItem );
        }
        
    }
    
}


std::string PipelineImpl::getClass() const
{
    return m__class;
}
void PipelineImpl::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineImpl::classIsSet() const
{
    return m__classIsSet;
}
void PipelineImpl::unset_class()
{
    m__classIsSet = false;
}
std::string PipelineImpl::getDisplayName() const
{
    return m_DisplayName;
}
void PipelineImpl::setDisplayName(std::string value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool PipelineImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void PipelineImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
int32_t PipelineImpl::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void PipelineImpl::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool PipelineImpl::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}
void PipelineImpl::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}
std::string PipelineImpl::getFullName() const
{
    return m_FullName;
}
void PipelineImpl::setFullName(std::string value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool PipelineImpl::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void PipelineImpl::unsetFullName()
{
    m_FullNameIsSet = false;
}
std::string PipelineImpl::getLatestRun() const
{
    return m_LatestRun;
}
void PipelineImpl::setLatestRun(std::string value)
{
    m_LatestRun = value;
    m_LatestRunIsSet = true;
}
bool PipelineImpl::latestRunIsSet() const
{
    return m_LatestRunIsSet;
}
void PipelineImpl::unsetLatestRun()
{
    m_LatestRunIsSet = false;
}
std::string PipelineImpl::getName() const
{
    return m_Name;
}
void PipelineImpl::setName(std::string value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool PipelineImpl::nameIsSet() const
{
    return m_NameIsSet;
}
void PipelineImpl::unsetName()
{
    m_NameIsSet = false;
}
std::string PipelineImpl::getOrganization() const
{
    return m_Organization;
}
void PipelineImpl::setOrganization(std::string value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool PipelineImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void PipelineImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
int32_t PipelineImpl::getWeatherScore() const
{
    return m_WeatherScore;
}
void PipelineImpl::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
    m_WeatherScoreIsSet = true;
}
bool PipelineImpl::weatherScoreIsSet() const
{
    return m_WeatherScoreIsSet;
}
void PipelineImpl::unsetWeatherScore()
{
    m_WeatherScoreIsSet = false;
}
std::shared_ptr<PipelineImpllinks> PipelineImpl::getLinks() const
{
    return m__links;
}
void PipelineImpl::setLinks(std::shared_ptr<PipelineImpllinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool PipelineImpl::linksIsSet() const
{
    return m__linksIsSet;
}
void PipelineImpl::unset_links()
{
    m__linksIsSet = false;
}

}
}
}
}

