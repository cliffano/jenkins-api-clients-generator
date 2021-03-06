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


#include "OAIGithubOrganization.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubOrganization::OAIGithubOrganization(QString json) {
    init();
    this->fromJson(json);
}

OAIGithubOrganization::OAIGithubOrganization() {
    init();
}

OAIGithubOrganization::~OAIGithubOrganization() {
    this->cleanup();
}

void
OAIGithubOrganization::init() {
    _class = new QString("");
    m__class_isSet = false;
    _links = new OAIGithubOrganizationlinks();
    m__links_isSet = false;
    jenkins_organization_pipeline = false;
    m_jenkins_organization_pipeline_isSet = false;
    name = new QString("");
    m_name_isSet = false;
}

void
OAIGithubOrganization::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(_links != nullptr) { 
        delete _links;
    }

    if(name != nullptr) { 
        delete name;
    }
}

OAIGithubOrganization*
OAIGithubOrganization::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIGithubOrganization::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&_links, pJson["_links"], "OAIGithubOrganizationlinks", "OAIGithubOrganizationlinks");
    
    ::OpenAPI::setValue(&jenkins_organization_pipeline, pJson["jenkinsOrganizationPipeline"], "bool", "");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
OAIGithubOrganization::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubOrganization::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if((_links != nullptr) && (_links->isSet())){
        toJsonValue(QString("_links"), _links, obj, QString("OAIGithubOrganizationlinks"));
    }
    if(m_jenkins_organization_pipeline_isSet){
        obj.insert("jenkinsOrganizationPipeline", QJsonValue(jenkins_organization_pipeline));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIGithubOrganization::getClass() {
    return _class;
}
void
OAIGithubOrganization::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIGithubOrganizationlinks*
OAIGithubOrganization::getLinks() {
    return _links;
}
void
OAIGithubOrganization::setLinks(OAIGithubOrganizationlinks* _links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

bool
OAIGithubOrganization::isJenkinsOrganizationPipeline() {
    return jenkins_organization_pipeline;
}
void
OAIGithubOrganization::setJenkinsOrganizationPipeline(bool jenkins_organization_pipeline) {
    this->jenkins_organization_pipeline = jenkins_organization_pipeline;
    this->m_jenkins_organization_pipeline_isSet = true;
}

QString*
OAIGithubOrganization::getName() {
    return name;
}
void
OAIGithubOrganization::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}


bool
OAIGithubOrganization::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(_links != nullptr && _links->isSet()){ isObjectUpdated = true; break;}
        if(m_jenkins_organization_pipeline_isSet){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

