/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class InputStepImpl (
  `class`: Option[String],
  links: Option[InputStepImpllinks],
  id: Option[String],
  message: Option[String],
  ok: Option[String],
  parameters: Option[Seq[StringParameterDefinition]],
  submitter: Option[String]
) extends ApiModel


