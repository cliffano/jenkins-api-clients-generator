=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
package WWW::SwaggerClient::Object::QueueBlockedItem;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
# REF: https://github.com/swagger-api/swagger-codegen
#

=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('swagger_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use swagger_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->swagger_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::SwaggerClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'QueueBlockedItem',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    '_class' => {
    	datatype => 'string',
    	base_name => '_class',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'actions' => {
    	datatype => 'ARRAY[CauseAction]',
    	base_name => 'actions',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'blocked' => {
    	datatype => 'boolean',
    	base_name => 'blocked',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'buildable' => {
    	datatype => 'boolean',
    	base_name => 'buildable',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'id' => {
    	datatype => 'int',
    	base_name => 'id',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'in_queue_since' => {
    	datatype => 'int',
    	base_name => 'inQueueSince',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'params' => {
    	datatype => 'string',
    	base_name => 'params',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'stuck' => {
    	datatype => 'boolean',
    	base_name => 'stuck',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'task' => {
    	datatype => 'FreeStyleProject',
    	base_name => 'task',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'url' => {
    	datatype => 'string',
    	base_name => 'url',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'why' => {
    	datatype => 'string',
    	base_name => 'why',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'buildable_start_milliseconds' => {
    	datatype => 'int',
    	base_name => 'buildableStartMilliseconds',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->swagger_types( {
    '_class' => 'string',
    'actions' => 'ARRAY[CauseAction]',
    'blocked' => 'boolean',
    'buildable' => 'boolean',
    'id' => 'int',
    'in_queue_since' => 'int',
    'params' => 'string',
    'stuck' => 'boolean',
    'task' => 'FreeStyleProject',
    'url' => 'string',
    'why' => 'string',
    'buildable_start_milliseconds' => 'int'
} );

__PACKAGE__->attribute_map( {
    '_class' => '_class',
    'actions' => 'actions',
    'blocked' => 'blocked',
    'buildable' => 'buildable',
    'id' => 'id',
    'in_queue_since' => 'inQueueSince',
    'params' => 'params',
    'stuck' => 'stuck',
    'task' => 'task',
    'url' => 'url',
    'why' => 'why',
    'buildable_start_milliseconds' => 'buildableStartMilliseconds'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
