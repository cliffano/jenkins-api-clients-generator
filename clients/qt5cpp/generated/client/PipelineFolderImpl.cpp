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


#include "PipelineFolderImpl.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineFolderImpl::PipelineFolderImpl(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineFolderImpl::PipelineFolderImpl() {
    init();
}

PipelineFolderImpl::~PipelineFolderImpl() {
    this->cleanup();
}

void
PipelineFolderImpl::init() {
    _class = new QString("");
    display_name = new QString("");
    full_name = new QString("");
    name = new QString("");
    organization = new QString("");
    number_of_folders = 0;
    number_of_pipelines = 0;
}

void
PipelineFolderImpl::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(display_name != nullptr) {
        delete display_name;
    }

    if(full_name != nullptr) {
        delete full_name;
    }

    if(name != nullptr) {
        delete name;
    }

    if(organization != nullptr) {
        delete organization;
    }


}

PipelineFolderImpl*
PipelineFolderImpl::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineFolderImpl::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&display_name, pJson["displayName"], "QString", "QString");
    ::Swagger::setValue(&full_name, pJson["fullName"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&organization, pJson["organization"], "QString", "QString");
    ::Swagger::setValue(&number_of_folders, pJson["numberOfFolders"], "qint32", "");
    ::Swagger::setValue(&number_of_pipelines, pJson["numberOfPipelines"], "qint32", "");
}

QString
PipelineFolderImpl::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineFolderImpl::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("displayName"), display_name, obj, QString("QString"));

    toJsonValue(QString("fullName"), full_name, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("organization"), organization, obj, QString("QString"));

    obj->insert("numberOfFolders", QJsonValue(number_of_folders));

    obj->insert("numberOfPipelines", QJsonValue(number_of_pipelines));

    return obj;
}

QString*
PipelineFolderImpl::getClass() {
    return _class;
}
void
PipelineFolderImpl::setClass(QString* _class) {
    this->_class = _class;
}

QString*
PipelineFolderImpl::getDisplayName() {
    return display_name;
}
void
PipelineFolderImpl::setDisplayName(QString* display_name) {
    this->display_name = display_name;
}

QString*
PipelineFolderImpl::getFullName() {
    return full_name;
}
void
PipelineFolderImpl::setFullName(QString* full_name) {
    this->full_name = full_name;
}

QString*
PipelineFolderImpl::getName() {
    return name;
}
void
PipelineFolderImpl::setName(QString* name) {
    this->name = name;
}

QString*
PipelineFolderImpl::getOrganization() {
    return organization;
}
void
PipelineFolderImpl::setOrganization(QString* organization) {
    this->organization = organization;
}

qint32
PipelineFolderImpl::getNumberOfFolders() {
    return number_of_folders;
}
void
PipelineFolderImpl::setNumberOfFolders(qint32 number_of_folders) {
    this->number_of_folders = number_of_folders;
}

qint32
PipelineFolderImpl::getNumberOfPipelines() {
    return number_of_pipelines;
}
void
PipelineFolderImpl::setNumberOfPipelines(qint32 number_of_pipelines) {
    this->number_of_pipelines = number_of_pipelines;
}


}

