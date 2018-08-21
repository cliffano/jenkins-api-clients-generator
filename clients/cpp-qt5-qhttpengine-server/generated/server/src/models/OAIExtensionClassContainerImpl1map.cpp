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


#include "OAIExtensionClassContainerImpl1map.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIExtensionClassContainerImpl1map::OAIExtensionClassContainerImpl1map(QString json) {
    this->fromJson(json);
}

OAIExtensionClassContainerImpl1map::OAIExtensionClassContainerImpl1map() {
    this->init();
}

OAIExtensionClassContainerImpl1map::~OAIExtensionClassContainerImpl1map() {
    
}

void
OAIExtensionClassContainerImpl1map::init() {
    m_io_jenkins_blueocean_service_embedded_rest_pipeline_impl_isSet = false;
    m_io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl_isSet = false;
    m__class_isSet = false;
}

void
OAIExtensionClassContainerImpl1map::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIExtensionClassContainerImpl1map::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(io_jenkins_blueocean_service_embedded_rest_pipeline_impl, json[QString("io.jenkins.blueocean.service.embedded.rest.PipelineImpl")]);
    
    ::OpenAPI::fromJsonValue(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl, json[QString("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIExtensionClassContainerImpl1map::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIExtensionClassContainerImpl1map::asJsonObject() const {
    QJsonObject obj;
	if(io_jenkins_blueocean_service_embedded_rest_pipeline_impl.isSet()){
        obj.insert(QString("io.jenkins.blueocean.service.embedded.rest.PipelineImpl"), ::OpenAPI::toJsonValue(io_jenkins_blueocean_service_embedded_rest_pipeline_impl));
    }
	if(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl.isSet()){
        obj.insert(QString("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"), ::OpenAPI::toJsonValue(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

OAIExtensionClassImpl
OAIExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() const {
    return io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
}
void
OAIExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(const OAIExtensionClassImpl &io_jenkins_blueocean_service_embedded_rest_pipeline_impl) {
    this->io_jenkins_blueocean_service_embedded_rest_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
    this->m_io_jenkins_blueocean_service_embedded_rest_pipeline_impl_isSet = true;
}

OAIExtensionClassImpl
OAIExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() const {
    return io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
}
void
OAIExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(const OAIExtensionClassImpl &io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl) {
    this->io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
    this->m_io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl_isSet = true;
}

QString
OAIExtensionClassContainerImpl1map::getClass() const {
    return _class;
}
void
OAIExtensionClassContainerImpl1map::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIExtensionClassContainerImpl1map::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(io_jenkins_blueocean_service_embedded_rest_pipeline_impl.isSet()){ isObjectUpdated = true; break;}
    
        if(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl.isSet()){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
