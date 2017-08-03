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
import PipelineImpllinks from './PipelineImpllinks';





/**
* The PipelineImpl model module.
* @module model/PipelineImpl
* @version 0.0.2
*/
export default class PipelineImpl {
    /**
    * Constructs a new <code>PipelineImpl</code>.
    * @alias module:model/PipelineImpl
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>PipelineImpl</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/PipelineImpl} obj Optional instance to populate.
    * @return {module:model/PipelineImpl} The populated <code>PipelineImpl</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PipelineImpl();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('displayName')) {
                obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
            }
            if (data.hasOwnProperty('estimatedDurationInMillis')) {
                obj['estimatedDurationInMillis'] = ApiClient.convertToType(data['estimatedDurationInMillis'], 'Number');
            }
            if (data.hasOwnProperty('fullName')) {
                obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
            }
            if (data.hasOwnProperty('latestRun')) {
                obj['latestRun'] = ApiClient.convertToType(data['latestRun'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('organization')) {
                obj['organization'] = ApiClient.convertToType(data['organization'], 'String');
            }
            if (data.hasOwnProperty('weatherScore')) {
                obj['weatherScore'] = ApiClient.convertToType(data['weatherScore'], 'Number');
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = PipelineImpllinks.constructFromObject(data['_links']);
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {String} displayName
    */
    displayName = undefined;
    /**
    * @member {Number} estimatedDurationInMillis
    */
    estimatedDurationInMillis = undefined;
    /**
    * @member {String} fullName
    */
    fullName = undefined;
    /**
    * @member {String} latestRun
    */
    latestRun = undefined;
    /**
    * @member {String} name
    */
    name = undefined;
    /**
    * @member {String} organization
    */
    organization = undefined;
    /**
    * @member {Number} weatherScore
    */
    weatherScore = undefined;
    /**
    * @member {module:model/PipelineImpllinks} _links
    */
    _links = undefined;








}


