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
 * PipelineBranches.h
 *
 * 
 */

#ifndef PipelineBranches_H_
#define PipelineBranches_H_


#include "ModelBase.h"

#include "PipelineBranchesitem.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranches
    : public ModelBase
{
public:
    PipelineBranches();
    virtual ~PipelineBranches();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineBranches members


protected:
};

}
}
}
}

#endif /* PipelineBranches_H_ */
