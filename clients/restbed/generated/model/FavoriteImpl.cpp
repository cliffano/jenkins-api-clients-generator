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



#include "FavoriteImpl.h"

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

FavoriteImpl::FavoriteImpl()
{
    m__class = "";
    
}

FavoriteImpl::~FavoriteImpl()
{
}

std::string FavoriteImpl::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void FavoriteImpl::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
}

std::string FavoriteImpl::getClass() const
{
    return m__class;
}
void FavoriteImpl::setClass(std::string value)
{
    m__class = value;
}
std::shared_ptr<FavoriteImpllinks> FavoriteImpl::getLinks() const
{
    return m__links;
}
void FavoriteImpl::setLinks(std::shared_ptr<FavoriteImpllinks> value)
{
    m__links = value;
}
std::shared_ptr<PipelineImpl> FavoriteImpl::getItem() const
{
    return m_Item;
}
void FavoriteImpl::setItem(std::shared_ptr<PipelineImpl> value)
{
    m_Item = value;
}

}
}
}
}

