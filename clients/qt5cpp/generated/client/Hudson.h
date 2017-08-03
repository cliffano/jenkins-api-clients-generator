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
 * Hudson.h
 * 
 * 
 */

#ifndef Hudson_H_
#define Hudson_H_

#include <QJsonObject>


#include "AllView.h"
#include "FreeStyleProject.h"
#include "HudsonassignedLabels.h"
#include "UnlabeledLoadStatistics.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class Hudson: public SWGObject {
public:
    Hudson();
    Hudson(QString* json);
    virtual ~Hudson();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    Hudson* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QList<HudsonassignedLabels*>* getAssignedLabels();
    void setAssignedLabels(QList<HudsonassignedLabels*>* assigned_labels);

    QString* getMode();
    void setMode(QString* mode);

    QString* getNodeDescription();
    void setNodeDescription(QString* node_description);

    QString* getNodeName();
    void setNodeName(QString* node_name);

    qint32 getNumExecutors();
    void setNumExecutors(qint32 num_executors);

    QString* getDescription();
    void setDescription(QString* description);

    QList<FreeStyleProject*>* getJobs();
    void setJobs(QList<FreeStyleProject*>* jobs);

    AllView* getPrimaryView();
    void setPrimaryView(AllView* primary_view);

    bool getQuietingDown();
    void setQuietingDown(bool quieting_down);

    qint32 getSlaveAgentPort();
    void setSlaveAgentPort(qint32 slave_agent_port);

    UnlabeledLoadStatistics* getUnlabeledLoad();
    void setUnlabeledLoad(UnlabeledLoadStatistics* unlabeled_load);

    bool getUseCrumbs();
    void setUseCrumbs(bool use_crumbs);

    bool getUseSecurity();
    void setUseSecurity(bool use_security);

    QList<AllView*>* getViews();
    void setViews(QList<AllView*>* views);


private:
    QString* _class;
    QList<HudsonassignedLabels*>* assigned_labels;
    QString* mode;
    QString* node_description;
    QString* node_name;
    qint32 num_executors;
    QString* description;
    QList<FreeStyleProject*>* jobs;
    AllView* primary_view;
    bool quieting_down;
    qint32 slave_agent_port;
    UnlabeledLoadStatistics* unlabeled_load;
    bool use_crumbs;
    bool use_security;
    QList<AllView*>* views;
};

}

#endif /* Hudson_H_ */
