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

export interface PipelineActivity {
    "class"?: string;
    "artifacts"?: Array<models.PipelineActivityartifacts>;
    "durationInMillis"?: number;
    "estimatedDurationInMillis"?: number;
    "enQueueTime"?: string;
    "endTime"?: string;
    "id"?: string;
    "organization"?: string;
    "pipeline"?: string;
    "result"?: string;
    "runSummary"?: string;
    "startTime"?: string;
    "state"?: string;
    "type"?: string;
    "commitId"?: string;
}

