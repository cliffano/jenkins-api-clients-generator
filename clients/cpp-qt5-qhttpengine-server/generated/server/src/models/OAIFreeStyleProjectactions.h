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

/*
 * OAIFreeStyleProjectactions.h
 *
 * 
 */

#ifndef OAIFreeStyleProjectactions_H
#define OAIFreeStyleProjectactions_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIFreeStyleProjectactions: public OAIObject {
public:
    OAIFreeStyleProjectactions();
    OAIFreeStyleProjectactions(QString json);
    ~OAIFreeStyleProjectactions() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

};

}

#endif // OAIFreeStyleProjectactions_H
