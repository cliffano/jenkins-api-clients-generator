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
import PipelineRun from './PipelineRun';





/**
* The PipelineRuns model module.
* @module model/PipelineRuns
* @version 0.0.2
*/
export default class PipelineRuns extends Array {
    /**
    * Constructs a new <code>PipelineRuns</code>.
    * @alias module:model/PipelineRuns
    * @class
    * @extends Array
    */

    constructor() {
        
        super();
        

        
        

        

        return this;
    }

    /**
    * Constructs a <code>PipelineRuns</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/PipelineRuns} obj Optional instance to populate.
    * @return {module:model/PipelineRuns} The populated <code>PipelineRuns</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PipelineRuns();

            ApiClient.constructFromObject(data, obj, 'PipelineRun');

            
            

        }
        return obj;
    }









}


