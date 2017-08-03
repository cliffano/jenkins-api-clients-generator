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


#include "StringParameterValue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

StringParameterValue::StringParameterValue(QString* json) {
    init();
    this->fromJson(*json);
}

StringParameterValue::StringParameterValue() {
    init();
}

StringParameterValue::~StringParameterValue() {
    this->cleanup();
}

void
StringParameterValue::init() {
    _class = new QString("");
    name = new QString("");
    value = new QString("");
}

void
StringParameterValue::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(name != nullptr) {
        delete name;
    }

    if(value != nullptr) {
        delete value;
    }
}

StringParameterValue*
StringParameterValue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
StringParameterValue::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&value, pJson["value"], "QString", "QString");
}

QString
StringParameterValue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
StringParameterValue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("value"), value, obj, QString("QString"));

    return obj;
}

QString*
StringParameterValue::getClass() {
    return _class;
}
void
StringParameterValue::setClass(QString* _class) {
    this->_class = _class;
}

QString*
StringParameterValue::getName() {
    return name;
}
void
StringParameterValue::setName(QString* name) {
    this->name = name;
}

QString*
StringParameterValue::getValue() {
    return value;
}
void
StringParameterValue::setValue(QString* value) {
    this->value = value;
}


}

