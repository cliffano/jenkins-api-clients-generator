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
 * HudsonassignedLabels.h
 *
 * 
 */

#ifndef HudsonassignedLabels_H_
#define HudsonassignedLabels_H_



#include <string>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonassignedLabels
{
public:
    HudsonassignedLabels();
    virtual ~HudsonassignedLabels();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// HudsonassignedLabels members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::string m__class;
};

}
}
}
}

#endif /* HudsonassignedLabels_H_ */
