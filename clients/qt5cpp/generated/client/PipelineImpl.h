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
 * PipelineImpl.h
 * 
 * 
 */

#ifndef PipelineImpl_H_
#define PipelineImpl_H_

#include <QJsonObject>


#include "PipelineImpllinks.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class PipelineImpl: public SWGObject {
public:
    PipelineImpl();
    PipelineImpl(QString* json);
    virtual ~PipelineImpl();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineImpl* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    qint32 getEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(qint32 estimated_duration_in_millis);

    QString* getFullName();
    void setFullName(QString* full_name);

    QString* getLatestRun();
    void setLatestRun(QString* latest_run);

    QString* getName();
    void setName(QString* name);

    QString* getOrganization();
    void setOrganization(QString* organization);

    qint32 getWeatherScore();
    void setWeatherScore(qint32 weather_score);

    PipelineImpllinks* getLinks();
    void setLinks(PipelineImpllinks* _links);


private:
    QString* _class;
    QString* display_name;
    qint32 estimated_duration_in_millis;
    QString* full_name;
    QString* latest_run;
    QString* name;
    QString* organization;
    qint32 weather_score;
    PipelineImpllinks* _links;
};

}

#endif /* PipelineImpl_H_ */
