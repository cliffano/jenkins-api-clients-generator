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
 * Users.h
 *
 * 
 */

#ifndef Users_H_
#define Users_H_


#include "ModelBase.h"

#include <vector>
#include "User.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Users
    : public ModelBase
{
public:
    Users();
    virtual ~Users();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Users members


protected:
};

}
}
}
}

#endif /* Users_H_ */
