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
 * PipelineRunImpl.h
 * 
 * 
 */

#ifndef PipelineRunImpl_H_
#define PipelineRunImpl_H_

#include <QJsonObject>


#include "PipelineRunImpllinks.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class PipelineRunImpl: public SWGObject {
public:
    PipelineRunImpl();
    PipelineRunImpl(QString* json);
    virtual ~PipelineRunImpl();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineRunImpl* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    PipelineRunImpllinks* getLinks();
    void setLinks(PipelineRunImpllinks* _links);

    qint32 getDurationInMillis();
    void setDurationInMillis(qint32 duration_in_millis);

    QString* getEnQueueTime();
    void setEnQueueTime(QString* en_queue_time);

    QString* getEndTime();
    void setEndTime(QString* end_time);

    qint32 getEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(qint32 estimated_duration_in_millis);

    QString* getId();
    void setId(QString* id);

    QString* getOrganization();
    void setOrganization(QString* organization);

    QString* getPipeline();
    void setPipeline(QString* pipeline);

    QString* getResult();
    void setResult(QString* result);

    QString* getRunSummary();
    void setRunSummary(QString* run_summary);

    QString* getStartTime();
    void setStartTime(QString* start_time);

    QString* getState();
    void setState(QString* state);

    QString* getType();
    void setType(QString* type);

    QString* getCommitId();
    void setCommitId(QString* commit_id);


private:
    QString* _class;
    PipelineRunImpllinks* _links;
    qint32 duration_in_millis;
    QString* en_queue_time;
    QString* end_time;
    qint32 estimated_duration_in_millis;
    QString* id;
    QString* organization;
    QString* pipeline;
    QString* result;
    QString* run_summary;
    QString* start_time;
    QString* state;
    QString* type;
    QString* commit_id;
};

}

#endif /* PipelineRunImpl_H_ */
