/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIBaseRemoteAccessApiHandler_H
#define OAI_OAIBaseRemoteAccessApiHandler_H

#include <QObject>

#include "OAIDefaultCrumbIssuer.h"

namespace OpenAPI {

class OAIBaseRemoteAccessApiHandler : public QObject
{
    Q_OBJECT
    
public:
    OAIBaseRemoteAccessApiHandler();
    virtual ~OAIBaseRemoteAccessApiHandler();


public slots:
    virtual void getCrumb();
    

};

}

#endif // OAI_OAIBaseRemoteAccessApiHandler_H
