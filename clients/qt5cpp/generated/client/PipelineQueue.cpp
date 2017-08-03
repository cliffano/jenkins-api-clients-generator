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


#include "PipelineQueue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineQueue::PipelineQueue(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineQueue::PipelineQueue() {
    init();
}

PipelineQueue::~PipelineQueue() {
    this->cleanup();
}

void
PipelineQueue::init() {
}

void
PipelineQueue::cleanup() {
    }

PipelineQueue*
PipelineQueue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineQueue::fromJsonObject(QJsonObject &pJson) {
}

QString
PipelineQueue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineQueue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    return obj;
}


}

