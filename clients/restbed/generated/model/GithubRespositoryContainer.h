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
 * GithubRespositoryContainer.h
 *
 * 
 */

#ifndef GithubRespositoryContainer_H_
#define GithubRespositoryContainer_H_



#include <string>
#include "GithubRepositories.h"
#include "GithubRespositoryContainerlinks.h"
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubRespositoryContainer
{
public:
    GithubRespositoryContainer();
    virtual ~GithubRespositoryContainer();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// GithubRespositoryContainer members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubRespositoryContainerlinks> getLinks() const;
    void setLinks(std::shared_ptr<GithubRespositoryContainerlinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubRepositories> getRepositories() const;
    void setRepositories(std::shared_ptr<GithubRepositories> value);

protected:
    std::string m__class;
    std::shared_ptr<GithubRespositoryContainerlinks> m__links;
    std::shared_ptr<GithubRepositories> m_Repositories;
};

}
}
}
}

#endif /* GithubRespositoryContainer_H_ */
