note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 0.1.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by the swagger code generator program.

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel swagger codegen", "src=https://github.com/swagger-api/swagger-codegen.git", "protocol=uri"

class PIPELINE_BRANCHESITEMPULL_REQUESTLINKS 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    self: detachable STRING_32 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_self (a_name: like self)
        -- Set 'self' with 'a_name'.
      do
        self := a_name
      ensure
        self_set: self = a_name		
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
        Result.append("%Nclass PIPELINE_BRANCHESITEMPULL_REQUESTLINKS%N")
        if attached self as l_self then
          Result.append ("%N")
          Result.append (l_self.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%N")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end
