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
 * PipelineBranchesitempullRequestlinks.h
 *
 * 
 */

#ifndef PipelineBranchesitempullRequestlinks_H_
#define PipelineBranchesitempullRequestlinks_H_


#include "ModelBase.h"

#include <string>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranchesitempullRequestlinks
    : public ModelBase
{
public:
    PipelineBranchesitempullRequestlinks();
    virtual ~PipelineBranchesitempullRequestlinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineBranchesitempullRequestlinks members

    /// <summary>
    /// 
    /// </summary>
    std::string getSelf() const;
    void setSelf(std::string value);
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
    std::string m_Self;
    bool m_SelfIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineBranchesitempullRequestlinks_H_ */
