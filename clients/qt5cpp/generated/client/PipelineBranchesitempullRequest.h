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
 * PipelineBranchesitempullRequest.h
 * 
 * 
 */

#ifndef PipelineBranchesitempullRequest_H_
#define PipelineBranchesitempullRequest_H_

#include <QJsonObject>


#include "PipelineBranchesitempullRequestlinks.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class PipelineBranchesitempullRequest: public SWGObject {
public:
    PipelineBranchesitempullRequest();
    PipelineBranchesitempullRequest(QString* json);
    virtual ~PipelineBranchesitempullRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineBranchesitempullRequest* fromJson(QString &jsonString);

    PipelineBranchesitempullRequestlinks* getLinks();
    void setLinks(PipelineBranchesitempullRequestlinks* _links);

    QString* getAuthor();
    void setAuthor(QString* author);

    QString* getId();
    void setId(QString* id);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getClass();
    void setClass(QString* _class);


private:
    PipelineBranchesitempullRequestlinks* _links;
    QString* author;
    QString* id;
    QString* title;
    QString* url;
    QString* _class;
};

}

#endif /* PipelineBranchesitempullRequest_H_ */
