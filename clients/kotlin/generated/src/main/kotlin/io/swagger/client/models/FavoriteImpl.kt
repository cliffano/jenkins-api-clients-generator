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

import io.swagger.client.models.FavoriteImpllinks
import io.swagger.client.models.PipelineImpl

/**
 * 
 * @param _class 
 * @param _links 
 * @param item 
 */
data class FavoriteImpl (
    val _class: kotlin.String? = null,
    val _links: FavoriteImpllinks? = null,
    val item: PipelineImpl? = null
) {

}
