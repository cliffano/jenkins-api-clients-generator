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
class FREE_STYLE_PROJECT 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    var_class: detachable STRING_32 
      
    name: detachable STRING_32 
      
    url: detachable STRING_32 
      
    color: detachable STRING_32 
      
    actions: detachable LIST [FREE_STYLE_PROJECTACTIONS] 
      
    description: detachable STRING_32 
      
    display_name: detachable STRING_32 
      
    display_name_or_null: detachable STRING_32 
      
    full_display_name: detachable STRING_32 
      
    full_name: detachable STRING_32 
      
    buildable: BOOLEAN 
      
    builds: detachable LIST [FREE_STYLE_BUILD] 
      
    first_build: detachable FREE_STYLE_BUILD 
      
    health_report: detachable LIST [FREE_STYLE_PROJECTHEALTH_REPORT] 
      
    in_queue: BOOLEAN 
      
    keep_dependencies: BOOLEAN 
      
    last_build: detachable FREE_STYLE_BUILD 
      
    last_completed_build: detachable FREE_STYLE_BUILD 
      
    last_failed_build: detachable STRING_32 
      
    last_stable_build: detachable FREE_STYLE_BUILD 
      
    last_successful_build: detachable FREE_STYLE_BUILD 
      
    last_unstable_build: detachable STRING_32 
      
    last_unsuccessful_build: detachable STRING_32 
      
    next_build_number: INTEGER_32 
      
    queue_item: detachable STRING_32 
      
    concurrent_build: BOOLEAN 
      
    scm: detachable NULL_SCM 
      

