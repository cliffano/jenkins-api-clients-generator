/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIQueueBlockedItem.h
 *
 * 
 */

#ifndef OAIQueueBlockedItem_H_
#define OAIQueueBlockedItem_H_

#include <QJsonObject>


#include "OAIOAICauseAction.h"
#include "OAIOAIFreeStyleProject.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIQueueBlockedItem: public OAIObject {
public:
    OAIQueueBlockedItem();
    OAIQueueBlockedItem(QString json);
    ~OAIQueueBlockedItem();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIQueueBlockedItem* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QList<OAICauseAction*>* getActions();
    void setActions(QList<OAICauseAction*>* actions);

    bool isBlocked();
    void setBlocked(bool blocked);

    bool isBuildable();
    void setBuildable(bool buildable);

    qint32 getId();
    void setId(qint32 id);

    qint32 getInQueueSince();
    void setInQueueSince(qint32 in_queue_since);

    QString* getParams();
    void setParams(QString* params);

    bool isStuck();
    void setStuck(bool stuck);

    OAIFreeStyleProject* getTask();
    void setTask(OAIFreeStyleProject* task);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getWhy();
    void setWhy(QString* why);

    qint32 getBuildableStartMilliseconds();
    void setBuildableStartMilliseconds(qint32 buildable_start_milliseconds);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QList<OAICauseAction*>* actions;
    bool m_actions_isSet;

    bool blocked;
    bool m_blocked_isSet;

    bool buildable;
    bool m_buildable_isSet;

    qint32 id;
    bool m_id_isSet;

    qint32 in_queue_since;
    bool m_in_queue_since_isSet;

    QString* params;
    bool m_params_isSet;

    bool stuck;
    bool m_stuck_isSet;

    OAIFreeStyleProject* task;
    bool m_task_isSet;

    QString* url;
    bool m_url_isSet;

    QString* why;
    bool m_why_isSet;

    qint32 buildable_start_milliseconds;
    bool m_buildable_start_milliseconds_isSet;

};

}

#endif /* OAIQueueBlockedItem_H_ */
