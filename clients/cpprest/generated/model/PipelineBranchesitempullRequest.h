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

/*
 * PipelineBranchesitempullRequest.h
 *
 * 
 */

#ifndef PipelineBranchesitempullRequest_H_
#define PipelineBranchesitempullRequest_H_


#include "ModelBase.h"

#include "PipelineBranchesitempullRequestlinks.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranchesitempullRequest
    : public ModelBase
{
public:
    PipelineBranchesitempullRequest();
    virtual ~PipelineBranchesitempullRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PipelineBranchesitempullRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitempullRequestlinks> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<PipelineBranchesitempullRequestlinks> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAuthor() const;
    bool authorIsSet() const;
    void unsetAuthor();
    void setAuthor(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();
    void setTitle(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();
    void setUrl(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    std::shared_ptr<PipelineBranchesitempullRequestlinks> m__links;
    bool m__linksIsSet;
    utility::string_t m_Author;
    bool m_AuthorIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Title;
    bool m_TitleIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineBranchesitempullRequest_H_ */
