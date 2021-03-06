/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * BaseRemoteAccessApi.h
 *
 * 
 */

#ifndef BaseRemoteAccessApi_H_
#define BaseRemoteAccessApi_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <pistache/optional.h>

#include "DefaultCrumbIssuer.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  BaseRemoteAccessApi {
public:
    BaseRemoteAccessApi(Pistache::Address addr);
    virtual ~BaseRemoteAccessApi() {};
    void init(size_t thr);
    void start();
    void shutdown();

    const std::string base = "/";

private:
    void setupRoutes();

    void get_crumb_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void base_remote_access_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    Pistache::Http::Endpoint httpEndpoint;
    Pistache::Rest::Router router;


    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve CSRF protection token
    /// </remarks>
    virtual void get_crumb(Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* BaseRemoteAccessApi_H_ */

