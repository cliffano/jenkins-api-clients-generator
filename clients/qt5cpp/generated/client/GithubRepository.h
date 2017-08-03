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
 * GithubRepository.h
 * 
 * 
 */

#ifndef GithubRepository_H_
#define GithubRepository_H_

#include <QJsonObject>


#include "GithubRepositorylinks.h"
#include "GithubRepositorypermissions.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class GithubRepository: public SWGObject {
public:
    GithubRepository();
    GithubRepository(QString* json);
    virtual ~GithubRepository();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    GithubRepository* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    GithubRepositorylinks* getLinks();
    void setLinks(GithubRepositorylinks* _links);

    QString* getDefaultBranch();
    void setDefaultBranch(QString* default_branch);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getName();
    void setName(QString* name);

    GithubRepositorypermissions* getPermissions();
    void setPermissions(GithubRepositorypermissions* permissions);

    bool getPrivate();
    void setPrivate(bool private);

    QString* getFullName();
    void setFullName(QString* full_name);


private:
    QString* _class;
    GithubRepositorylinks* _links;
    QString* default_branch;
    QString* description;
    QString* name;
    GithubRepositorypermissions* permissions;
    bool private;
    QString* full_name;
};

}

#endif /* GithubRepository_H_ */
