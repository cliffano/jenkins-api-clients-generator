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
 * OAIInputStepImpllinks.h
 *
 * 
 */

#ifndef OAIInputStepImpllinks_H
#define OAIInputStepImpllinks_H

#include <QJsonObject>


#include "OAILink.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIInputStepImpllinks: public OAIObject {
public:
    OAIInputStepImpllinks();
    OAIInputStepImpllinks(QString json);
    ~OAIInputStepImpllinks() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAILink getSelf() const;
    void setSelf(const OAILink &self);

    QString getClass() const;
    void setClass(const QString &_class);

    virtual bool isSet() const override;

private:
    OAILink self;
    bool m_self_isSet;

    QString _class;
    bool m__class_isSet;

};

}

#endif // OAIInputStepImpllinks_H
