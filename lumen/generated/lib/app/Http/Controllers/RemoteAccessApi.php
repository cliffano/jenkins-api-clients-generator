<?php

/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


namespace App\Http\Controllers;

use Illuminate\Support\Facades\Request;

class RemoteAccessApi extends Controller
{
    /**
     * Constructor
     */
    public function __construct()
    {
    }

    /**
     * Operation getJenkins
     *
     * .
     *
     *
     * @return Http response
     */
    public function getJenkins()
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getJenkins as a GET method ?');
    }
    /**
     * Operation headJenkins
     *
     * .
     *
     *
     * @return Http response
     */
    public function headJenkins()
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing headJenkins as a HEAD method ?');
    }
    /**
     * Operation getComputer
     *
     * .
     *
     *
     * @return Http response
     */
    public function getComputer()
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getComputer as a GET method ?');
    }
    /**
     * Operation postCreateItem
     *
     * .
     *
     *
     * @return Http response
     */
    public function postCreateItem()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['name'])) {
            throw new \InvalidArgumentException('Missing the required parameter $name when calling postCreateItem');
        }
        $name = $input['name'];

        $from = $input['from'];

        $mode = $input['mode'];

        $body = $input['body'];

        $jenkins_crumb = $input['jenkins_crumb'];

        $content_type = $input['content_type'];


        return response('How about implementing postCreateItem as a POST method ?');
    }
    /**
     * Operation postCreateView
     *
     * .
     *
     *
     * @return Http response
     */
    public function postCreateView()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['name'])) {
            throw new \InvalidArgumentException('Missing the required parameter $name when calling postCreateView');
        }
        $name = $input['name'];

        $body = $input['body'];

        $jenkins_crumb = $input['jenkins_crumb'];

        $content_type = $input['content_type'];


        return response('How about implementing postCreateView as a POST method ?');
    }
    /**
     * Operation getCrumb
     *
     * .
     *
     *
     * @return Http response
     */
    public function getCrumb()
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getCrumb as a GET method ?');
    }
    /**
     * Operation getJob
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function getJob($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getJob as a GET method ?');
    }
    /**
     * Operation postJobBuild
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function postJobBuild($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postJobBuild as a POST method ?');
    }
    /**
     * Operation getJobConfig
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function getJobConfig($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getJobConfig as a GET method ?');
    }
    /**
     * Operation postJobConfig
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function postJobConfig($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postJobConfig as a POST method ?');
    }
    /**
     * Operation postJobDisable
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function postJobDisable($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postJobDisable as a POST method ?');
    }
    /**
     * Operation postJobDelete
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function postJobDelete($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postJobDelete as a POST method ?');
    }
    /**
     * Operation postJobEnable
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function postJobEnable($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postJobEnable as a POST method ?');
    }
    /**
     * Operation getJobLastBuild
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function getJobLastBuild($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getJobLastBuild as a GET method ?');
    }
    /**
     * Operation postJobLastBuildStop
     *
     * .
     *
     * @param string $name Name of the job (required)
     *
     * @return Http response
     */
    public function postJobLastBuildStop($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postJobLastBuildStop as a POST method ?');
    }
    /**
     * Operation getJobProgressiveText
     *
     * .
     *
     * @param string $name Name of the job (required)
     * @param string $number Build number (required)
     *
     * @return Http response
     */
    public function getJobProgressiveText($name, $number)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getJobProgressiveText as a GET method ?');
    }
    /**
     * Operation getQueue
     *
     * .
     *
     *
     * @return Http response
     */
    public function getQueue()
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getQueue as a GET method ?');
    }
    /**
     * Operation getQueueItem
     *
     * .
     *
     * @param string $number Queue number (required)
     *
     * @return Http response
     */
    public function getQueueItem($number)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getQueueItem as a GET method ?');
    }
    /**
     * Operation getView
     *
     * .
     *
     * @param string $name Name of the view (required)
     *
     * @return Http response
     */
    public function getView($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getView as a GET method ?');
    }
    /**
     * Operation getViewConfig
     *
     * .
     *
     * @param string $name Name of the view (required)
     *
     * @return Http response
     */
    public function getViewConfig($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing getViewConfig as a GET method ?');
    }
    /**
     * Operation postViewConfig
     *
     * .
     *
     * @param string $name Name of the view (required)
     *
     * @return Http response
     */
    public function postViewConfig($name)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing postViewConfig as a POST method ?');
    }
}