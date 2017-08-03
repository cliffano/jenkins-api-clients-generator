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
 * PipelineRunImpllinks.h
 * 
 * 
 */

#ifndef PipelineRunImpllinks_H_
#define PipelineRunImpllinks_H_

#include <QJsonObject>


#include "Link.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class PipelineRunImpllinks: public SWGObject {
public:
    PipelineRunImpllinks();
    PipelineRunImpllinks(QString* json);
    virtual ~PipelineRunImpllinks();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineRunImpllinks* fromJson(QString &jsonString);

    Link* getNodes();
    void setNodes(Link* nodes);

    Link* getLog();
    void setLog(Link* log);

    Link* getSelf();
    void setSelf(Link* self);

    Link* getActions();
    void setActions(Link* actions);

    Link* getSteps();
    void setSteps(Link* steps);

    QString* getClass();
    void setClass(QString* _class);


private:
    Link* nodes;
    Link* log;
    Link* self;
    Link* actions;
    Link* steps;
    QString* _class;
};

}

#endif /* PipelineRunImpllinks_H_ */
