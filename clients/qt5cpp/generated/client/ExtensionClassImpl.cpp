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


#include "ExtensionClassImpl.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

ExtensionClassImpl::ExtensionClassImpl(QString* json) {
    init();
    this->fromJson(*json);
}

ExtensionClassImpl::ExtensionClassImpl() {
    init();
}

ExtensionClassImpl::~ExtensionClassImpl() {
    this->cleanup();
}

void
ExtensionClassImpl::init() {
    _class = new QString("");
    _links = new ExtensionClassImpllinks();
    classes = new QList<QString*>();
}

void
ExtensionClassImpl::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(_links != nullptr) {
        delete _links;
    }

    if(classes != nullptr) {
        QList<QString*>* arr = classes;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete classes;
    }
}

ExtensionClassImpl*
ExtensionClassImpl::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
ExtensionClassImpl::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&_links, pJson["_links"], "ExtensionClassImpllinks", "ExtensionClassImpllinks");
    
    ::Swagger::setValue(&classes, pJson["classes"], "QList", "QString");
    
}

QString
ExtensionClassImpl::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
ExtensionClassImpl::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("_links"), _links, obj, QString("ExtensionClassImpllinks"));

    QJsonArray classesJsonArray;
    toJsonArray((QList<void*>*)classes, &classesJsonArray, "classes", "QString");
    obj->insert("classes", classesJsonArray);

    return obj;
}

QString*
ExtensionClassImpl::getClass() {
    return _class;
}
void
ExtensionClassImpl::setClass(QString* _class) {
    this->_class = _class;
}

ExtensionClassImpllinks*
ExtensionClassImpl::getLinks() {
    return _links;
}
void
ExtensionClassImpl::setLinks(ExtensionClassImpllinks* _links) {
    this->_links = _links;
}

QList<QString*>*
ExtensionClassImpl::getClasses() {
    return classes;
}
void
ExtensionClassImpl::setClasses(QList<QString*>* classes) {
    this->classes = classes;
}


}
