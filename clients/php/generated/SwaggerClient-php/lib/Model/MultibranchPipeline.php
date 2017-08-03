<?php
/**
 * MultibranchPipeline
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
 * MultibranchPipeline Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class MultibranchPipeline implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'MultibranchPipeline';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        'display_name' => 'string',
        'estimated_duration_in_millis' => 'int',
        'latest_run' => 'string',
        'name' => 'string',
        'organization' => 'string',
        'weather_score' => 'int',
        'branch_names' => 'string[]',
        'number_of_failing_branches' => 'int',
        'number_of_failing_pull_requests' => 'int',
        'number_of_successful_branches' => 'int',
        'number_of_successful_pull_requests' => 'int',
        'total_number_of_branches' => 'int',
        'total_number_of_pull_requests' => 'int',
        '_class' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerFormats = [
        'display_name' => null,
        'estimated_duration_in_millis' => null,
        'latest_run' => null,
        'name' => null,
        'organization' => null,
        'weather_score' => null,
        'branch_names' => null,
        'number_of_failing_branches' => null,
        'number_of_failing_pull_requests' => null,
        'number_of_successful_branches' => null,
        'number_of_successful_pull_requests' => null,
        'total_number_of_branches' => null,
        'total_number_of_pull_requests' => null,
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
        'display_name' => 'displayName',
        'estimated_duration_in_millis' => 'estimatedDurationInMillis',
        'latest_run' => 'latestRun',
        'name' => 'name',
        'organization' => 'organization',
        'weather_score' => 'weatherScore',
        'branch_names' => 'branchNames',
        'number_of_failing_branches' => 'numberOfFailingBranches',
        'number_of_failing_pull_requests' => 'numberOfFailingPullRequests',
        'number_of_successful_branches' => 'numberOfSuccessfulBranches',
        'number_of_successful_pull_requests' => 'numberOfSuccessfulPullRequests',
        'total_number_of_branches' => 'totalNumberOfBranches',
        'total_number_of_pull_requests' => 'totalNumberOfPullRequests',
        '_class' => '_class'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        'display_name' => 'setDisplayName',
        'estimated_duration_in_millis' => 'setEstimatedDurationInMillis',
        'latest_run' => 'setLatestRun',
        'name' => 'setName',
        'organization' => 'setOrganization',
        'weather_score' => 'setWeatherScore',
        'branch_names' => 'setBranchNames',
        'number_of_failing_branches' => 'setNumberOfFailingBranches',
        'number_of_failing_pull_requests' => 'setNumberOfFailingPullRequests',
        'number_of_successful_branches' => 'setNumberOfSuccessfulBranches',
        'number_of_successful_pull_requests' => 'setNumberOfSuccessfulPullRequests',
        'total_number_of_branches' => 'setTotalNumberOfBranches',
        'total_number_of_pull_requests' => 'setTotalNumberOfPullRequests',
        '_class' => 'setClass'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        'display_name' => 'getDisplayName',
        'estimated_duration_in_millis' => 'getEstimatedDurationInMillis',
        'latest_run' => 'getLatestRun',
        'name' => 'getName',
        'organization' => 'getOrganization',
        'weather_score' => 'getWeatherScore',
        'branch_names' => 'getBranchNames',
        'number_of_failing_branches' => 'getNumberOfFailingBranches',
        'number_of_failing_pull_requests' => 'getNumberOfFailingPullRequests',
        'number_of_successful_branches' => 'getNumberOfSuccessfulBranches',
        'number_of_successful_pull_requests' => 'getNumberOfSuccessfulPullRequests',
        'total_number_of_branches' => 'getTotalNumberOfBranches',
        'total_number_of_pull_requests' => 'getTotalNumberOfPullRequests',
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
        $this->container['display_name'] = isset($data['display_name']) ? $data['display_name'] : null;
        $this->container['estimated_duration_in_millis'] = isset($data['estimated_duration_in_millis']) ? $data['estimated_duration_in_millis'] : null;
        $this->container['latest_run'] = isset($data['latest_run']) ? $data['latest_run'] : null;
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['organization'] = isset($data['organization']) ? $data['organization'] : null;
        $this->container['weather_score'] = isset($data['weather_score']) ? $data['weather_score'] : null;
        $this->container['branch_names'] = isset($data['branch_names']) ? $data['branch_names'] : null;
        $this->container['number_of_failing_branches'] = isset($data['number_of_failing_branches']) ? $data['number_of_failing_branches'] : null;
        $this->container['number_of_failing_pull_requests'] = isset($data['number_of_failing_pull_requests']) ? $data['number_of_failing_pull_requests'] : null;
        $this->container['number_of_successful_branches'] = isset($data['number_of_successful_branches']) ? $data['number_of_successful_branches'] : null;
        $this->container['number_of_successful_pull_requests'] = isset($data['number_of_successful_pull_requests']) ? $data['number_of_successful_pull_requests'] : null;
        $this->container['total_number_of_branches'] = isset($data['total_number_of_branches']) ? $data['total_number_of_branches'] : null;
        $this->container['total_number_of_pull_requests'] = isset($data['total_number_of_pull_requests']) ? $data['total_number_of_pull_requests'] : null;
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
     * Gets display_name
     * @return string
     */
    public function getDisplayName()
    {
        return $this->container['display_name'];
    }

    /**
     * Sets display_name
     * @param string $display_name
     * @return $this
     */
    public function setDisplayName($display_name)
    {
        $this->container['display_name'] = $display_name;

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
     * Gets latest_run
     * @return string
     */
    public function getLatestRun()
    {
        return $this->container['latest_run'];
    }

    /**
     * Sets latest_run
     * @param string $latest_run
     * @return $this
     */
    public function setLatestRun($latest_run)
    {
        $this->container['latest_run'] = $latest_run;

        return $this;
    }

    /**
     * Gets name
     * @return string
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     * @param string $name
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

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
     * Gets weather_score
     * @return int
     */
    public function getWeatherScore()
    {
        return $this->container['weather_score'];
    }

    /**
     * Sets weather_score
     * @param int $weather_score
     * @return $this
     */
    public function setWeatherScore($weather_score)
    {
        $this->container['weather_score'] = $weather_score;

        return $this;
    }

    /**
     * Gets branch_names
     * @return string[]
     */
    public function getBranchNames()
    {
        return $this->container['branch_names'];
    }

    /**
     * Sets branch_names
     * @param string[] $branch_names
     * @return $this
     */
    public function setBranchNames($branch_names)
    {
        $this->container['branch_names'] = $branch_names;

        return $this;
    }

    /**
     * Gets number_of_failing_branches
     * @return int
     */
    public function getNumberOfFailingBranches()
    {
        return $this->container['number_of_failing_branches'];
    }

    /**
     * Sets number_of_failing_branches
     * @param int $number_of_failing_branches
     * @return $this
     */
    public function setNumberOfFailingBranches($number_of_failing_branches)
    {
        $this->container['number_of_failing_branches'] = $number_of_failing_branches;

        return $this;
    }

    /**
     * Gets number_of_failing_pull_requests
     * @return int
     */
    public function getNumberOfFailingPullRequests()
    {
        return $this->container['number_of_failing_pull_requests'];
    }

    /**
     * Sets number_of_failing_pull_requests
     * @param int $number_of_failing_pull_requests
     * @return $this
     */
    public function setNumberOfFailingPullRequests($number_of_failing_pull_requests)
    {
        $this->container['number_of_failing_pull_requests'] = $number_of_failing_pull_requests;

        return $this;
    }

    /**
     * Gets number_of_successful_branches
     * @return int
     */
    public function getNumberOfSuccessfulBranches()
    {
        return $this->container['number_of_successful_branches'];
    }

    /**
     * Sets number_of_successful_branches
     * @param int $number_of_successful_branches
     * @return $this
     */
    public function setNumberOfSuccessfulBranches($number_of_successful_branches)
    {
        $this->container['number_of_successful_branches'] = $number_of_successful_branches;

        return $this;
    }

    /**
     * Gets number_of_successful_pull_requests
     * @return int
     */
    public function getNumberOfSuccessfulPullRequests()
    {
        return $this->container['number_of_successful_pull_requests'];
    }

    /**
     * Sets number_of_successful_pull_requests
     * @param int $number_of_successful_pull_requests
     * @return $this
     */
    public function setNumberOfSuccessfulPullRequests($number_of_successful_pull_requests)
    {
        $this->container['number_of_successful_pull_requests'] = $number_of_successful_pull_requests;

        return $this;
    }

    /**
     * Gets total_number_of_branches
     * @return int
     */
    public function getTotalNumberOfBranches()
    {
        return $this->container['total_number_of_branches'];
    }

    /**
     * Sets total_number_of_branches
     * @param int $total_number_of_branches
     * @return $this
     */
    public function setTotalNumberOfBranches($total_number_of_branches)
    {
        $this->container['total_number_of_branches'] = $total_number_of_branches;

        return $this;
    }

    /**
     * Gets total_number_of_pull_requests
     * @return int
     */
    public function getTotalNumberOfPullRequests()
    {
        return $this->container['total_number_of_pull_requests'];
    }

    /**
     * Sets total_number_of_pull_requests
     * @param int $total_number_of_pull_requests
     * @return $this
     */
    public function setTotalNumberOfPullRequests($total_number_of_pull_requests)
    {
        $this->container['total_number_of_pull_requests'] = $total_number_of_pull_requests;

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


