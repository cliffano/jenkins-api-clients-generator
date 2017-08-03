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
 * PipelineStepImpl.h
 *
 * 
 */

#ifndef PipelineStepImpl_H_
#define PipelineStepImpl_H_



#include "InputStepImpl.h"
#include "PipelineStepImpllinks.h"
#include <string>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineStepImpl
{
public:
    PipelineStepImpl();
    virtual ~PipelineStepImpl();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineStepImpl members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineStepImpllinks> getLinks() const;
    void setLinks(std::shared_ptr<PipelineStepImpllinks> value);
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
    std::string getId() const;
    void setId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<InputStepImpl> getInput() const;
    void setInput(std::shared_ptr<InputStepImpl> value);
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
    std::shared_ptr<PipelineStepImpllinks> m__links;
    std::string m_DisplayName;
    int32_t m_DurationInMillis;
    std::string m_Id;
    std::shared_ptr<InputStepImpl> m_Input;
    std::string m_Result;
    std::string m_StartTime;
    std::string m_State;
};

}
}
}
}

#endif /* PipelineStepImpl_H_ */
