<?php
/**
 * ComputerSet
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
use Swagger\Server\Model\HudsonMasterComputer;

/**
 * Class representing the ComputerSet model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class ComputerSet implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'ComputerSet';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
        'busy_executors' => ['busyExecutors', 'int', null, 'setBusyExecutors', 'getBusyExecutors'],
        'computer' => ['computer', 'Swagger\Server\Model\HudsonMasterComputer[]', null, 'setComputer', 'getComputer'],
        'display_name' => ['displayName', 'string', null, 'setDisplayName', 'getDisplayName'],
        'total_executors' => ['totalExecutors', 'int', null, 'setTotalExecutors', 'getTotalExecutors'],
    ];
    

    
    /**     * @var string|null
     */
    protected $_class;

    /**     * @var int|null
     */
    protected $busy_executors;

    /**     * @var HudsonMasterComputer[]|null
     */
    protected $computer;

    /**     * @var string|null
     */
    protected $display_name;

    /**     * @var int|null
     */
    protected $total_executors;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
        $this->busy_executors = isset($data['busy_executors']) ? $data['busy_executors'] : null;
        $this->computer = isset($data['computer']) ? $data['computer'] : null;
        $this->display_name = isset($data['display_name']) ? $data['display_name'] : null;
        $this->total_executors = isset($data['total_executors']) ? $data['total_executors'] : null;
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
     * Gets busy_executors.
     *
     * @return int|null
     */
    public function getBusyExecutors()
    {
        return $this->busy_executors;
    }

    /**
     * Sets busy_executors.
     *
     * @param int|null $busy_executors
     *
     * @return $this
     */
    public function setBusyExecutors($busy_executors = null)
    {
        $this->busy_executors = $busy_executors;

        return $this;
    }

    /**
     * Gets computer.
     *
     * @return HudsonMasterComputer[]|null
     */
    public function getComputer()
    {
        return $this->computer;
    }

    /**
     * Sets computer.
     *
     * @param HudsonMasterComputer[]|null $computer
     *
     * @return $this
     */
    public function setComputer(array $computer = null)
    {
        $this->computer = $computer;

        return $this;
    }

    /**
     * Gets display_name.
     *
     * @return string|null
     */
    public function getDisplayName()
    {
        return $this->display_name;
    }

    /**
     * Sets display_name.
     *
     * @param string|null $display_name
     *
     * @return $this
     */
    public function setDisplayName($display_name = null)
    {
        $this->display_name = $display_name;

        return $this;
    }

    /**
     * Gets total_executors.
     *
     * @return int|null
     */
    public function getTotalExecutors()
    {
        return $this->total_executors;
    }

    /**
     * Sets total_executors.
     *
     * @param int|null $total_executors
     *
     * @return $this
     */
    public function setTotalExecutors($total_executors = null)
    {
        $this->total_executors = $total_executors;

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


