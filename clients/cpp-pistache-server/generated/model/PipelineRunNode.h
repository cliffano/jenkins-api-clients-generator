/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PipelineRunNode.h
 *
 * 
 */

#ifndef PipelineRunNode_H_
#define PipelineRunNode_H_


#include "ModelBase.h"

#include "PipelineRunNodeedges.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunNode
    : public ModelBase
{
public:
    PipelineRunNode();
    virtual ~PipelineRunNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineRunNode members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string const& value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDurationInMillis() const;
    void setDurationInMillis(int32_t const value);
    bool durationInMillisIsSet() const;
    void unsetDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    std::vector<PipelineRunNodeedges>& getEdges();
    bool edgesIsSet() const;
    void unsetEdges();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getResult() const;
    void setResult(std::string const& value);
    bool resultIsSet() const;
    void unsetResult();
    /// <summary>
    /// 
    /// </summary>
    std::string getStartTime() const;
    void setStartTime(std::string const& value);
    bool startTimeIsSet() const;
    void unsetStartTime();
    /// <summary>
    /// 
    /// </summary>
    std::string getState() const;
    void setState(std::string const& value);
    bool stateIsSet() const;
    void unsetState();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_DurationInMillis;
    bool m_DurationInMillisIsSet;
    std::vector<PipelineRunNodeedges> m_Edges;
    bool m_EdgesIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Result;
    bool m_ResultIsSet;
    std::string m_StartTime;
    bool m_StartTimeIsSet;
    std::string m_State;
    bool m_StateIsSet;
};

}
}
}
}

#endif /* PipelineRunNode_H_ */
