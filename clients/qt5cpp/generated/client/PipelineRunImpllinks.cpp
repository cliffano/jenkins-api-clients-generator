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


#include "PipelineRunImpllinks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineRunImpllinks::PipelineRunImpllinks(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineRunImpllinks::PipelineRunImpllinks() {
    init();
}

PipelineRunImpllinks::~PipelineRunImpllinks() {
    this->cleanup();
}

void
PipelineRunImpllinks::init() {
    nodes = new Link();
    log = new Link();
    self = new Link();
    actions = new Link();
    steps = new Link();
    _class = new QString("");
}

void
PipelineRunImpllinks::cleanup() {
    
    if(nodes != nullptr) {
        delete nodes;
    }

    if(log != nullptr) {
        delete log;
    }

    if(self != nullptr) {
        delete self;
    }

    if(actions != nullptr) {
        delete actions;
    }

    if(steps != nullptr) {
        delete steps;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

PipelineRunImpllinks*
PipelineRunImpllinks::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineRunImpllinks::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&nodes, pJson["nodes"], "Link", "Link");
    ::Swagger::setValue(&log, pJson["log"], "Link", "Link");
    ::Swagger::setValue(&self, pJson["self"], "Link", "Link");
    ::Swagger::setValue(&actions, pJson["actions"], "Link", "Link");
    ::Swagger::setValue(&steps, pJson["steps"], "Link", "Link");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
PipelineRunImpllinks::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineRunImpllinks::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("nodes"), nodes, obj, QString("Link"));

    toJsonValue(QString("log"), log, obj, QString("Link"));

    toJsonValue(QString("self"), self, obj, QString("Link"));

    toJsonValue(QString("actions"), actions, obj, QString("Link"));

    toJsonValue(QString("steps"), steps, obj, QString("Link"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

Link*
PipelineRunImpllinks::getNodes() {
    return nodes;
}
void
PipelineRunImpllinks::setNodes(Link* nodes) {
    this->nodes = nodes;
}

Link*
PipelineRunImpllinks::getLog() {
    return log;
}
void
PipelineRunImpllinks::setLog(Link* log) {
    this->log = log;
}

Link*
PipelineRunImpllinks::getSelf() {
    return self;
}
void
PipelineRunImpllinks::setSelf(Link* self) {
    this->self = self;
}

Link*
PipelineRunImpllinks::getActions() {
    return actions;
}
void
PipelineRunImpllinks::setActions(Link* actions) {
    this->actions = actions;
}

Link*
PipelineRunImpllinks::getSteps() {
    return steps;
}
void
PipelineRunImpllinks::setSteps(Link* steps) {
    this->steps = steps;
}

QString*
PipelineRunImpllinks::getClass() {
    return _class;
}
void
PipelineRunImpllinks::setClass(QString* _class) {
    this->_class = _class;
}


}

