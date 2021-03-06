/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "StringParameterDefinition.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

StringParameterDefinition::StringParameterDefinition()
{
    m__class = "";
    m_Description = "";
    m_Name = "";
    m_Type = "";
    
}

StringParameterDefinition::~StringParameterDefinition()
{
}

std::string StringParameterDefinition::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Description", m_Description);
	pt.put("Name", m_Name);
	pt.put("Type", m_Type);
	write_json(ss, pt, false);
	return ss.str();
}

void StringParameterDefinition::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Description = pt.get("Description", "");
	m_Name = pt.get("Name", "");
	m_Type = pt.get("Type", "");
}

std::string StringParameterDefinition::getClass() const
{
    return m__class;
}
void StringParameterDefinition::setClass(std::string value)
{
    m__class = value;
}
std::shared_ptr<StringParameterValue> StringParameterDefinition::getDefaultParameterValue() const
{
    return m_DefaultParameterValue;
}
void StringParameterDefinition::setDefaultParameterValue(std::shared_ptr<StringParameterValue> value)
{
    m_DefaultParameterValue = value;
}
std::string StringParameterDefinition::getDescription() const
{
    return m_Description;
}
void StringParameterDefinition::setDescription(std::string value)
{
    m_Description = value;
}
std::string StringParameterDefinition::getName() const
{
    return m_Name;
}
void StringParameterDefinition::setName(std::string value)
{
    m_Name = value;
}
std::string StringParameterDefinition::getType() const
{
    return m_Type;
}
void StringParameterDefinition::setType(std::string value)
{
    m_Type = value;
}

}
}
}
}

