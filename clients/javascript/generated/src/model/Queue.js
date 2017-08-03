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
import QueueBlockedItem from './QueueBlockedItem';





/**
* The Queue model module.
* @module model/Queue
* @version 0.0.2
*/
export default class Queue {
    /**
    * Constructs a new <code>Queue</code>.
    * @alias module:model/Queue
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>Queue</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/Queue} obj Optional instance to populate.
    * @return {module:model/Queue} The populated <code>Queue</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Queue();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('items')) {
                obj['items'] = ApiClient.convertToType(data['items'], [QueueBlockedItem]);
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {Array.<module:model/QueueBlockedItem>} items
    */
    items = undefined;








}


