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
/*
 * GithubRepositorylinks.h
 *
 * 
 */

#ifndef GithubRepositorylinks_H_
#define GithubRepositorylinks_H_


#include "ModelBase.h"

#include <string>
#include "Link.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubRepositorylinks
    : public ModelBase
{
public:
    GithubRepositorylinks();
    virtual ~GithubRepositorylinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// GithubRepositorylinks members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    void setSelf(std::shared_ptr<Link> value);
    bool selfIsSet() const;
    void unsetSelf();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::shared_ptr<Link> m_Self;
    bool m_SelfIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* GithubRepositorylinks_H_ */
