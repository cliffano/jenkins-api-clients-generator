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

import { PipelineRunNodeedges } from './pipelineRunNodeedges';


export interface PipelineRunNode {
    class?: string;

    displayName?: string;

    durationInMillis?: number;

    edges?: Array<PipelineRunNodeedges>;

    id?: string;

    result?: string;

    startTime?: string;

    state?: string;

}
