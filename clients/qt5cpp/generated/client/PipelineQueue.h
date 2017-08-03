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
 * PipelineQueue.h
 * 
 * 
 */

#ifndef PipelineQueue_H_
#define PipelineQueue_H_

#include <QJsonObject>


#include "QueueItemImpl.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class PipelineQueue: public SWGObject {
public:
    PipelineQueue();
    PipelineQueue(QString* json);
    virtual ~PipelineQueue();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineQueue* fromJson(QString &jsonString);


private:
};

}

#endif /* PipelineQueue_H_ */
