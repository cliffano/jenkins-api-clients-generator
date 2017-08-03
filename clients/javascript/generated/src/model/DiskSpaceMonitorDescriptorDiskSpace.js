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
* The DiskSpaceMonitorDescriptorDiskSpace model module.
* @module model/DiskSpaceMonitorDescriptorDiskSpace
* @version 0.0.2
*/
export default class DiskSpaceMonitorDescriptorDiskSpace {
    /**
    * Constructs a new <code>DiskSpaceMonitorDescriptorDiskSpace</code>.
    * @alias module:model/DiskSpaceMonitorDescriptorDiskSpace
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>DiskSpaceMonitorDescriptorDiskSpace</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/DiskSpaceMonitorDescriptorDiskSpace} obj Optional instance to populate.
    * @return {module:model/DiskSpaceMonitorDescriptorDiskSpace} The populated <code>DiskSpaceMonitorDescriptorDiskSpace</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new DiskSpaceMonitorDescriptorDiskSpace();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Number');
            }
            if (data.hasOwnProperty('path')) {
                obj['path'] = ApiClient.convertToType(data['path'], 'String');
            }
            if (data.hasOwnProperty('size')) {
                obj['size'] = ApiClient.convertToType(data['size'], 'Number');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {Number} timestamp
    */
    timestamp = undefined;
    /**
    * @member {String} path
    */
    path = undefined;
    /**
    * @member {Number} size
    */
    size = undefined;








}


