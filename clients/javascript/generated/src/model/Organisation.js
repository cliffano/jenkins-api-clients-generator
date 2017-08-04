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
* The Organisation model module.
* @module model/Organisation
* @version 0.0.2
*/
export default class Organisation {
    /**
    * Constructs a new <code>Organisation</code>.
    * @alias module:model/Organisation
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>Organisation</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/Organisation} obj Optional instance to populate.
    * @return {module:model/Organisation} The populated <code>Organisation</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Organisation();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {String} name
    */
    name = undefined;








}

