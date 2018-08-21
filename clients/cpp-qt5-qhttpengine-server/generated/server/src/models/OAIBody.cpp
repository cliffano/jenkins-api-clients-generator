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


#include "OAIBody.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBody::OAIBody(QString json) {
    this->fromJson(json);
}

OAIBody::OAIBody() {
    this->init();
}

OAIBody::~OAIBody() {
    
}

void
OAIBody::init() {
    m_favorite_isSet = false;
}

void
OAIBody::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIBody::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(favorite, json[QString("favorite")]);
    
}

QString
OAIBody::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBody::asJsonObject() const {
    QJsonObject obj;
	if(m_favorite_isSet){
        obj.insert(QString("favorite"), ::OpenAPI::toJsonValue(favorite));
    }
    return obj;
}

bool
OAIBody::isFavorite() const {
    return favorite;
}
void
OAIBody::setFavorite(const bool &favorite) {
    this->favorite = favorite;
    this->m_favorite_isSet = true;
}


bool
OAIBody::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_favorite_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
