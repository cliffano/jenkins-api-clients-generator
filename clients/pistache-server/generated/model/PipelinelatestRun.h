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
 * PipelinelatestRun.h
 *
 * 
 */

#ifndef PipelinelatestRun_H_
#define PipelinelatestRun_H_


#include "ModelBase.h"

#include "PipelinelatestRunartifacts.h"
#include <string>
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelinelatestRun
    : public ModelBase
{
public:
    PipelinelatestRun();
    virtual ~PipelinelatestRun();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelinelatestRun members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<PipelinelatestRunartifacts>>& getArtifacts();
    bool artifactsIsSet() const;
    void unsetArtifacts();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDurationInMillis() const;
    void setDurationInMillis(int32_t value);
    bool durationInMillisIsSet() const;
    void unsetDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t value);
    bool estimatedDurationInMillisIsSet() const;
    void unsetEstimatedDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    std::string getEnQueueTime() const;
    void setEnQueueTime(std::string value);
    bool enQueueTimeIsSet() const;
    void unsetEnQueueTime();
    /// <summary>
    /// 
    /// </summary>
    std::string getEndTime() const;
    void setEndTime(std::string value);
    bool endTimeIsSet() const;
    void unsetEndTime();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string value);
    bool organizationIsSet() const;
    void unsetOrganization();
    /// <summary>
    /// 
    /// </summary>
    std::string getPipeline() const;
    void setPipeline(std::string value);
    bool pipelineIsSet() const;
    void unsetPipeline();
    /// <summary>
    /// 
    /// </summary>
    std::string getResult() const;
    void setResult(std::string value);
    bool resultIsSet() const;
    void unsetResult();
    /// <summary>
    /// 
    /// </summary>
    std::string getRunSummary() const;
    void setRunSummary(std::string value);
    bool runSummaryIsSet() const;
    void unsetRunSummary();
    /// <summary>
    /// 
    /// </summary>
    std::string getStartTime() const;
    void setStartTime(std::string value);
    bool startTimeIsSet() const;
    void unsetStartTime();
    /// <summary>
    /// 
    /// </summary>
    std::string getState() const;
    void setState(std::string value);
    bool stateIsSet() const;
    void unsetState();
    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// 
    /// </summary>
    std::string getCommitId() const;
    void setCommitId(std::string value);
    bool commitIdIsSet() const;
    void unsetCommitId();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::vector<std::shared_ptr<PipelinelatestRunartifacts>> m_Artifacts;
    bool m_ArtifactsIsSet;
    int32_t m_DurationInMillis;
    bool m_DurationInMillisIsSet;
    int32_t m_EstimatedDurationInMillis;
    bool m_EstimatedDurationInMillisIsSet;
    std::string m_EnQueueTime;
    bool m_EnQueueTimeIsSet;
    std::string m_EndTime;
    bool m_EndTimeIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Organization;
    bool m_OrganizationIsSet;
    std::string m_Pipeline;
    bool m_PipelineIsSet;
    std::string m_Result;
    bool m_ResultIsSet;
    std::string m_RunSummary;
    bool m_RunSummaryIsSet;
    std::string m_StartTime;
    bool m_StartTimeIsSet;
    std::string m_State;
    bool m_StateIsSet;
    std::string m_Type;
    bool m_TypeIsSet;
    std::string m_CommitId;
    bool m_CommitIdIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelinelatestRun_H_ */
