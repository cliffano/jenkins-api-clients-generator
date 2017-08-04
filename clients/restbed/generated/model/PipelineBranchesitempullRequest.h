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



#include <string>
#include "PipelineBranchesitempullRequestlinks.h"
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranchesitempullRequest
{
public:
    PipelineBranchesitempullRequest();
    virtual ~PipelineBranchesitempullRequest();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineBranchesitempullRequest members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitempullRequestlinks> getLinks() const;
    void setLinks(std::shared_ptr<PipelineBranchesitempullRequestlinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getAuthor() const;
    void setAuthor(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getTitle() const;
    void setTitle(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::shared_ptr<PipelineBranchesitempullRequestlinks> m__links;
    std::string m_Author;
    std::string m_Id;
    std::string m_Title;
    std::string m_Url;
    std::string m__class;
};

}
}
}
}

#endif /* PipelineBranchesitempullRequest_H_ */