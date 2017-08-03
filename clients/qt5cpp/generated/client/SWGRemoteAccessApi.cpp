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

#include "SWGRemoteAccessApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {

SWGRemoteAccessApi::SWGRemoteAccessApi() {}

SWGRemoteAccessApi::~SWGRemoteAccessApi() {}

SWGRemoteAccessApi::SWGRemoteAccessApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGRemoteAccessApi::getComputer(qint32 depth) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/computer/api/json");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("depth"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(depth)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getComputerCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getComputerCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    ComputerSet* output = static_cast<ComputerSet*>(create(json, QString("ComputerSet")));
    worker->deleteLater();

    emit getComputerSignal(output);
    emit getComputerSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getCrumb() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/crumbIssuer/api/json");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getCrumbCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getCrumbCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    DefaultCrumbIssuer* output = static_cast<DefaultCrumbIssuer*>(create(json, QString("DefaultCrumbIssuer")));
    worker->deleteLater();

    emit getCrumbSignal(output);
    emit getCrumbSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getJenkins() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/json");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getJenkinsCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getJenkinsCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    Hudson* output = static_cast<Hudson*>(create(json, QString("Hudson")));
    worker->deleteLater();

    emit getJenkinsSignal(output);
    emit getJenkinsSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getJob(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/api/json");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getJobCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getJobCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    FreeStyleProject* output = static_cast<FreeStyleProject*>(create(json, QString("FreeStyleProject")));
    worker->deleteLater();

    emit getJobSignal(output);
    emit getJobSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getJobConfig(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getJobConfigCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getJobConfigCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    worker->deleteLater();

    emit getJobConfigSignal(output);
    emit getJobConfigSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getJobLastBuild(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/lastBuild/api/json");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getJobLastBuildCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getJobLastBuildCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    FreeStyleBuild* output = static_cast<FreeStyleBuild*>(create(json, QString("FreeStyleBuild")));
    worker->deleteLater();

    emit getJobLastBuildSignal(output);
    emit getJobLastBuildSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getJobProgressiveText(QString* name, QString* number, QString* start) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/{number}/logText/progressiveText");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));
    QString numberPathParam("{"); numberPathParam.append("number").append("}");
    fullPath.replace(numberPathParam, stringValue(number));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("start"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(start)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getJobProgressiveTextCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getJobProgressiveTextCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit getJobProgressiveTextSignal();
    emit getJobProgressiveTextSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::getQueue() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/queue/api/json");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getQueueCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getQueueCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    Queue* output = static_cast<Queue*>(create(json, QString("Queue")));
    worker->deleteLater();

    emit getQueueSignal(output);
    emit getQueueSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getQueueItem(QString* number) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/queue/item/{number}/api/json");

    QString numberPathParam("{"); numberPathParam.append("number").append("}");
    fullPath.replace(numberPathParam, stringValue(number));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getQueueItemCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getQueueItemCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    Queue* output = static_cast<Queue*>(create(json, QString("Queue")));
    worker->deleteLater();

    emit getQueueItemSignal(output);
    emit getQueueItemSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getView(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/view/{name}/api/json");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getViewCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getViewCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    ListView* output = static_cast<ListView*>(create(json, QString("ListView")));
    worker->deleteLater();

    emit getViewSignal(output);
    emit getViewSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::getViewConfig(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/view/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::getViewConfigCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::getViewConfigCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }


    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    worker->deleteLater();

    emit getViewConfigSignal(output);
    emit getViewConfigSignalE(output, error_type, error_str);
}

void
SWGRemoteAccessApi::headJenkins() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/json");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "HEAD");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::headJenkinsCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::headJenkinsCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit headJenkinsSignal();
    emit headJenkinsSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postCreateItem(QString* name, QString* from, QString* mode, QString* body, QString* jenkins_crumb, QString* content_type) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/createItem");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("from"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(from)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("mode"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mode)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");


    QString output = body.asJson();
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }
    if (content_type != nullptr) {
        input.headers.insert("Content-Type", "content_type");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postCreateItemCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postCreateItemCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postCreateItemSignal();
    emit postCreateItemSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postCreateView(QString* name, QString* body, QString* jenkins_crumb, QString* content_type) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/createView");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");


    QString output = body.asJson();
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }
    if (content_type != nullptr) {
        input.headers.insert("Content-Type", "content_type");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postCreateViewCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postCreateViewCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postCreateViewSignal();
    emit postCreateViewSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postJobBuild(QString* name, QString* json, QString* token, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/build");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("json"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(json)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("token"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(token)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postJobBuildCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postJobBuildCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postJobBuildSignal();
    emit postJobBuildSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postJobConfig(QString* name, QString* body, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");


    QString output = body.asJson();
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postJobConfigCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postJobConfigCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postJobConfigSignal();
    emit postJobConfigSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postJobDelete(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/doDelete");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postJobDeleteCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postJobDeleteCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postJobDeleteSignal();
    emit postJobDeleteSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postJobDisable(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/disable");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postJobDisableCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postJobDisableCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postJobDisableSignal();
    emit postJobDisableSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postJobEnable(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/enable");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postJobEnableCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postJobEnableCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postJobEnableSignal();
    emit postJobEnableSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postJobLastBuildStop(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/lastBuild/stop");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postJobLastBuildStopCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postJobLastBuildStopCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postJobLastBuildStopSignal();
    emit postJobLastBuildStopSignalE(error_type, error_str);
}

void
SWGRemoteAccessApi::postViewConfig(QString* name, QString* body, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/view/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");


    QString output = body.asJson();
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGRemoteAccessApi::postViewConfigCallback);

    worker->execute(&input);
}

void
SWGRemoteAccessApi::postViewConfigCallback(HttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    emit postViewConfigSignal();
    emit postViewConfigSignalE(error_type, error_str);
}


}
