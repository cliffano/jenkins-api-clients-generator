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

type HudsonMasterComputerexecutors struct {

	CurrentExecutable *FreeStyleBuild `json:"currentExecutable,omitempty"`

	Idle bool `json:"idle,omitempty"`

	LikelyStuck bool `json:"likelyStuck,omitempty"`

	Number int32 `json:"number,omitempty"`

	Progress int32 `json:"progress,omitempty"`

	Class string `json:"_class,omitempty"`
}
