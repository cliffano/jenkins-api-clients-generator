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
 * PipelineRunSteps.h
 * 
 * 
 */

#ifndef PipelineRunSteps_H_
#define PipelineRunSteps_H_

#include <QJsonObject>


#include "GenericResource.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class PipelineRunSteps: public SWGObject {
public:
    PipelineRunSteps();
    PipelineRunSteps(QString* json);
    virtual ~PipelineRunSteps();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineRunSteps* fromJson(QString &jsonString);


private:
};

}

#endif /* PipelineRunSteps_H_ */
