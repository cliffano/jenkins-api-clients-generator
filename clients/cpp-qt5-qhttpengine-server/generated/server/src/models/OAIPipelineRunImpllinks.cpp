/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIPipelineRunImpllinks.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineRunImpllinks::OAIPipelineRunImpllinks(QString json) {
    this->fromJson(json);
}

OAIPipelineRunImpllinks::OAIPipelineRunImpllinks() {
    this->init();
}

OAIPipelineRunImpllinks::~OAIPipelineRunImpllinks() {
    
}

void
OAIPipelineRunImpllinks::init() {
    m_nodes_isSet = false;
    m_log_isSet = false;
    m_self_isSet = false;
    m_actions_isSet = false;
    m_steps_isSet = false;
    m__class_isSet = false;
}

void
OAIPipelineRunImpllinks::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineRunImpllinks::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(nodes, json[QString("nodes")]);
    
    ::OpenAPI::fromJsonValue(log, json[QString("log")]);
    
    ::OpenAPI::fromJsonValue(self, json[QString("self")]);
    
    ::OpenAPI::fromJsonValue(actions, json[QString("actions")]);
    
    ::OpenAPI::fromJsonValue(steps, json[QString("steps")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIPipelineRunImpllinks::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineRunImpllinks::asJsonObject() const {
    QJsonObject obj;
	if(nodes.isSet()){
        obj.insert(QString("nodes"), ::OpenAPI::toJsonValue(nodes));
    }
	if(log.isSet()){
        obj.insert(QString("log"), ::OpenAPI::toJsonValue(log));
    }
	if(self.isSet()){
        obj.insert(QString("self"), ::OpenAPI::toJsonValue(self));
    }
	if(actions.isSet()){
        obj.insert(QString("actions"), ::OpenAPI::toJsonValue(actions));
    }
	if(steps.isSet()){
        obj.insert(QString("steps"), ::OpenAPI::toJsonValue(steps));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

OAILink
OAIPipelineRunImpllinks::getNodes() const {
    return nodes;
}
void
OAIPipelineRunImpllinks::setNodes(const OAILink &nodes) {
    this->nodes = nodes;
    this->m_nodes_isSet = true;
}

OAILink
OAIPipelineRunImpllinks::getLog() const {
    return log;
}
void
OAIPipelineRunImpllinks::setLog(const OAILink &log) {
    this->log = log;
    this->m_log_isSet = true;
}

OAILink
OAIPipelineRunImpllinks::getSelf() const {
    return self;
}
void
OAIPipelineRunImpllinks::setSelf(const OAILink &self) {
    this->self = self;
    this->m_self_isSet = true;
}

OAILink
OAIPipelineRunImpllinks::getActions() const {
    return actions;
}
void
OAIPipelineRunImpllinks::setActions(const OAILink &actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

OAILink
OAIPipelineRunImpllinks::getSteps() const {
    return steps;
}
void
OAIPipelineRunImpllinks::setSteps(const OAILink &steps) {
    this->steps = steps;
    this->m_steps_isSet = true;
}

QString
OAIPipelineRunImpllinks::getClass() const {
    return _class;
}
void
OAIPipelineRunImpllinks::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIPipelineRunImpllinks::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(nodes.isSet()){ isObjectUpdated = true; break;}
    
        if(log.isSet()){ isObjectUpdated = true; break;}
    
        if(self.isSet()){ isObjectUpdated = true; break;}
    
        if(actions.isSet()){ isObjectUpdated = true; break;}
    
        if(steps.isSet()){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
