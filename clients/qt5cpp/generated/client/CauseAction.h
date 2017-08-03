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
 * CauseAction.h
 * 
 * 
 */

#ifndef CauseAction_H_
#define CauseAction_H_

#include <QJsonObject>


#include "CauseUserIdCause.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class CauseAction: public SWGObject {
public:
    CauseAction();
    CauseAction(QString* json);
    virtual ~CauseAction();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    CauseAction* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QList<CauseUserIdCause*>* getCauses();
    void setCauses(QList<CauseUserIdCause*>* causes);


private:
    QString* _class;
    QList<CauseUserIdCause*>* causes;
};

}

#endif /* CauseAction_H_ */
