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


#include "OAIEmptyChangeLogSet.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIEmptyChangeLogSet::OAIEmptyChangeLogSet(QString json) {
    init();
    this->fromJson(json);
}

OAIEmptyChangeLogSet::OAIEmptyChangeLogSet() {
    init();
}

OAIEmptyChangeLogSet::~OAIEmptyChangeLogSet() {
    this->cleanup();
}

void
OAIEmptyChangeLogSet::init() {
    _class = new QString("");
    m__class_isSet = false;
    kind = new QString("");
    m_kind_isSet = false;
}

void
OAIEmptyChangeLogSet::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(kind != nullptr) { 
        delete kind;
    }
}

OAIEmptyChangeLogSet*
OAIEmptyChangeLogSet::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIEmptyChangeLogSet::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&kind, pJson["kind"], "QString", "QString");
    
}

QString
OAIEmptyChangeLogSet::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIEmptyChangeLogSet::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(kind != nullptr && *kind != QString("")){
        toJsonValue(QString("kind"), kind, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIEmptyChangeLogSet::getClass() {
    return _class;
}
void
OAIEmptyChangeLogSet::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString*
OAIEmptyChangeLogSet::getKind() {
    return kind;
}
void
OAIEmptyChangeLogSet::setKind(QString* kind) {
    this->kind = kind;
    this->m_kind_isSet = true;
}


bool
OAIEmptyChangeLogSet::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(kind != nullptr && *kind != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
