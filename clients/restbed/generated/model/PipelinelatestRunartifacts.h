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
 * PipelinelatestRunartifacts.h
 *
 * 
 */

#ifndef PipelinelatestRunartifacts_H_
#define PipelinelatestRunartifacts_H_



#include <string>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelinelatestRunartifacts
{
public:
    PipelinelatestRunartifacts();
    virtual ~PipelinelatestRunartifacts();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelinelatestRunartifacts members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    void setSize(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::string m_Name;
    int32_t m_Size;
    std::string m_Url;
    std::string m__class;
};

}
}
}
}

#endif /* PipelinelatestRunartifacts_H_ */
