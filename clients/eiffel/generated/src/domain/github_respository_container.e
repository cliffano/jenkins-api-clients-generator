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

class GITHUB_RESPOSITORY_CONTAINER 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    var_class: detachable STRING_32 
      
    var_links: detachable GITHUB_RESPOSITORY_CONTAINERLINKS 
      
    repositories: detachable GITHUB_REPOSITORIES 
      

feature -- Change Element  
 
    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end

    set_var_links (a_name: like var_links)
        -- Set 'var_links' with 'a_name'.
      do
        var_links := a_name
      ensure
        var_links_set: var_links = a_name		
      end

    set_repositories (a_name: like repositories)
        -- Set 'repositories' with 'a_name'.
      do
        repositories := a_name
      ensure
        repositories_set: repositories = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass GITHUB_RESPOSITORY_CONTAINER%N")
        if attached var_class as l_var_class then
          Result.append ("%N")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
        if attached var_links as l_var_links then
          Result.append ("%N")
          Result.append (l_var_links.out)
          Result.append ("%N")    
        end  
        if attached repositories as l_repositories then
          Result.append ("%N")
          Result.append (l_repositories.out)
          Result.append ("%N")    
        end  
      end
end
