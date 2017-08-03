/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * PipelineRunNode.h
 *
 * 
 */

#ifndef PipelineRunNode_H_
#define PipelineRunNode_H_



#include "PipelineRunNodeedges.h"
#include <string>
#include <vector>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunNode
{
public:
    PipelineRunNode();
    virtual ~PipelineRunNode();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineRunNode members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getDurationInMillis() const;
    void setDurationInMillis(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<PipelineRunNodeedges>> getEdges() const;
    void setEdges(std::vector<std::shared_ptr<PipelineRunNodeedges>> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getResult() const;
    void setResult(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getStartTime() const;
    void setStartTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getState() const;
    void setState(std::string value);

protected:
    std::string m__class;
    std::string m_DisplayName;
    int32_t m_DurationInMillis;
    std::vector<std::shared_ptr<PipelineRunNodeedges>> m_Edges;
    std::string m_Id;
    std::string m_Result;
    std::string m_StartTime;
    std::string m_State;
};

}
}
}
}

#endif /* PipelineRunNode_H_ */
