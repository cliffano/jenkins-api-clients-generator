=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.3.0-SNAPSHOT

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for SwaggyJenkinsClient::ResponseTimeMonitorData
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'ResponseTimeMonitorData' do
  before do
    # run before each test
    @instance = SwaggyJenkinsClient::ResponseTimeMonitorData.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ResponseTimeMonitorData' do
    it 'should create an instance of ResponseTimeMonitorData' do
      expect(@instance).to be_instance_of(SwaggyJenkinsClient::ResponseTimeMonitorData)
    end
  end
  describe 'test attribute "_class"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "timestamp"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "average"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end

