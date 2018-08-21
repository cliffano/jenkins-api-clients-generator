/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.model.ComputerSet
import org.openapitools.client.model.DefaultCrumbIssuer
import org.openapitools.client.model.FreeStyleBuild
import org.openapitools.client.model.FreeStyleProject
import org.openapitools.client.model.Hudson
import org.openapitools.client.model.ListView
import org.openapitools.client.model.Queue
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object RemoteAccessApi {

  /**
   * Retrieve computer details
   * 
   * Expected answers:
   *   code 200 : ComputerSet (Successfully retrieved computer details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param depth Recursion depth in response model
   */
  def getComputer(depth: Int)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/computer/api/json", "application/json")
      .withCredentials(basicAuth)
      .withQueryParam("depth", depth)
      .withSuccessResponse[ComputerSet](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Retrieve CSRF protection token
   * 
   * Expected answers:
   *   code 200 : DefaultCrumbIssuer (Successfully retrieved CSRF protection token)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   */
  def getCrumb()(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/crumbIssuer/api/json", "application/json")
      .withCredentials(basicAuth)
      .withSuccessResponse[DefaultCrumbIssuer](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Retrieve Jenkins details
   * 
   * Expected answers:
   *   code 200 : Hudson (Successfully retrieved Jenkins details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   */
  def getJenkins()(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/api/json", "application/json")
      .withCredentials(basicAuth)
      .withSuccessResponse[Hudson](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Retrieve job details
   * 
   * Expected answers:
   *   code 200 : FreeStyleProject (Successfully retrieved job details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   */
  def getJob(name: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/job/{name}/api/json", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withSuccessResponse[FreeStyleProject](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Retrieve job configuration
   * 
   * Expected answers:
   *   code 200 : String (Successfully retrieved job configuration in config.xml format)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   */
  def getJobConfig(name: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/job/{name}/config.xml", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withSuccessResponse[String](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Retrieve job's last build details
   * 
   * Expected answers:
   *   code 200 : FreeStyleBuild (Successfully retrieved job's last build details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   */
  def getJobLastBuild(name: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/job/{name}/lastBuild/api/json", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withSuccessResponse[FreeStyleBuild](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Retrieve job's build progressive text output
   * 
   * Expected answers:
   *   code 200 :  (Successfully retrieved job's build progressive text output)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param number Build number
   * @param start Starting point of progressive text output
   */
  def getJobProgressiveText(name: String, number: String, start: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/job/{name}/{number}/logText/progressiveText", "application/json")
      .withCredentials(basicAuth)
      .withQueryParam("start", start)
      .withPathParam("name", name)
      .withPathParam("number", number)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Retrieve queue details
   * 
   * Expected answers:
   *   code 200 : Queue (Successfully retrieved queue details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   */
  def getQueue()(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/queue/api/json", "application/json")
      .withCredentials(basicAuth)
      .withSuccessResponse[Queue](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Retrieve queued item details
   * 
   * Expected answers:
   *   code 200 : Queue (Successfully retrieved queued item details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param number Queue number
   */
  def getQueueItem(number: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/queue/item/{number}/api/json", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("number", number)
      .withSuccessResponse[Queue](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Retrieve view details
   * 
   * Expected answers:
   *   code 200 : ListView (Successfully retrieved view details)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (View cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the view
   */
  def getView(name: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/view/{name}/api/json", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withSuccessResponse[ListView](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Retrieve view configuration
   * 
   * Expected answers:
   *   code 200 : String (Successfully retrieved view configuration in config.xml format)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (View cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the view
   */
  def getViewConfig(name: String)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.GET, "http://localhost", "/view/{name}/config.xml", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withSuccessResponse[String](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Retrieve Jenkins headers
   * 
   * Expected answers:
   *   code 200 :  (Successfully retrieved Jenkins headers)
   *              Headers :
   *                x-jenkins - Jenkins version number
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   */
  def headJenkins()(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.HEAD, "http://localhost", "/api/json", "application/json")
      .withCredentials(basicAuth)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      
  object HeadJenkinsHeaders { 
    def xJenkins(r: ApiReturnWithHeaders) = r.getStringHeader("x-jenkins")
  }
  /**
   * Create a new job using job configuration, or copied from an existing job
   * 
   * Expected answers:
   *   code 200 :  (Successfully created a new job)
   *   code 400 : String (An error has occurred - error message is embedded inside the HTML response)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the new job
   * @param from Existing job to copy from
   * @param mode Set to 'copy' for copying an existing job
   * @param jenkinsCrumb CSRF protection token
   * @param contentType Content type header application/xml
   * @param body Job configuration in config.xml format
   */
  def postCreateItem(name: String, from: Option[String] = None, mode: Option[String] = None, jenkinsCrumb: Option[String] = None, contentType: Option[String] = None, body: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/createItem", "application/json")
      .withCredentials(basicAuth)
      .withBody(body)
      .withQueryParam("name", name)
      .withQueryParam("from", from)
      .withQueryParam("mode", mode)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withHeaderParam("Content-Type", contentType)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[String](400)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Create a new view using view configuration
   * 
   * Expected answers:
   *   code 200 :  (Successfully created the view)
   *   code 400 : String (An error has occurred - error message is embedded inside the HTML response)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the new view
   * @param jenkinsCrumb CSRF protection token
   * @param contentType Content type header application/xml
   * @param body View configuration in config.xml format
   */
  def postCreateView(name: String, jenkinsCrumb: Option[String] = None, contentType: Option[String] = None, body: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/createView", "application/json")
      .withCredentials(basicAuth)
      .withBody(body)
      .withQueryParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withHeaderParam("Content-Type", contentType)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[String](400)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
        /**
   * Build a job
   * 
   * Expected answers:
   *   code 200 :  (Successfully built the job (backward compatibility for older versions of Jenkins))
   *   code 201 :  (Successfully built the job)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param json 
   * @param token 
   * @param jenkinsCrumb CSRF protection token
   */
  def postJobBuild(name: String, json: String, token: Option[String] = None, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/job/{name}/build", "application/json")
      .withCredentials(basicAuth)
      .withQueryParam("json", json)
      .withQueryParam("token", token)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](201)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Update job configuration
   * 
   * Expected answers:
   *   code 200 :  (Successfully retrieved job configuration in config.xml format)
   *   code 400 : String (An error has occurred - error message is embedded inside the HTML response)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param body Job configuration in config.xml format
   * @param jenkinsCrumb CSRF protection token
   */
  def postJobConfig(name: String, body: String, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/job/{name}/config.xml", "application/json")
      .withCredentials(basicAuth)
      .withBody(body)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[String](400)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Delete a job
   * 
   * Expected answers:
   *   code 200 :  (Successfully deleted the job)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param jenkinsCrumb CSRF protection token
   */
  def postJobDelete(name: String, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/job/{name}/doDelete", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Disable a job
   * 
   * Expected answers:
   *   code 200 :  (Successfully disabled the job)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param jenkinsCrumb CSRF protection token
   */
  def postJobDisable(name: String, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/job/{name}/disable", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Enable a job
   * 
   * Expected answers:
   *   code 200 :  (Successfully enabled the job)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param jenkinsCrumb CSRF protection token
   */
  def postJobEnable(name: String, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/job/{name}/enable", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Stop a job
   * 
   * Expected answers:
   *   code 200 :  (Successfully stopped the job)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (Job cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the job
   * @param jenkinsCrumb CSRF protection token
   */
  def postJobLastBuildStop(name: String, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/job/{name}/lastBuild/stop", "application/json")
      .withCredentials(basicAuth)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
        /**
   * Update view configuration
   * 
   * Expected answers:
   *   code 200 :  (Successfully updated view configuration)
   *   code 400 : String (An error has occurred - error message is embedded inside the HTML response)
   *   code 401 :  (Authentication failed - incorrect username and/or password)
   *   code 403 :  (Jenkins requires authentication - please set username and password)
   *   code 404 :  (View cannot be found on Jenkins instance)
   * 
   * Available security schemes:
   *   jenkins_auth (http)
   * 
   * @param name Name of the view
   * @param body View configuration in config.xml format
   * @param jenkinsCrumb CSRF protection token
   */
  def postViewConfig(name: String, body: String, jenkinsCrumb: Option[String] = None)(implicit basicAuth: BasicCredentials): ApiRequest[Unit] =
    ApiRequest[Unit](ApiMethods.POST, "http://localhost", "/view/{name}/config.xml", "application/json")
      .withCredentials(basicAuth)
      .withBody(body)
      .withPathParam("name", name)
      .withHeaderParam("Jenkins-Crumb", jenkinsCrumb)
      .withSuccessResponse[Unit](200)
      .withErrorResponse[String](400)
      .withErrorResponse[Unit](401)
      .withErrorResponse[Unit](403)
      .withErrorResponse[Unit](404)
      

}
