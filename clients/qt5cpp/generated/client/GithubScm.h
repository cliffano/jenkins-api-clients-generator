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
 * GithubScm.h
 * 
 * 
 */

#ifndef GithubScm_H_
#define GithubScm_H_

#include <QJsonObject>


#include "GithubScmlinks.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class GithubScm: public SWGObject {
public:
    GithubScm();
    GithubScm(QString* json);
    virtual ~GithubScm();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    GithubScm* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    GithubScmlinks* getLinks();
    void setLinks(GithubScmlinks* _links);

    QString* getCredentialId();
    void setCredentialId(QString* credential_id);

    QString* getId();
    void setId(QString* id);

    QString* getUri();
    void setUri(QString* uri);


private:
    QString* _class;
    GithubScmlinks* _links;
    QString* credential_id;
    QString* id;
    QString* uri;
};

}

#endif /* GithubScm_H_ */
