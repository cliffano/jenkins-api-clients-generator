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
* The HudsonassignedLabels model module.
* @module model/HudsonassignedLabels
* @version 0.0.2
*/
export default class HudsonassignedLabels {
    /**
    * Constructs a new <code>HudsonassignedLabels</code>.
    * @alias module:model/HudsonassignedLabels
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>HudsonassignedLabels</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/HudsonassignedLabels} obj Optional instance to populate.
    * @return {module:model/HudsonassignedLabels} The populated <code>HudsonassignedLabels</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new HudsonassignedLabels();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;








}


