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
 * AllView.h
 * 
 * 
 */

#ifndef AllView_H_
#define AllView_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class AllView: public SWGObject {
public:
    AllView();
    AllView(QString* json);
    virtual ~AllView();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    AllView* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getName();
    void setName(QString* name);

    QString* getUrl();
    void setUrl(QString* url);


private:
    QString* _class;
    QString* name;
    QString* url;
};

}

#endif /* AllView_H_ */
