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

package io.swagger.client.model


case class PipelineStepImpl (
  _class: Option[String],
  links: Option[PipelineStepImpllinks],
  displayName: Option[String],
  durationInMillis: Option[Integer],
  id: Option[String],
  input: Option[InputStepImpl],
  result: Option[String],
  startTime: Option[String],
  state: Option[String]
)

