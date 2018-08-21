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

package io.swagger.client.model
import play.api.libs.json._

case class GithubContent (
                  name: Option[String],
                  sha: Option[String],
                  `class`: Option[String],
                  repo: Option[String],
                  size: Option[Int],
                  owner: Option[String],
                  `path`: Option[String],
                  base64Data: Option[String]
)

object GithubContent {
implicit val format: Format[GithubContent] = Json.format
}
