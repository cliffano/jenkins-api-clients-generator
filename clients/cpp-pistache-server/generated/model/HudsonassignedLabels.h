/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * HudsonassignedLabels.h
 *
 * 
 */

#ifndef HudsonassignedLabels_H_
#define HudsonassignedLabels_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonassignedLabels
    : public ModelBase
{
public:
    HudsonassignedLabels();
    virtual ~HudsonassignedLabels();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// HudsonassignedLabels members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* HudsonassignedLabels_H_ */