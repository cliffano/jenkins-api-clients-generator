--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- empty_change_log_set class
local empty_change_log_set = {}
local empty_change_log_set_mt = {
	__name = "empty_change_log_set";
	__index = empty_change_log_set;
}

local function cast_empty_change_log_set(t)
	return setmetatable(t, empty_change_log_set_mt)
end

local function new_empty_change_log_set(_class, kind)
	return cast_empty_change_log_set({
		["_class"] = _class;
		["kind"] = kind;
	})
end

return {
	cast = cast_empty_change_log_set;
	new = new_empty_change_log_set;
}