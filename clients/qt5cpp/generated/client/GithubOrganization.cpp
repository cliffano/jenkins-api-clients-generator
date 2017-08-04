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


#include "GithubOrganization.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

GithubOrganization::GithubOrganization(QString* json) {
    init();
    this->fromJson(*json);
}

GithubOrganization::GithubOrganization() {
    init();
}

GithubOrganization::~GithubOrganization() {
    this->cleanup();
}

void
GithubOrganization::init() {
    _class = new QString("");
    _links = new GithubOrganizationlinks();
    jenkins_organization_pipeline = false;
    name = new QString("");
}

void
GithubOrganization::cleanup() {
    
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

GithubOrganization*
GithubOrganization::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
GithubOrganization::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&_links, pJson["_links"], "GithubOrganizationlinks", "GithubOrganizationlinks");
    ::Swagger::setValue(&jenkins_organization_pipeline, pJson["jenkinsOrganizationPipeline"], "bool", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
}

QString
GithubOrganization::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
GithubOrganization::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("_links"), _links, obj, QString("GithubOrganizationlinks"));

    obj->insert("jenkinsOrganizationPipeline", QJsonValue(jenkins_organization_pipeline));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

QString*
GithubOrganization::getClass() {
    return _class;
}
void
GithubOrganization::setClass(QString* _class) {
    this->_class = _class;
}

GithubOrganizationlinks*
GithubOrganization::getLinks() {
    return _links;
}
void
GithubOrganization::setLinks(GithubOrganizationlinks* _links) {
    this->_links = _links;
}

bool
GithubOrganization::getJenkinsOrganizationPipeline() {
    return jenkins_organization_pipeline;
}
void
GithubOrganization::setJenkinsOrganizationPipeline(bool jenkins_organization_pipeline) {
    this->jenkins_organization_pipeline = jenkins_organization_pipeline;
}

QString*
GithubOrganization::getName() {
    return name;
}
void
GithubOrganization::setName(QString* name) {
    this->name = name;
}


}
