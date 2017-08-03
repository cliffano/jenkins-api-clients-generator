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
 * ExtensionClassContainerImpl1links.h
 *
 * 
 */

#ifndef ExtensionClassContainerImpl1links_H_
#define ExtensionClassContainerImpl1links_H_


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
class  ExtensionClassContainerImpl1links
    : public ModelBase
{
public:
    ExtensionClassContainerImpl1links();
    virtual ~ExtensionClassContainerImpl1links();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ExtensionClassContainerImpl1links members

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

#endif /* ExtensionClassContainerImpl1links_H_ */
