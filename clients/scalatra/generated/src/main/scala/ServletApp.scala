/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


package org.openapitools.app

import org.scalatra.swagger.{ ApiInfo, SwaggerWithAuth, Swagger }
import org.scalatra.swagger.{ JacksonSwaggerBase, Swagger }
import org.scalatra.ScalatraServlet
import org.json4s.{ DefaultFormats, Formats }

class ResourcesApp(implicit protected val swagger: OpenAPIApp)
  extends ScalatraServlet with JacksonSwaggerBase {
  before() {
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
}

class OpenAPIApp extends Swagger(apiInfo = OpenAPIInfo.apiInfo, apiVersion = "1.0", swaggerVersion = Swagger.SpecVersion)

object OpenAPIInfo {
  val apiInfo = ApiInfo(
    """Swaggy Jenkins""",
    """Jenkins API clients generated from Swagger / Open API specification""",
    """http://github.com/cliffano/swaggy-jenkins""",
    """blah@cliffano.com""",
    """All rights reserved""",
    """http://apache.org/licenses/LICENSE-2.0.html""")
}