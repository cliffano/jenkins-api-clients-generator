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

import { InputStepImpllinks } from './inputStepImpllinks';
import { StringParameterDefinition } from './stringParameterDefinition';


export interface InputStepImpl {
    class?: string;

    links?: InputStepImpllinks;

    id?: string;

    message?: string;

    ok?: string;

    parameters?: Array<StringParameterDefinition>;

    submitter?: string;

}
