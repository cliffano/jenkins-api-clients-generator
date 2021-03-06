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
 * OAIUserFavorites.h
 *
 * 
 */

#ifndef OAIUserFavorites_H
#define OAIUserFavorites_H

#include <QJsonObject>


#include "OAIFavoriteImpl.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIUserFavorites: public OAIObject {
public:
    OAIUserFavorites();
    OAIUserFavorites(QString json);
    ~OAIUserFavorites() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;

private:
};

}

#endif // OAIUserFavorites_H
