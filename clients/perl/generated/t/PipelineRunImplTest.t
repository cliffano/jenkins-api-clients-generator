=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the Swagger Codegen
# Please update the test cases below to test the model.
# Ref: https://github.com/swagger-api/swagger-codegen
#
use Test::More tests => 2;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;


use_ok('WWW::SwaggerClient::Object::PipelineRunImpl');

my $instance = WWW::SwaggerClient::Object::PipelineRunImpl->new();

isa_ok($instance, 'WWW::SwaggerClient::Object::PipelineRunImpl');

