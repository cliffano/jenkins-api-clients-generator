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
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.SwaggyJenkins);
  }
}(this, function(expect, SwaggyJenkins) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new SwaggyJenkins.GithubRepository();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('GithubRepository', function() {
    it('should create an instance of GithubRepository', function() {
      // uncomment below and update the code to test GithubRepository
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be.a(SwaggyJenkins.GithubRepository);
    });

    it('should have the property _class (base name: "_class")', function() {
      // uncomment below and update the code to test the property _class
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property links (base name: "_links")', function() {
      // uncomment below and update the code to test the property links
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property defaultBranch (base name: "defaultBranch")', function() {
      // uncomment below and update the code to test the property defaultBranch
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property description (base name: "description")', function() {
      // uncomment below and update the code to test the property description
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property permissions (base name: "permissions")', function() {
      // uncomment below and update the code to test the property permissions
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property _private (base name: "private")', function() {
      // uncomment below and update the code to test the property _private
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

    it('should have the property fullName (base name: "fullName")', function() {
      // uncomment below and update the code to test the property fullName
      //var instane = new SwaggyJenkins.GithubRepository();
      //expect(instance).to.be();
    });

  });

}));
