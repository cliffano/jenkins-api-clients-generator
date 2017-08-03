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


package com.wordnik.client.model


case class MultibranchPipeline (
  displayName: Option[String],
  estimatedDurationInMillis: Option[Int],
  latestRun: Option[String],
  name: Option[String],
  organization: Option[String],
  weatherScore: Option[Int],
  branchNames: Option[List[String]],
  numberOfFailingBranches: Option[Int],
  numberOfFailingPullRequests: Option[Int],
  numberOfSuccessfulBranches: Option[Int],
  numberOfSuccessfulPullRequests: Option[Int],
  totalNumberOfBranches: Option[Int],
  totalNumberOfPullRequests: Option[Int],
  _class: Option[String]
)
