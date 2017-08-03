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
import Link from './Link';





/**
* The PipelineRunImpllinks model module.
* @module model/PipelineRunImpllinks
* @version 0.0.2
*/
export default class PipelineRunImpllinks {
    /**
    * Constructs a new <code>PipelineRunImpllinks</code>.
    * @alias module:model/PipelineRunImpllinks
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>PipelineRunImpllinks</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/PipelineRunImpllinks} obj Optional instance to populate.
    * @return {module:model/PipelineRunImpllinks} The populated <code>PipelineRunImpllinks</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PipelineRunImpllinks();

            
            
            

            if (data.hasOwnProperty('nodes')) {
                obj['nodes'] = Link.constructFromObject(data['nodes']);
            }
            if (data.hasOwnProperty('log')) {
                obj['log'] = Link.constructFromObject(data['log']);
            }
            if (data.hasOwnProperty('self')) {
                obj['self'] = Link.constructFromObject(data['self']);
            }
            if (data.hasOwnProperty('actions')) {
                obj['actions'] = Link.constructFromObject(data['actions']);
            }
            if (data.hasOwnProperty('steps')) {
                obj['steps'] = Link.constructFromObject(data['steps']);
            }
            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {module:model/Link} nodes
    */
    nodes = undefined;
    /**
    * @member {module:model/Link} log
    */
    log = undefined;
    /**
    * @member {module:model/Link} self
    */
    self = undefined;
    /**
    * @member {module:model/Link} actions
    */
    actions = undefined;
    /**
    * @member {module:model/Link} steps
    */
    steps = undefined;
    /**
    * @member {String} _class
    */
    _class = undefined;








}


