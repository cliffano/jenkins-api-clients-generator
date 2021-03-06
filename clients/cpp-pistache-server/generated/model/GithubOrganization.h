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
/*
 * GithubOrganization.h
 *
 * 
 */

#ifndef GithubOrganization_H_
#define GithubOrganization_H_


#include "ModelBase.h"

#include <string>
#include "GithubOrganizationlinks.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubOrganization
    : public ModelBase
{
public:
    GithubOrganization();
    virtual ~GithubOrganization();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// GithubOrganization members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    GithubOrganizationlinks getLinks() const;
    void setLinks(GithubOrganizationlinks const& value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    bool isJenkinsOrganizationPipeline() const;
    void setJenkinsOrganizationPipeline(bool const value);
    bool jenkinsOrganizationPipelineIsSet() const;
    void unsetJenkinsOrganizationPipeline();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();

protected:
    std::string m__class;
    bool m__classIsSet;
    GithubOrganizationlinks m__links;
    bool m__linksIsSet;
    bool m_JenkinsOrganizationPipeline;
    bool m_JenkinsOrganizationPipelineIsSet;
    std::string m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* GithubOrganization_H_ */
