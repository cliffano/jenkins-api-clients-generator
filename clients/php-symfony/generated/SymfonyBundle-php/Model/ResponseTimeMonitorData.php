<?php
/**
 * ResponseTimeMonitorData
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Server\Model
 * @author   Swagger Codegen team
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

namespace Swagger\Server\Model;

use \ArrayAccess;

/**
 * Class representing the ResponseTimeMonitorData model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class ResponseTimeMonitorData implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'ResponseTimeMonitorData';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
        'timestamp' => ['timestamp', 'int', null, 'setTimestamp', 'getTimestamp'],
        'average' => ['average', 'int', null, 'setAverage', 'getAverage'],
    ];
    

    
    /**     * @var string|null
     */
    protected $_class;

    /**     * @var int|null
     */
    protected $timestamp;

    /**     * @var int|null
     */
    protected $average;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
        $this->timestamp = isset($data['timestamp']) ? $data['timestamp'] : null;
        $this->average = isset($data['average']) ? $data['average'] : null;
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
     * The original name of the model.
     *
     * @return string
     */
    public function modelName() {
        return self::$_name;
    }

    /**
     * Array of property to mappings.
     *
     * @return array[]
     */
    public function modelAttributes() {
        
        return self::$_attributes;
    }

    /**
     * Validate all the properties in the model
     *
     * Return true if all passed.
     *
     * @return bool True if all properties are valid
     */
    public function isValid()
    {
        return true;
    }


    /**
     * Gets _class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->_class;
    }

    /**
     * Sets _class.
     *
     * @param string|null $_class
     *
     * @return $this
     */
    public function setClass($_class = null)
    {
        $this->_class = $_class;

        return $this;
    }

    /**
     * Gets timestamp.
     *
     * @return int|null
     */
    public function getTimestamp()
    {
        return $this->timestamp;
    }

    /**
     * Sets timestamp.
     *
     * @param int|null $timestamp
     *
     * @return $this
     */
    public function setTimestamp($timestamp = null)
    {
        $this->timestamp = $timestamp;

        return $this;
    }

    /**
     * Gets average.
     *
     * @return int|null
     */
    public function getAverage()
    {
        return $this->average;
    }

    /**
     * Sets average.
     *
     * @param int|null $average
     *
     * @return $this
     */
    public function setAverage($average = null)
    {
        $this->average = $average;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->$offset) ? $this->$offset : null;
    }

    /**
     * Sets value based on offset.
     * @param  string  $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        $this->$offset = null;
    }
}


