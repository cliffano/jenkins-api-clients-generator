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
package io.swagger.client.models

import io.swagger.client.models.InputStepImpllinks
import io.swagger.client.models.StringParameterDefinition

/**
 * 
 * @param _class 
 * @param _links 
 * @param id 
 * @param message 
 * @param ok 
 * @param parameters 
 * @param submitter 
 */
data class InputStepImpl (
    val _class: kotlin.String? = null,
    val _links: InputStepImpllinks? = null,
    val id: kotlin.String? = null,
    val message: kotlin.String? = null,
    val ok: kotlin.String? = null,
    val parameters: kotlin.Array<StringParameterDefinition>? = null,
    val submitter: kotlin.String? = null
) {

}
