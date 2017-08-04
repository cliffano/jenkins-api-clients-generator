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



#include "GithubContent.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GithubContent::GithubContent()
{
    m_Name = U("");
    m_NameIsSet = false;
    m_Sha = U("");
    m_ShaIsSet = false;
    m__class = U("");
    m__classIsSet = false;
    m_Repo = U("");
    m_RepoIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_Owner = U("");
    m_OwnerIsSet = false;
    m_Path = U("");
    m_PathIsSet = false;
    m_Base64Data = U("");
    m_Base64DataIsSet = false;
}

GithubContent::~GithubContent()
{
}

void GithubContent::validate()
{
    // TODO: implement validation
}

web::json::value GithubContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ShaIsSet)
    {
        val[U("sha")] = ModelBase::toJson(m_Sha);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_RepoIsSet)
    {
        val[U("repo")] = ModelBase::toJson(m_Repo);
    }
    if(m_SizeIsSet)
    {
        val[U("size")] = ModelBase::toJson(m_Size);
    }
    if(m_OwnerIsSet)
    {
        val[U("owner")] = ModelBase::toJson(m_Owner);
    }
    if(m_PathIsSet)
    {
        val[U("path")] = ModelBase::toJson(m_Path);
    }
    if(m_Base64DataIsSet)
    {
        val[U("base64Data")] = ModelBase::toJson(m_Base64Data);
    }

    return val;
}

void GithubContent::fromJson(web::json::value& val)
{
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
    }
    if(val.has_field(U("sha")))
    {
        setSha(ModelBase::stringFromJson(val[U("sha")]));
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("repo")))
    {
        setRepo(ModelBase::stringFromJson(val[U("repo")]));
    }
    if(val.has_field(U("size")))
    {
        setSize(ModelBase::int32_tFromJson(val[U("size")]));
    }
    if(val.has_field(U("owner")))
    {
        setOwner(ModelBase::stringFromJson(val[U("owner")]));
    }
    if(val.has_field(U("path")))
    {
        setPath(ModelBase::stringFromJson(val[U("path")]));
    }
    if(val.has_field(U("base64Data")))
    {
        setBase64Data(ModelBase::stringFromJson(val[U("base64Data")]));
    }
}

void GithubContent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_ShaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sha"), m_Sha));
        
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_RepoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("repo"), m_Repo));
        
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("size"), m_Size));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("owner"), m_Owner));
        
    }
    if(m_PathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("path"), m_Path));
        
    }
    if(m_Base64DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("base64Data"), m_Base64Data));
        
    }
}

void GithubContent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    }
    if(multipart->hasContent(U("sha")))
    {
        setSha(ModelBase::stringFromHttpContent(multipart->getContent(U("sha"))));
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
    if(multipart->hasContent(U("repo")))
    {
        setRepo(ModelBase::stringFromHttpContent(multipart->getContent(U("repo"))));
    }
    if(multipart->hasContent(U("size")))
    {
        setSize(ModelBase::int32_tFromHttpContent(multipart->getContent(U("size"))));
    }
    if(multipart->hasContent(U("owner")))
    {
        setOwner(ModelBase::stringFromHttpContent(multipart->getContent(U("owner"))));
    }
    if(multipart->hasContent(U("path")))
    {
        setPath(ModelBase::stringFromHttpContent(multipart->getContent(U("path"))));
    }
    if(multipart->hasContent(U("base64Data")))
    {
        setBase64Data(ModelBase::stringFromHttpContent(multipart->getContent(U("base64Data"))));
    }
}

utility::string_t GithubContent::getName() const
{
    return m_Name;
}


void GithubContent::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool GithubContent::nameIsSet() const
{
    return m_NameIsSet;
}

void GithubContent::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t GithubContent::getSha() const
{
    return m_Sha;
}


void GithubContent::setSha(utility::string_t value)
{
    m_Sha = value;
    m_ShaIsSet = true;
}
bool GithubContent::shaIsSet() const
{
    return m_ShaIsSet;
}

void GithubContent::unsetSha()
{
    m_ShaIsSet = false;
}

utility::string_t GithubContent::getClass() const
{
    return m__class;
}


void GithubContent::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubContent::classIsSet() const
{
    return m__classIsSet;
}

void GithubContent::unset_class()
{
    m__classIsSet = false;
}

utility::string_t GithubContent::getRepo() const
{
    return m_Repo;
}


void GithubContent::setRepo(utility::string_t value)
{
    m_Repo = value;
    m_RepoIsSet = true;
}
bool GithubContent::repoIsSet() const
{
    return m_RepoIsSet;
}

void GithubContent::unsetRepo()
{
    m_RepoIsSet = false;
}

int32_t GithubContent::getSize() const
{
    return m_Size;
}


void GithubContent::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool GithubContent::sizeIsSet() const
{
    return m_SizeIsSet;
}

void GithubContent::unsetSize()
{
    m_SizeIsSet = false;
}

utility::string_t GithubContent::getOwner() const
{
    return m_Owner;
}


void GithubContent::setOwner(utility::string_t value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool GithubContent::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void GithubContent::unsetOwner()
{
    m_OwnerIsSet = false;
}

utility::string_t GithubContent::getPath() const
{
    return m_Path;
}


void GithubContent::setPath(utility::string_t value)
{
    m_Path = value;
    m_PathIsSet = true;
}
bool GithubContent::pathIsSet() const
{
    return m_PathIsSet;
}

void GithubContent::unsetPath()
{
    m_PathIsSet = false;
}

utility::string_t GithubContent::getBase64Data() const
{
    return m_Base64Data;
}


void GithubContent::setBase64Data(utility::string_t value)
{
    m_Base64Data = value;
    m_Base64DataIsSet = true;
}
bool GithubContent::base64DataIsSet() const
{
    return m_Base64DataIsSet;
}

void GithubContent::unsetBase64Data()
{
    m_Base64DataIsSet = false;
}

}
}
}
}
