<?php
/**
 * PipelineImpllinks
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
use Swagger\Server\Model\Link;

/**
 * Class representing the PipelineImpllinks model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class PipelineImpllinks implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'PipelineImpllinks';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        'runs' => ['runs', 'Swagger\Server\Model\Link', null, 'setRuns', 'getRuns'],
        'self' => ['self', 'Swagger\Server\Model\Link', null, 'setSelf', 'getSelf'],
        'queue' => ['queue', 'Swagger\Server\Model\Link', null, 'setQueue', 'getQueue'],
        'actions' => ['actions', 'Swagger\Server\Model\Link', null, 'setActions', 'getActions'],
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
    ];
    

    
    /**     * @var Link|null
     */
    protected $runs;

    /**     * @var Link|null
     */
    protected $self;

    /**     * @var Link|null
     */
    protected $queue;

    /**     * @var Link|null
     */
    protected $actions;

    /**     * @var string|null
     */
    protected $_class;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->runs = isset($data['runs']) ? $data['runs'] : null;
        $this->self = isset($data['self']) ? $data['self'] : null;
        $this->queue = isset($data['queue']) ? $data['queue'] : null;
        $this->actions = isset($data['actions']) ? $data['actions'] : null;
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
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
     * Gets runs.
     *
     * @return Link|null
     */
    public function getRuns()
    {
        return $this->runs;
    }

    /**
     * Sets runs.
     *
     * @param Link|null $runs
     *
     * @return $this
     */
    public function setRuns(Link $runs = null)
    {
        $this->runs = $runs;

        return $this;
    }

    /**
     * Gets self.
     *
     * @return Link|null
     */
    public function getSelf()
    {
        return $this->self;
    }

    /**
     * Sets self.
     *
     * @param Link|null $self
     *
     * @return $this
     */
    public function setSelf(Link $self = null)
    {
        $this->self = $self;

        return $this;
    }

    /**
     * Gets queue.
     *
     * @return Link|null
     */
    public function getQueue()
    {
        return $this->queue;
    }

    /**
     * Sets queue.
     *
     * @param Link|null $queue
     *
     * @return $this
     */
    public function setQueue(Link $queue = null)
    {
        $this->queue = $queue;

        return $this;
    }

    /**
     * Gets actions.
     *
     * @return Link|null
     */
    public function getActions()
    {
        return $this->actions;
    }

    /**
     * Sets actions.
     *
     * @param Link|null $actions
     *
     * @return $this
     */
    public function setActions(Link $actions = null)
    {
        $this->actions = $actions;

        return $this;
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


