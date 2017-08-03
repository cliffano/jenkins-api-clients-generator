<?php
/**
 * GithubRepositories
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
use Swagger\Server\Model\GithubRepository;
use Swagger\Server\Model\GithubRepositorieslinks;

/**
 * Class representing the GithubRepositories model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class GithubRepositories implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'GithubRepositories';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
        '_links' => ['_links', 'Swagger\Server\Model\GithubRepositorieslinks', null, 'setLinks', 'getLinks'],
        'items' => ['items', 'Swagger\Server\Model\GithubRepository[]', null, 'setItems', 'getItems'],
        'last_page' => ['lastPage', 'int', null, 'setLastPage', 'getLastPage'],
        'next_page' => ['nextPage', 'int', null, 'setNextPage', 'getNextPage'],
        'page_size' => ['pageSize', 'int', null, 'setPageSize', 'getPageSize'],
    ];
    

    
    /**     * @var string|null
     */
    protected $_class;

    /**     * @var GithubRepositorieslinks|null
     */
    protected $_links;

    /**     * @var GithubRepository[]|null
     */
    protected $items;

    /**     * @var int|null
     */
    protected $last_page;

    /**     * @var int|null
     */
    protected $next_page;

    /**     * @var int|null
     */
    protected $page_size;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
        $this->_links = isset($data['_links']) ? $data['_links'] : null;
        $this->items = isset($data['items']) ? $data['items'] : null;
        $this->last_page = isset($data['last_page']) ? $data['last_page'] : null;
        $this->next_page = isset($data['next_page']) ? $data['next_page'] : null;
        $this->page_size = isset($data['page_size']) ? $data['page_size'] : null;
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
     * Gets _links.
     *
     * @return GithubRepositorieslinks|null
     */
    public function getLinks()
    {
        return $this->_links;
    }

    /**
     * Sets _links.
     *
     * @param GithubRepositorieslinks|null $_links
     *
     * @return $this
     */
    public function setLinks(GithubRepositorieslinks $_links = null)
    {
        $this->_links = $_links;

        return $this;
    }

    /**
     * Gets items.
     *
     * @return GithubRepository[]|null
     */
    public function getItems()
    {
        return $this->items;
    }

    /**
     * Sets items.
     *
     * @param GithubRepository[]|null $items
     *
     * @return $this
     */
    public function setItems(array $items = null)
    {
        $this->items = $items;

        return $this;
    }

    /**
     * Gets last_page.
     *
     * @return int|null
     */
    public function getLastPage()
    {
        return $this->last_page;
    }

    /**
     * Sets last_page.
     *
     * @param int|null $last_page
     *
     * @return $this
     */
    public function setLastPage($last_page = null)
    {
        $this->last_page = $last_page;

        return $this;
    }

    /**
     * Gets next_page.
     *
     * @return int|null
     */
    public function getNextPage()
    {
        return $this->next_page;
    }

    /**
     * Sets next_page.
     *
     * @param int|null $next_page
     *
     * @return $this
     */
    public function setNextPage($next_page = null)
    {
        $this->next_page = $next_page;

        return $this;
    }

    /**
     * Gets page_size.
     *
     * @return int|null
     */
    public function getPageSize()
    {
        return $this->page_size;
    }

    /**
     * Sets page_size.
     *
     * @param int|null $page_size
     *
     * @return $this
     */
    public function setPageSize($page_size = null)
    {
        $this->page_size = $page_size;

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


