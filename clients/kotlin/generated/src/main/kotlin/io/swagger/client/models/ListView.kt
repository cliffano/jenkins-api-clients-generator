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

import io.swagger.client.models.FreeStyleProject

/**
 * 
 * @param _class 
 * @param description 
 * @param jobs 
 * @param name 
 * @param url 
 */
data class ListView (
    val _class: kotlin.String? = null,
    val description: kotlin.String? = null,
    val jobs: kotlin.Array<FreeStyleProject>? = null,
    val name: kotlin.String? = null,
    val url: kotlin.String? = null
) {

}
