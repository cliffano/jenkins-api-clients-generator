/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package swagger

type PipelineFolderImpl struct {

	Class string `json:"_class,omitempty"`

	DisplayName string `json:"displayName,omitempty"`

	FullName string `json:"fullName,omitempty"`

	Name string `json:"name,omitempty"`

	Organization string `json:"organization,omitempty"`

	NumberOfFolders int32 `json:"numberOfFolders,omitempty"`

	NumberOfPipelines int32 `json:"numberOfPipelines,omitempty"`
}
