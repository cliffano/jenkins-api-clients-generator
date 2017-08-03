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

type FreeStyleBuild struct {

	Class string `json:"_class,omitempty"`

	Number int32 `json:"number,omitempty"`

	Url string `json:"url,omitempty"`

	Actions []CauseAction `json:"actions,omitempty"`

	Building bool `json:"building,omitempty"`

	Description string `json:"description,omitempty"`

	DisplayName string `json:"displayName,omitempty"`

	Duration int32 `json:"duration,omitempty"`

	EstimatedDuration int32 `json:"estimatedDuration,omitempty"`

	Executor string `json:"executor,omitempty"`

	FullDisplayName string `json:"fullDisplayName,omitempty"`

	Id string `json:"id,omitempty"`

	KeepLog bool `json:"keepLog,omitempty"`

	QueueId int32 `json:"queueId,omitempty"`

	Result string `json:"result,omitempty"`

	Timestamp int32 `json:"timestamp,omitempty"`

	BuiltOn string `json:"builtOn,omitempty"`

	ChangeSet *EmptyChangeLogSet `json:"changeSet,omitempty"`
}
