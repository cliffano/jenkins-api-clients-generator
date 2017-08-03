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
 * GithubRespositoryContainerlinks.h
 * 
 * 
 */

#ifndef GithubRespositoryContainerlinks_H_
#define GithubRespositoryContainerlinks_H_

#include <QJsonObject>


#include "Link.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class GithubRespositoryContainerlinks: public SWGObject {
public:
    GithubRespositoryContainerlinks();
    GithubRespositoryContainerlinks(QString* json);
    virtual ~GithubRespositoryContainerlinks();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    GithubRespositoryContainerlinks* fromJson(QString &jsonString);

    Link* getSelf();
    void setSelf(Link* self);

    QString* getClass();
    void setClass(QString* _class);


private:
    Link* self;
    QString* _class;
};

}

#endif /* GithubRespositoryContainerlinks_H_ */
