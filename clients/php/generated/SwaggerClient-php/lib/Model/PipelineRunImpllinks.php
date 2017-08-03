<?php
/**
 * PipelineRunImpllinks
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
 * PipelineRunImpllinks Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class PipelineRunImpllinks implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'PipelineRunImpllinks';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        'nodes' => '\Swagger\Client\Model\Link',
        'log' => '\Swagger\Client\Model\Link',
        'self' => '\Swagger\Client\Model\Link',
        'actions' => '\Swagger\Client\Model\Link',
        'steps' => '\Swagger\Client\Model\Link',
        '_class' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerFormats = [
        'nodes' => null,
        'log' => null,
        'self' => null,
        'actions' => null,
        'steps' => null,
        '_class' => null
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
        'nodes' => 'nodes',
        'log' => 'log',
        'self' => 'self',
        'actions' => 'actions',
        'steps' => 'steps',
        '_class' => '_class'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        'nodes' => 'setNodes',
        'log' => 'setLog',
        'self' => 'setSelf',
        'actions' => 'setActions',
        'steps' => 'setSteps',
        '_class' => 'setClass'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        'nodes' => 'getNodes',
        'log' => 'getLog',
        'self' => 'getSelf',
        'actions' => 'getActions',
        'steps' => 'getSteps',
        '_class' => 'getClass'
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
        $this->container['nodes'] = isset($data['nodes']) ? $data['nodes'] : null;
        $this->container['log'] = isset($data['log']) ? $data['log'] : null;
        $this->container['self'] = isset($data['self']) ? $data['self'] : null;
        $this->container['actions'] = isset($data['actions']) ? $data['actions'] : null;
        $this->container['steps'] = isset($data['steps']) ? $data['steps'] : null;
        $this->container['_class'] = isset($data['_class']) ? $data['_class'] : null;
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
     * Gets nodes
     * @return \Swagger\Client\Model\Link
     */
    public function getNodes()
    {
        return $this->container['nodes'];
    }

    /**
     * Sets nodes
     * @param \Swagger\Client\Model\Link $nodes
     * @return $this
     */
    public function setNodes($nodes)
    {
        $this->container['nodes'] = $nodes;

        return $this;
    }

    /**
     * Gets log
     * @return \Swagger\Client\Model\Link
     */
    public function getLog()
    {
        return $this->container['log'];
    }

    /**
     * Sets log
     * @param \Swagger\Client\Model\Link $log
     * @return $this
     */
    public function setLog($log)
    {
        $this->container['log'] = $log;

        return $this;
    }

    /**
     * Gets self
     * @return \Swagger\Client\Model\Link
     */
    public function getSelf()
    {
        return $this->container['self'];
    }

    /**
     * Sets self
     * @param \Swagger\Client\Model\Link $self
     * @return $this
     */
    public function setSelf($self)
    {
        $this->container['self'] = $self;

        return $this;
    }

    /**
     * Gets actions
     * @return \Swagger\Client\Model\Link
     */
    public function getActions()
    {
        return $this->container['actions'];
    }

    /**
     * Sets actions
     * @param \Swagger\Client\Model\Link $actions
     * @return $this
     */
    public function setActions($actions)
    {
        $this->container['actions'] = $actions;

        return $this;
    }

    /**
     * Gets steps
     * @return \Swagger\Client\Model\Link
     */
    public function getSteps()
    {
        return $this->container['steps'];
    }

    /**
     * Sets steps
     * @param \Swagger\Client\Model\Link $steps
     * @return $this
     */
    public function setSteps($steps)
    {
        $this->container['steps'] = $steps;

        return $this;
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


