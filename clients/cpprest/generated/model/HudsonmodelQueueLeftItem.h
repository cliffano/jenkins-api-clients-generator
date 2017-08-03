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
 * HudsonmodelQueueLeftItem.h
 *
 * 
 */

#ifndef HudsonmodelQueueLeftItem_H_
#define HudsonmodelQueueLeftItem_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "HudsonmodelFreeStyleBuild.h"
#include "HudsonmodelCauseAction.h"
#include "HudsonmodelFreeStyleProject.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonmodelQueueLeftItem
    : public ModelBase
{
public:
    HudsonmodelQueueLeftItem();
    virtual ~HudsonmodelQueueLeftItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// HudsonmodelQueueLeftItem members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<HudsonmodelCauseAction>>& getActions();
    bool actionsIsSet() const;
    void unsetActions();
    /// <summary>
    /// 
    /// </summary>
    bool getBlocked() const;
    void setBlocked(bool value);
    bool blockedIsSet() const;
    void unsetBlocked();
    /// <summary>
    /// 
    /// </summary>
    bool getBuildable() const;
    void setBuildable(bool value);
    bool buildableIsSet() const;
    void unsetBuildable();
    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    void setId(int32_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    int32_t getInQueueSince() const;
    void setInQueueSince(int32_t value);
    bool inQueueSinceIsSet() const;
    void unsetInQueueSince();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParams() const;
    void setParams(utility::string_t value);
    bool paramsIsSet() const;
    void unsetParams();
    /// <summary>
    /// 
    /// </summary>
    bool getStuck() const;
    void setStuck(bool value);
    bool stuckIsSet() const;
    void unsetStuck();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<HudsonmodelFreeStyleProject> getTask() const;
    void setTask(std::shared_ptr<HudsonmodelFreeStyleProject> value);
    bool taskIsSet() const;
    void unsetTask();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    void setUrl(utility::string_t value);
    bool urlIsSet() const;
    void unsetUrl();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWhy() const;
    void setWhy(utility::string_t value);
    bool whyIsSet() const;
    void unsetWhy();
    /// <summary>
    /// 
    /// </summary>
    bool getCancelled() const;
    void setCancelled(bool value);
    bool cancelledIsSet() const;
    void unsetCancelled();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<HudsonmodelFreeStyleBuild> getExecutable() const;
    void setExecutable(std::shared_ptr<HudsonmodelFreeStyleBuild> value);
    bool executableIsSet() const;
    void unsetExecutable();

protected:
    utility::string_t m__class;
    bool m__classIsSet;
std::vector<std::shared_ptr<HudsonmodelCauseAction>> m_Actions;
    bool m_ActionsIsSet;
bool m_Blocked;
    bool m_BlockedIsSet;
bool m_Buildable;
    bool m_BuildableIsSet;
int32_t m_Id;
    bool m_IdIsSet;
int32_t m_InQueueSince;
    bool m_InQueueSinceIsSet;
utility::string_t m_Params;
    bool m_ParamsIsSet;
bool m_Stuck;
    bool m_StuckIsSet;
std::shared_ptr<HudsonmodelFreeStyleProject> m_Task;
    bool m_TaskIsSet;
utility::string_t m_Url;
    bool m_UrlIsSet;
utility::string_t m_Why;
    bool m_WhyIsSet;
bool m_Cancelled;
    bool m_CancelledIsSet;
std::shared_ptr<HudsonmodelFreeStyleBuild> m_Executable;
    bool m_ExecutableIsSet;
};

}
}
}
}

#endif /* HudsonmodelQueueLeftItem_H_ */