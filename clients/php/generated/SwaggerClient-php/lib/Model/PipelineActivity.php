<?php
/**
 * PipelineActivity
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swaagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * PipelineActivity Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class PipelineActivity implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'PipelineActivity';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        '_class' => 'string',
        'artifacts' => '\Swagger\Client\Model\PipelineActivityartifacts[]',
        'duration_in_millis' => 'int',
        'estimated_duration_in_millis' => 'int',
        'en_queue_time' => 'string',
        'end_time' => 'string',
        'id' => 'string',
        'organization' => 'string',
        'pipeline' => 'string',
        'result' => 'string',
        'run_summary' => 'string',
        'start_time' => 'string',
        'state' => 'string',
        'type' => 'string',
        'commit_id' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerFormats = [
        '_class' => null,
        'artifacts' => null,
        'duration_in_millis' => null,
        'estimated_duration_in_millis' => null,
        'en_queue_time' => null,
        'end_time' => null,
        'id' => null,
        'organization' => null,
        'pipeline' => null,
        'result' => null,
        'run_summary' => null,
        'start_time' => null,
        'state' => null,
        'type' => null,
        'commit_id' => null
    ];

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = [
        '_class' => '_class',
        'artifacts' => 'artifacts',
        'duration_in_millis' => 'durationInMillis',
        'estimated_duration_in_millis' => 'estimatedDurationInMillis',
        'en_queue_time' => 'enQueueTime',
        'end_time' => 'endTime',
        'id' => 'id',
        'organization' => 'organization',
        'pipeline' => 'pipeline',
        'result' => 'result',
        'run_summary' => 'runSummary',
        'start_time' => 'startTime',
        'state' => 'state',
        'type' => 'type',
        'commit_id' => 'commitId'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        '_class' => 'setClass',
        'artifacts' => 'setArtifacts',
        'duration_in_millis' => 'setDurationInMillis',
        'estimated_duration_in_millis' => 'setEstimatedDurationInMillis',
        'en_queue_time' => 'setEnQueueTime',
        'end_time' => 'setEndTime',
        'id' => 'setId',
        'organization' => 'setOrganization',
        'pipeline' => 'setPipeline',
        'result' => 'setResult',
        'run_summary' => 'setRunSummary',
        'start_time' => 'setStartTime',
        'state' => 'setState',
        'type' => 'setType',
        'commit_id' => 'setCommitId'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        '_class' => 'getClass',
        'artifacts' => 'getArtifacts',
        'duration_in_millis' => 'getDurationInMillis',
        'estimated_duration_in_millis' => 'getEstimatedDurationInMillis',
        'en_queue_time' => 'getEnQueueTime',
        'end_time' => 'getEndTime',
        'id' => 'getId',
        'organization' => 'getOrganization',
        'pipeline' => 'getPipeline',
        'result' => 'getResult',
        'run_summary' => 'getRunSummary',
        'start_time' => 'getStartTime',
        'state' => 'getState',
        'type' => 'getType',
        'commit_id' => 'getCommitId'
    ];

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    public static function setters()
    {
        return self::$setters;
    }

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['_class'] = isset($data['_class']) ? $data['_class'] : null;
        $this->container['artifacts'] = isset($data['artifacts']) ? $data['artifacts'] : null;
        $this->container['duration_in_millis'] = isset($data['duration_in_millis']) ? $data['duration_in_millis'] : null;
        $this->container['estimated_duration_in_millis'] = isset($data['estimated_duration_in_millis']) ? $data['estimated_duration_in_millis'] : null;
        $this->container['en_queue_time'] = isset($data['en_queue_time']) ? $data['en_queue_time'] : null;
        $this->container['end_time'] = isset($data['end_time']) ? $data['end_time'] : null;
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['organization'] = isset($data['organization']) ? $data['organization'] : null;
        $this->container['pipeline'] = isset($data['pipeline']) ? $data['pipeline'] : null;
        $this->container['result'] = isset($data['result']) ? $data['result'] : null;
        $this->container['run_summary'] = isset($data['run_summary']) ? $data['run_summary'] : null;
        $this->container['start_time'] = isset($data['start_time']) ? $data['start_time'] : null;
        $this->container['state'] = isset($data['state']) ? $data['state'] : null;
        $this->container['type'] = isset($data['type']) ? $data['type'] : null;
        $this->container['commit_id'] = isset($data['commit_id']) ? $data['commit_id'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];

        return $invalid_properties;
    }

    /**
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {

        return true;
    }


    /**
     * Gets _class
     * @return string
     */
    public function getClass()
    {
        return $this->container['_class'];
    }

    /**
     * Sets _class
     * @param string $_class
     * @return $this
     */
    public function setClass($_class)
    {
        $this->container['_class'] = $_class;

        return $this;
    }

    /**
     * Gets artifacts
     * @return \Swagger\Client\Model\PipelineActivityartifacts[]
     */
    public function getArtifacts()
    {
        return $this->container['artifacts'];
    }

    /**
     * Sets artifacts
     * @param \Swagger\Client\Model\PipelineActivityartifacts[] $artifacts
     * @return $this
     */
    public function setArtifacts($artifacts)
    {
        $this->container['artifacts'] = $artifacts;

        return $this;
    }

    /**
     * Gets duration_in_millis
     * @return int
     */
    public function getDurationInMillis()
    {
        return $this->container['duration_in_millis'];
    }

    /**
     * Sets duration_in_millis
     * @param int $duration_in_millis
     * @return $this
     */
    public function setDurationInMillis($duration_in_millis)
    {
        $this->container['duration_in_millis'] = $duration_in_millis;

        return $this;
    }

    /**
     * Gets estimated_duration_in_millis
     * @return int
     */
    public function getEstimatedDurationInMillis()
    {
        return $this->container['estimated_duration_in_millis'];
    }

    /**
     * Sets estimated_duration_in_millis
     * @param int $estimated_duration_in_millis
     * @return $this
     */
    public function setEstimatedDurationInMillis($estimated_duration_in_millis)
    {
        $this->container['estimated_duration_in_millis'] = $estimated_duration_in_millis;

        return $this;
    }

    /**
     * Gets en_queue_time
     * @return string
     */
    public function getEnQueueTime()
    {
        return $this->container['en_queue_time'];
    }

    /**
     * Sets en_queue_time
     * @param string $en_queue_time
     * @return $this
     */
    public function setEnQueueTime($en_queue_time)
    {
        $this->container['en_queue_time'] = $en_queue_time;

        return $this;
    }

    /**
     * Gets end_time
     * @return string
     */
    public function getEndTime()
    {
        return $this->container['end_time'];
    }

    /**
     * Sets end_time
     * @param string $end_time
     * @return $this
     */
    public function setEndTime($end_time)
    {
        $this->container['end_time'] = $end_time;

        return $this;
    }

    /**
     * Gets id
     * @return string
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     * @param string $id
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets organization
     * @return string
     */
    public function getOrganization()
    {
        return $this->container['organization'];
    }

    /**
     * Sets organization
     * @param string $organization
     * @return $this
     */
    public function setOrganization($organization)
    {
        $this->container['organization'] = $organization;

        return $this;
    }

    /**
     * Gets pipeline
     * @return string
     */
    public function getPipeline()
    {
        return $this->container['pipeline'];
    }

    /**
     * Sets pipeline
     * @param string $pipeline
     * @return $this
     */
    public function setPipeline($pipeline)
    {
        $this->container['pipeline'] = $pipeline;

        return $this;
    }

    /**
     * Gets result
     * @return string
     */
    public function getResult()
    {
        return $this->container['result'];
    }

    /**
     * Sets result
     * @param string $result
     * @return $this
     */
    public function setResult($result)
    {
        $this->container['result'] = $result;

        return $this;
    }

    /**
     * Gets run_summary
     * @return string
     */
    public function getRunSummary()
    {
        return $this->container['run_summary'];
    }

    /**
     * Sets run_summary
     * @param string $run_summary
     * @return $this
     */
    public function setRunSummary($run_summary)
    {
        $this->container['run_summary'] = $run_summary;

        return $this;
    }

    /**
     * Gets start_time
     * @return string
     */
    public function getStartTime()
    {
        return $this->container['start_time'];
    }

    /**
     * Sets start_time
     * @param string $start_time
     * @return $this
     */
    public function setStartTime($start_time)
    {
        $this->container['start_time'] = $start_time;

        return $this;
    }

    /**
     * Gets state
     * @return string
     */
    public function getState()
    {
        return $this->container['state'];
    }

    /**
     * Sets state
     * @param string $state
     * @return $this
     */
    public function setState($state)
    {
        $this->container['state'] = $state;

        return $this;
    }

    /**
     * Gets type
     * @return string
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     * @param string $type
     * @return $this
     */
    public function setType($type)
    {
        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets commit_id
     * @return string
     */
    public function getCommitId()
    {
        return $this->container['commit_id'];
    }

    /**
     * Sets commit_id
     * @param string $commit_id
     * @return $this
     */
    public function setCommitId($commit_id)
    {
        $this->container['commit_id'] = $commit_id;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}


