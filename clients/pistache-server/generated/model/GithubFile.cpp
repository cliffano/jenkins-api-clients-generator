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


#include "GithubFile.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

GithubFile::GithubFile()
{
    m_ContentIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

GithubFile::~GithubFile()
{
}

void GithubFile::validate()
{
    // TODO: implement validation
}

nlohmann::json GithubFile::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_ContentIsSet)
    {
        val["content"] = ModelBase::toJson(m_Content);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void GithubFile::fromJson(nlohmann::json& val)
{
    if(val.find("content") != val.end())
    {
        if(!val["content"].is_null())
        {
            std::shared_ptr<GithubContent> newItem(new GithubContent());
            newItem->fromJson(val["content"]);
            setContent( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    
}


std::shared_ptr<GithubContent> GithubFile::getContent() const
{
    return m_Content;
}
void GithubFile::setContent(std::shared_ptr<GithubContent> value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool GithubFile::contentIsSet() const
{
    return m_ContentIsSet;
}
void GithubFile::unsetContent()
{
    m_ContentIsSet = false;
}
std::string GithubFile::getClass() const
{
    return m__class;
}
void GithubFile::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubFile::classIsSet() const
{
    return m__classIsSet;
}
void GithubFile::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

