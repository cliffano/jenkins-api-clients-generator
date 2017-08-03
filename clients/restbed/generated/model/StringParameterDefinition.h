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
 * StringParameterDefinition.h
 *
 * 
 */

#ifndef StringParameterDefinition_H_
#define StringParameterDefinition_H_



#include <string>
#include "StringParameterValue.h"
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  StringParameterDefinition
{
public:
    StringParameterDefinition();
    virtual ~StringParameterDefinition();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// StringParameterDefinition members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StringParameterValue> getDefaultParameterValue() const;
    void setDefaultParameterValue(std::shared_ptr<StringParameterValue> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);

protected:
    std::string m__class;
    std::shared_ptr<StringParameterValue> m_DefaultParameterValue;
    std::string m_Description;
    std::string m_Name;
    std::string m_Type;
};

}
}
}
}

#endif /* StringParameterDefinition_H_ */