feature -- Change Element  
 
    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_url (a_name: like url)
        -- Set 'url' with 'a_name'.
      do
        url := a_name
      ensure
        url_set: url = a_name		
      end

    set_color (a_name: like color)
        -- Set 'color' with 'a_name'.
      do
        color := a_name
      ensure
        color_set: color = a_name		
      end

    set_actions (a_name: like actions)
        -- Set 'actions' with 'a_name'.
      do
        actions := a_name
      ensure
        actions_set: actions = a_name		
      end

    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name		
      end

    set_display_name (a_name: like display_name)
        -- Set 'display_name' with 'a_name'.
      do
        display_name := a_name
      ensure
        display_name_set: display_name = a_name		
      end

    set_display_name_or_null (a_name: like display_name_or_null)
        -- Set 'display_name_or_null' with 'a_name'.
      do
        display_name_or_null := a_name
      ensure
        display_name_or_null_set: display_name_or_null = a_name		
      end

    set_full_display_name (a_name: like full_display_name)
        -- Set 'full_display_name' with 'a_name'.
      do
        full_display_name := a_name
      ensure
        full_display_name_set: full_display_name = a_name		
      end

    set_full_name (a_name: like full_name)
        -- Set 'full_name' with 'a_name'.
      do
        full_name := a_name
      ensure
        full_name_set: full_name = a_name		
      end

    set_buildable (a_name: like buildable)
        -- Set 'buildable' with 'a_name'.
      do
        buildable := a_name
      ensure
        buildable_set: buildable = a_name		
      end

    set_builds (a_name: like builds)
        -- Set 'builds' with 'a_name'.
      do
        builds := a_name
      ensure
        builds_set: builds = a_name		
      end

    set_first_build (a_name: like first_build)
        -- Set 'first_build' with 'a_name'.
      do
        first_build := a_name
      ensure
        first_build_set: first_build = a_name		
      end

    set_health_report (a_name: like health_report)
        -- Set 'health_report' with 'a_name'.
      do
        health_report := a_name
      ensure
        health_report_set: health_report = a_name		
      end

    set_in_queue (a_name: like in_queue)
        -- Set 'in_queue' with 'a_name'.
      do
        in_queue := a_name
      ensure
        in_queue_set: in_queue = a_name		
      end

    set_keep_dependencies (a_name: like keep_dependencies)
        -- Set 'keep_dependencies' with 'a_name'.
      do
        keep_dependencies := a_name
      ensure
        keep_dependencies_set: keep_dependencies = a_name		
      end

    set_last_build (a_name: like last_build)
        -- Set 'last_build' with 'a_name'.
      do
        last_build := a_name
      ensure
        last_build_set: last_build = a_name		
      end

    set_last_completed_build (a_name: like last_completed_build)
        -- Set 'last_completed_build' with 'a_name'.
      do
        last_completed_build := a_name
      ensure
        last_completed_build_set: last_completed_build = a_name		
      end

    set_last_failed_build (a_name: like last_failed_build)
        -- Set 'last_failed_build' with 'a_name'.
      do
        last_failed_build := a_name
      ensure
        last_failed_build_set: last_failed_build = a_name		
      end

    set_last_stable_build (a_name: like last_stable_build)
        -- Set 'last_stable_build' with 'a_name'.
      do
        last_stable_build := a_name
      ensure
        last_stable_build_set: last_stable_build = a_name		
      end

    set_last_successful_build (a_name: like last_successful_build)
        -- Set 'last_successful_build' with 'a_name'.
      do
        last_successful_build := a_name
      ensure
        last_successful_build_set: last_successful_build = a_name		
      end

    set_last_unstable_build (a_name: like last_unstable_build)
        -- Set 'last_unstable_build' with 'a_name'.
      do
        last_unstable_build := a_name
      ensure
        last_unstable_build_set: last_unstable_build = a_name		
      end

    set_last_unsuccessful_build (a_name: like last_unsuccessful_build)
        -- Set 'last_unsuccessful_build' with 'a_name'.
      do
        last_unsuccessful_build := a_name
      ensure
        last_unsuccessful_build_set: last_unsuccessful_build = a_name		
      end

    set_next_build_number (a_name: like next_build_number)
        -- Set 'next_build_number' with 'a_name'.
      do
        next_build_number := a_name
      ensure
        next_build_number_set: next_build_number = a_name		
      end

    set_queue_item (a_name: like queue_item)
        -- Set 'queue_item' with 'a_name'.
      do
        queue_item := a_name
      ensure
        queue_item_set: queue_item = a_name		
      end

    set_concurrent_build (a_name: like concurrent_build)
        -- Set 'concurrent_build' with 'a_name'.
      do
        concurrent_build := a_name
      ensure
        concurrent_build_set: concurrent_build = a_name		
      end

    set_scm (a_name: like scm)
        -- Set 'scm' with 'a_name'.
      do
        scm := a_name
      ensure
        scm_set: scm = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass FREE_STYLE_PROJECT%N")
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached url as l_url then
          Result.append ("%Nurl:")
          Result.append (l_url.out)
          Result.append ("%N")    
        end  
        if attached color as l_color then
          Result.append ("%Ncolor:")
          Result.append (l_color.out)
          Result.append ("%N")    
        end  
        if attached actions as l_actions then
          across l_actions as ic loop
            Result.append ("%N actions:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached description as l_description then
          Result.append ("%Ndescription:")
          Result.append (l_description.out)
          Result.append ("%N")    
        end  
        if attached display_name as l_display_name then
          Result.append ("%Ndisplay_name:")
          Result.append (l_display_name.out)
          Result.append ("%N")    
        end  
        if attached display_name_or_null as l_display_name_or_null then
          Result.append ("%Ndisplay_name_or_null:")
          Result.append (l_display_name_or_null.out)
          Result.append ("%N")    
        end  
        if attached full_display_name as l_full_display_name then
          Result.append ("%Nfull_display_name:")
          Result.append (l_full_display_name.out)
          Result.append ("%N")    
        end  
        if attached full_name as l_full_name then
          Result.append ("%Nfull_name:")
          Result.append (l_full_name.out)
          Result.append ("%N")    
        end  
        if attached buildable as l_buildable then
          Result.append ("%Nbuildable:")
          Result.append (l_buildable.out)
          Result.append ("%N")    
        end  
        if attached builds as l_builds then
          across l_builds as ic loop
            Result.append ("%N builds:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached first_build as l_first_build then
          Result.append ("%Nfirst_build:")
          Result.append (l_first_build.out)
          Result.append ("%N")    
        end  
        if attached health_report as l_health_report then
          across l_health_report as ic loop
            Result.append ("%N health_report:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached in_queue as l_in_queue then
          Result.append ("%Nin_queue:")
          Result.append (l_in_queue.out)
          Result.append ("%N")    
        end  
        if attached keep_dependencies as l_keep_dependencies then
          Result.append ("%Nkeep_dependencies:")
          Result.append (l_keep_dependencies.out)
          Result.append ("%N")    
        end  
        if attached last_build as l_last_build then
          Result.append ("%Nlast_build:")
          Result.append (l_last_build.out)
          Result.append ("%N")    
        end  
        if attached last_completed_build as l_last_completed_build then
          Result.append ("%Nlast_completed_build:")
          Result.append (l_last_completed_build.out)
          Result.append ("%N")    
        end  
        if attached last_failed_build as l_last_failed_build then
          Result.append ("%Nlast_failed_build:")
          Result.append (l_last_failed_build.out)
          Result.append ("%N")    
        end  
        if attached last_stable_build as l_last_stable_build then
          Result.append ("%Nlast_stable_build:")
          Result.append (l_last_stable_build.out)
          Result.append ("%N")    
        end  
        if attached last_successful_build as l_last_successful_build then
          Result.append ("%Nlast_successful_build:")
          Result.append (l_last_successful_build.out)
          Result.append ("%N")    
        end  
        if attached last_unstable_build as l_last_unstable_build then
          Result.append ("%Nlast_unstable_build:")
          Result.append (l_last_unstable_build.out)
          Result.append ("%N")    
        end  
        if attached last_unsuccessful_build as l_last_unsuccessful_build then
          Result.append ("%Nlast_unsuccessful_build:")
          Result.append (l_last_unsuccessful_build.out)
          Result.append ("%N")    
        end  
        if attached next_build_number as l_next_build_number then
          Result.append ("%Nnext_build_number:")
          Result.append (l_next_build_number.out)
          Result.append ("%N")    
        end  
        if attached queue_item as l_queue_item then
          Result.append ("%Nqueue_item:")
          Result.append (l_queue_item.out)
          Result.append ("%N")    
        end  
        if attached concurrent_build as l_concurrent_build then
          Result.append ("%Nconcurrent_build:")
          Result.append (l_concurrent_build.out)
          Result.append ("%N")    
        end  
        if attached scm as l_scm then
          Result.append ("%Nscm:")
          Result.append (l_scm.out)
          Result.append ("%N")    
        end  
      end
end

