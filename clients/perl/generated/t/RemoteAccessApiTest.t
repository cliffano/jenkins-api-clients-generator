=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by Swagger Codegen
# Please update the test cases below to test the API endpoints.
# Ref: https://github.com/swagger-api/swagger-codegen
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::SwaggerClient::RemoteAccessApi');

my $api = WWW::SwaggerClient::RemoteAccessApi->new();
isa_ok($api, 'WWW::SwaggerClient::RemoteAccessApi');

#
# get_computer test
#
{
    my $depth = undef; # replace NULL with a proper value
    my $result = $api->get_computer(depth => $depth);
}

#
# get_crumb test
#
{
    my $result = $api->get_crumb();
}

#
# get_jenkins test
#
{
    my $result = $api->get_jenkins();
}

#
# get_job test
#
{
    my $name = undef; # replace NULL with a proper value
    my $result = $api->get_job(name => $name);
}

#
# get_job_config test
#
{
    my $name = undef; # replace NULL with a proper value
    my $result = $api->get_job_config(name => $name);
}

#
# get_job_last_build test
#
{
    my $name = undef; # replace NULL with a proper value
    my $result = $api->get_job_last_build(name => $name);
}

#
# get_job_progressive_text test
#
{
    my $name = undef; # replace NULL with a proper value
    my $number = undef; # replace NULL with a proper value
    my $start = undef; # replace NULL with a proper value
    my $result = $api->get_job_progressive_text(name => $name, number => $number, start => $start);
}

#
# get_queue test
#
{
    my $result = $api->get_queue();
}

#
# get_queue_item test
#
{
    my $number = undef; # replace NULL with a proper value
    my $result = $api->get_queue_item(number => $number);
}

#
# get_view test
#
{
    my $name = undef; # replace NULL with a proper value
    my $result = $api->get_view(name => $name);
}

#
# get_view_config test
#
{
    my $name = undef; # replace NULL with a proper value
    my $result = $api->get_view_config(name => $name);
}

#
# head_jenkins test
#
{
    my $result = $api->head_jenkins();
}

#
# post_create_item test
#
{
    my $name = undef; # replace NULL with a proper value
    my $from = undef; # replace NULL with a proper value
    my $mode = undef; # replace NULL with a proper value
    my $body = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $content_type = undef; # replace NULL with a proper value
    my $result = $api->post_create_item(name => $name, from => $from, mode => $mode, body => $body, jenkins_crumb => $jenkins_crumb, content_type => $content_type);
}

#
# post_create_view test
#
{
    my $name = undef; # replace NULL with a proper value
    my $body = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $content_type = undef; # replace NULL with a proper value
    my $result = $api->post_create_view(name => $name, body => $body, jenkins_crumb => $jenkins_crumb, content_type => $content_type);
}

#
# post_job_build test
#
{
    my $name = undef; # replace NULL with a proper value
    my $json = undef; # replace NULL with a proper value
    my $token = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_job_build(name => $name, json => $json, token => $token, jenkins_crumb => $jenkins_crumb);
}

#
# post_job_config test
#
{
    my $name = undef; # replace NULL with a proper value
    my $body = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_job_config(name => $name, body => $body, jenkins_crumb => $jenkins_crumb);
}

#
# post_job_delete test
#
{
    my $name = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_job_delete(name => $name, jenkins_crumb => $jenkins_crumb);
}

#
# post_job_disable test
#
{
    my $name = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_job_disable(name => $name, jenkins_crumb => $jenkins_crumb);
}

#
# post_job_enable test
#
{
    my $name = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_job_enable(name => $name, jenkins_crumb => $jenkins_crumb);
}

#
# post_job_last_build_stop test
#
{
    my $name = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_job_last_build_stop(name => $name, jenkins_crumb => $jenkins_crumb);
}

#
# post_view_config test
#
{
    my $name = undef; # replace NULL with a proper value
    my $body = undef; # replace NULL with a proper value
    my $jenkins_crumb = undef; # replace NULL with a proper value
    my $result = $api->post_view_config(name => $name, body => $body, jenkins_crumb => $jenkins_crumb);
}


1;
