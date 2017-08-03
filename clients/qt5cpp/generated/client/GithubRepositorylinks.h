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
 * GithubRepositorylinks.h
 * 
 * 
 */

#ifndef GithubRepositorylinks_H_
#define GithubRepositorylinks_H_

#include <QJsonObject>


#include "Link.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class GithubRepositorylinks: public SWGObject {
public:
    GithubRepositorylinks();
    GithubRepositorylinks(QString* json);
    virtual ~GithubRepositorylinks();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    GithubRepositorylinks* fromJson(QString &jsonString);

    Link* getSelf();
    void setSelf(Link* self);

    QString* getClass();
    void setClass(QString* _class);


private:
    Link* self;
    QString* _class;
};

}

#endif /* GithubRepositorylinks_H_ */
