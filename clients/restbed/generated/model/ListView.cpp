/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "ListView.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

ListView::ListView()
{
    m__class = "";
    m_Description = "";
    m_Name = "";
    m_Url = "";
    
}

ListView::~ListView()
{
}

std::string ListView::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Description", m_Description);
	pt.put("Name", m_Name);
	pt.put("Url", m_Url);
	write_json(ss, pt, false);
	return ss.str();
}

void ListView::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Description = pt.get("Description", "");
	m_Name = pt.get("Name", "");
	m_Url = pt.get("Url", "");
}

std::string ListView::getClass() const
{
    return m__class;
}
void ListView::setClass(std::string value)
{
    m__class = value;
}
std::string ListView::getDescription() const
{
    return m_Description;
}
void ListView::setDescription(std::string value)
{
    m_Description = value;
}
std::vector<std::shared_ptr<FreeStyleProject>> ListView::getJobs() const
{
    return m_Jobs;
}
void ListView::setJobs(std::vector<std::shared_ptr<FreeStyleProject>> value)
{
    m_Jobs = value;
}
std::string ListView::getName() const
{
    return m_Name;
}
void ListView::setName(std::string value)
{
    m_Name = value;
}
std::string ListView::getUrl() const
{
    return m_Url;
}
void ListView::setUrl(std::string value)
{
    m_Url = value;
}

}
}
}
}

