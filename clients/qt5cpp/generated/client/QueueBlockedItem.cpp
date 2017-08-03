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


#include "QueueBlockedItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

QueueBlockedItem::QueueBlockedItem(QString* json) {
    init();
    this->fromJson(*json);
}

QueueBlockedItem::QueueBlockedItem() {
    init();
}

QueueBlockedItem::~QueueBlockedItem() {
    this->cleanup();
}

void
QueueBlockedItem::init() {
    _class = new QString("");
    actions = new QList<CauseAction*>();
    blocked = false;
    buildable = false;
    id = 0;
    in_queue_since = 0;
    params = new QString("");
    stuck = false;
    task = new FreeStyleProject();
    url = new QString("");
    why = new QString("");
    buildable_start_milliseconds = 0;
}

void
QueueBlockedItem::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(actions != nullptr) {
        QList<CauseAction*>* arr = actions;
        foreach(CauseAction* o, *arr) {
            delete o;
        }
        delete actions;
    }





    if(params != nullptr) {
        delete params;
    }


    if(task != nullptr) {
        delete task;
    }

    if(url != nullptr) {
        delete url;
    }

    if(why != nullptr) {
        delete why;
    }

}

QueueBlockedItem*
QueueBlockedItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
QueueBlockedItem::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::Swagger::setValue(&actions, pJson["actions"], "QList", "CauseAction");
    
    ::Swagger::setValue(&blocked, pJson["blocked"], "bool", "");
    ::Swagger::setValue(&buildable, pJson["buildable"], "bool", "");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&in_queue_since, pJson["inQueueSince"], "qint32", "");
    ::Swagger::setValue(&params, pJson["params"], "QString", "QString");
    ::Swagger::setValue(&stuck, pJson["stuck"], "bool", "");
    ::Swagger::setValue(&task, pJson["task"], "FreeStyleProject", "FreeStyleProject");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    ::Swagger::setValue(&why, pJson["why"], "QString", "QString");
    ::Swagger::setValue(&buildable_start_milliseconds, pJson["buildableStartMilliseconds"], "qint32", "");
}

QString
QueueBlockedItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
QueueBlockedItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    QJsonArray actionsJsonArray;
    toJsonArray((QList<void*>*)actions, &actionsJsonArray, "actions", "CauseAction");
    obj->insert("actions", actionsJsonArray);

    obj->insert("blocked", QJsonValue(blocked));

    obj->insert("buildable", QJsonValue(buildable));

    obj->insert("id", QJsonValue(id));

    obj->insert("inQueueSince", QJsonValue(in_queue_since));

    toJsonValue(QString("params"), params, obj, QString("QString"));

    obj->insert("stuck", QJsonValue(stuck));

    toJsonValue(QString("task"), task, obj, QString("FreeStyleProject"));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    toJsonValue(QString("why"), why, obj, QString("QString"));

    obj->insert("buildableStartMilliseconds", QJsonValue(buildable_start_milliseconds));

    return obj;
}

QString*
QueueBlockedItem::getClass() {
    return _class;
}
void
QueueBlockedItem::setClass(QString* _class) {
    this->_class = _class;
}

QList<CauseAction*>*
QueueBlockedItem::getActions() {
    return actions;
}
void
QueueBlockedItem::setActions(QList<CauseAction*>* actions) {
    this->actions = actions;
}

bool
QueueBlockedItem::getBlocked() {
    return blocked;
}
void
QueueBlockedItem::setBlocked(bool blocked) {
    this->blocked = blocked;
}

bool
QueueBlockedItem::getBuildable() {
    return buildable;
}
void
QueueBlockedItem::setBuildable(bool buildable) {
    this->buildable = buildable;
}

qint32
QueueBlockedItem::getId() {
    return id;
}
void
QueueBlockedItem::setId(qint32 id) {
    this->id = id;
}

qint32
QueueBlockedItem::getInQueueSince() {
    return in_queue_since;
}
void
QueueBlockedItem::setInQueueSince(qint32 in_queue_since) {
    this->in_queue_since = in_queue_since;
}

QString*
QueueBlockedItem::getParams() {
    return params;
}
void
QueueBlockedItem::setParams(QString* params) {
    this->params = params;
}

bool
QueueBlockedItem::getStuck() {
    return stuck;
}
void
QueueBlockedItem::setStuck(bool stuck) {
    this->stuck = stuck;
}

FreeStyleProject*
QueueBlockedItem::getTask() {
    return task;
}
void
QueueBlockedItem::setTask(FreeStyleProject* task) {
    this->task = task;
}

QString*
QueueBlockedItem::getUrl() {
    return url;
}
void
QueueBlockedItem::setUrl(QString* url) {
    this->url = url;
}

QString*
QueueBlockedItem::getWhy() {
    return why;
}
void
QueueBlockedItem::setWhy(QString* why) {
    this->why = why;
}

qint32
QueueBlockedItem::getBuildableStartMilliseconds() {
    return buildable_start_milliseconds;
}
void
QueueBlockedItem::setBuildableStartMilliseconds(qint32 buildable_start_milliseconds) {
    this->buildable_start_milliseconds = buildable_start_milliseconds;
}


}

