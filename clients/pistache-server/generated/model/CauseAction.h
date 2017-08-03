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
 * CauseAction.h
 *
 * 
 */

#ifndef CauseAction_H_
#define CauseAction_H_


#include "ModelBase.h"

#include "CauseUserIdCause.h"
#include <string>
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CauseAction
    : public ModelBase
{
public:
    CauseAction();
    virtual ~CauseAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// CauseAction members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CauseUserIdCause>>& getCauses();
    bool causesIsSet() const;
    void unsetCauses();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::vector<std::shared_ptr<CauseUserIdCause>> m_Causes;
    bool m_CausesIsSet;
};

}
}
}
}

#endif /* CauseAction_H_ */
