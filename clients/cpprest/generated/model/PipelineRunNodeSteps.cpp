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



#include "PipelineRunNodeSteps.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PipelineRunNodeSteps::PipelineRunNodeSteps()
{
}

PipelineRunNodeSteps::~PipelineRunNodeSteps()
{
}

void PipelineRunNodeSteps::validate()
{
    // TODO: implement validation
}

web::json::value PipelineRunNodeSteps::toJson() const
{
    web::json::value val = this->null<PipelineStepImpl>::toJson();


    return val;
}

void PipelineRunNodeSteps::fromJson(web::json::value& val)
{
    this->null<PipelineStepImpl>::fromJson(val);

}

void PipelineRunNodeSteps::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

}

void PipelineRunNodeSteps::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

}

}
}
}
}

