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

import * as models from './models';

export interface PipelineStepImpl {
    class?: string;

    links?: models.PipelineStepImpllinks;

    displayName?: string;

    durationInMillis?: number;

    id?: string;

    input?: models.InputStepImpl;

    result?: string;

    startTime?: string;

    state?: string;

}
