note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 1.0.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class EXTENSION_CLASS_CONTAINER_IMPL1MAP 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    io_jenkins_blueocean_service_embedded_rest__pipeline_impl: detachable EXTENSION_CLASS_IMPL 
      
    io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl: detachable EXTENSION_CLASS_IMPL 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_io_jenkins_blueocean_service_embedded_rest__pipeline_impl (a_name: like io_jenkins_blueocean_service_embedded_rest__pipeline_impl)
        -- Set 'io_jenkins_blueocean_service_embedded_rest__pipeline_impl' with 'a_name'.
      do
        io_jenkins_blueocean_service_embedded_rest__pipeline_impl := a_name
      ensure
        io_jenkins_blueocean_service_embedded_rest__pipeline_impl_set: io_jenkins_blueocean_service_embedded_rest__pipeline_impl = a_name		
      end

    set_io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl (a_name: like io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl)
        -- Set 'io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl' with 'a_name'.
      do
        io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl := a_name
      ensure
        io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl_set: io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl = a_name		
      end

    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass EXTENSION_CLASS_CONTAINER_IMPL1MAP%N")
        if attached io_jenkins_blueocean_service_embedded_rest__pipeline_impl as l_io_jenkins_blueocean_service_embedded_rest__pipeline_impl then
          Result.append ("%Nio_jenkins_blueocean_service_embedded_rest__pipeline_impl:")
          Result.append (l_io_jenkins_blueocean_service_embedded_rest__pipeline_impl.out)
          Result.append ("%N")    
        end  
        if attached io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl as l_io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl then
          Result.append ("%Nio_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl:")
          Result.append (l_io_jenkins_blueocean_service_embedded_rest__multi_branch_pipeline_impl.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end

