/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PipelineRunNodeSteps.h
 *
 * 
 */

#ifndef PipelineRunNodeSteps_H_
#define PipelineRunNodeSteps_H_



#include "PipelineStepImpl.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunNodeSteps
{
public:
    PipelineRunNodeSteps();
    virtual ~PipelineRunNodeSteps();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineRunNodeSteps members
    

protected:
};

}
}
}
}

#endif /* PipelineRunNodeSteps_H_ */