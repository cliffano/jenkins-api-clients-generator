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
    instance = new SwaggyJenkins.HudsonMasterComputer();
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

  describe('HudsonMasterComputer', function() {
    it('should create an instance of HudsonMasterComputer', function() {
      // uncomment below and update the code to test HudsonMasterComputer
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be.a(SwaggyJenkins.HudsonMasterComputer);
    });

    it('should have the property _class (base name: "_class")', function() {
      // uncomment below and update the code to test the property _class
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property displayName (base name: "displayName")', function() {
      // uncomment below and update the code to test the property displayName
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property executors (base name: "executors")', function() {
      // uncomment below and update the code to test the property executors
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property icon (base name: "icon")', function() {
      // uncomment below and update the code to test the property icon
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property iconClassName (base name: "iconClassName")', function() {
      // uncomment below and update the code to test the property iconClassName
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property idle (base name: "idle")', function() {
      // uncomment below and update the code to test the property idle
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property jnlpAgent (base name: "jnlpAgent")', function() {
      // uncomment below and update the code to test the property jnlpAgent
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property launchSupported (base name: "launchSupported")', function() {
      // uncomment below and update the code to test the property launchSupported
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property loadStatistics (base name: "loadStatistics")', function() {
      // uncomment below and update the code to test the property loadStatistics
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property manualLaunchAllowed (base name: "manualLaunchAllowed")', function() {
      // uncomment below and update the code to test the property manualLaunchAllowed
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property monitorData (base name: "monitorData")', function() {
      // uncomment below and update the code to test the property monitorData
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property numExecutors (base name: "numExecutors")', function() {
      // uncomment below and update the code to test the property numExecutors
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property offline (base name: "offline")', function() {
      // uncomment below and update the code to test the property offline
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property offlineCause (base name: "offlineCause")', function() {
      // uncomment below and update the code to test the property offlineCause
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property offlineCauseReason (base name: "offlineCauseReason")', function() {
      // uncomment below and update the code to test the property offlineCauseReason
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

    it('should have the property temporarilyOffline (base name: "temporarilyOffline")', function() {
      // uncomment below and update the code to test the property temporarilyOffline
      //var instane = new SwaggyJenkins.HudsonMasterComputer();
      //expect(instance).to.be();
    });

  });

}));
