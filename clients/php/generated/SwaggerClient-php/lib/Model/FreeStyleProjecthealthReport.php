<?php
/**
 * FreeStyleProjecthealthReport
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
 * FreeStyleProjecthealthReport Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class FreeStyleProjecthealthReport implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'FreeStyleProjecthealthReport';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        'description' => 'string',
        'icon_class_name' => 'string',
        'icon_url' => 'string',
        'score' => 'int',
        '_class' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerFormats = [
        'description' => null,
        'icon_class_name' => null,
        'icon_url' => null,
        'score' => null,
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
        'description' => 'description',
        'icon_class_name' => 'iconClassName',
        'icon_url' => 'iconUrl',
        'score' => 'score',
        '_class' => '_class'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        'description' => 'setDescription',
        'icon_class_name' => 'setIconClassName',
        'icon_url' => 'setIconUrl',
        'score' => 'setScore',
        '_class' => 'setClass'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        'description' => 'getDescription',
        'icon_class_name' => 'getIconClassName',
        'icon_url' => 'getIconUrl',
        'score' => 'getScore',
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
        $this->container['description'] = isset($data['description']) ? $data['description'] : null;
        $this->container['icon_class_name'] = isset($data['icon_class_name']) ? $data['icon_class_name'] : null;
        $this->container['icon_url'] = isset($data['icon_url']) ? $data['icon_url'] : null;
        $this->container['score'] = isset($data['score']) ? $data['score'] : null;
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
     * Gets description
     * @return string
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     * @param string $description
     * @return $this
     */
    public function setDescription($description)
    {
        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets icon_class_name
     * @return string
     */
    public function getIconClassName()
    {
        return $this->container['icon_class_name'];
    }

    /**
     * Sets icon_class_name
     * @param string $icon_class_name
     * @return $this
     */
    public function setIconClassName($icon_class_name)
    {
        $this->container['icon_class_name'] = $icon_class_name;

        return $this;
    }

    /**
     * Gets icon_url
     * @return string
     */
    public function getIconUrl()
    {
        return $this->container['icon_url'];
    }

    /**
     * Sets icon_url
     * @param string $icon_url
     * @return $this
     */
    public function setIconUrl($icon_url)
    {
        $this->container['icon_url'] = $icon_url;

        return $this;
    }

    /**
     * Gets score
     * @return int
     */
    public function getScore()
    {
        return $this->container['score'];
    }

    /**
     * Sets score
     * @param int $score
     * @return $this
     */
    public function setScore($score)
    {
        $this->container['score'] = $score;

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


