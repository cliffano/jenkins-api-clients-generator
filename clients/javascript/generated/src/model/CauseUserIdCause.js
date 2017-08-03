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
 *
 */


import ApiClient from '../ApiClient';





/**
* The CauseUserIdCause model module.
* @module model/CauseUserIdCause
* @version 0.0.2
*/
export default class CauseUserIdCause {
    /**
    * Constructs a new <code>CauseUserIdCause</code>.
    * @alias module:model/CauseUserIdCause
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>CauseUserIdCause</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/CauseUserIdCause} obj Optional instance to populate.
    * @return {module:model/CauseUserIdCause} The populated <code>CauseUserIdCause</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CauseUserIdCause();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('shortDescription')) {
                obj['shortDescription'] = ApiClient.convertToType(data['shortDescription'], 'String');
            }
            if (data.hasOwnProperty('userId')) {
                obj['userId'] = ApiClient.convertToType(data['userId'], 'String');
            }
            if (data.hasOwnProperty('userName')) {
                obj['userName'] = ApiClient.convertToType(data['userName'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {String} shortDescription
    */
    shortDescription = undefined;
    /**
    * @member {String} userId
    */
    userId = undefined;
    /**
    * @member {String} userName
    */
    userName = undefined;








}


