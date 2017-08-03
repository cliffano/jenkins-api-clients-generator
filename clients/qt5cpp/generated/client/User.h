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

/*
 * User.h
 * 
 * 
 */

#ifndef User_H_
#define User_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class User: public SWGObject {
public:
    User();
    User(QString* json);
    virtual ~User();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    User* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getId();
    void setId(QString* id);

    QString* getFullName();
    void setFullName(QString* full_name);

    QString* getEmail();
    void setEmail(QString* email);

    QString* getName();
    void setName(QString* name);


private:
    QString* _class;
    QString* id;
    QString* full_name;
    QString* email;
    QString* name;
};

}

#endif /* User_H_ */
