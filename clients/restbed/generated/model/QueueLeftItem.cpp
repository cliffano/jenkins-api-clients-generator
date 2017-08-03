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



#include "QueueLeftItem.h"

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

QueueLeftItem::QueueLeftItem()
{
    m__class = "";
    m_Blocked = false;
    m_Buildable = false;
    m_Id = 0;
    m_InQueueSince = 0;
    m_Params = "";
    m_Stuck = false;
    m_Url = "";
    m_Why = "";
    m_Cancelled = false;
    
}

QueueLeftItem::~QueueLeftItem()
{
}

std::string QueueLeftItem::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Blocked", m_Blocked);
	pt.put("Buildable", m_Buildable);
	pt.put("Id", m_Id);
	pt.put("InQueueSince", m_InQueueSince);
	pt.put("Params", m_Params);
	pt.put("Stuck", m_Stuck);
	pt.put("Url", m_Url);
	pt.put("Why", m_Why);
	pt.put("Cancelled", m_Cancelled);
	write_json(ss, pt, false);
	return ss.str();
}

void QueueLeftItem::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Blocked = pt.get("Blocked", false);
	m_Buildable = pt.get("Buildable", false);
	m_Id = pt.get("Id", 0);
	m_InQueueSince = pt.get("InQueueSince", 0);
	m_Params = pt.get("Params", "");
	m_Stuck = pt.get("Stuck", false);
	m_Url = pt.get("Url", "");
	m_Why = pt.get("Why", "");
	m_Cancelled = pt.get("Cancelled", false);
}

std::string QueueLeftItem::getClass() const
{
    return m__class;
}
void QueueLeftItem::setClass(std::string value)
{
    m__class = value;
}
std::vector<std::shared_ptr<CauseAction>> QueueLeftItem::getActions() const
{
    return m_Actions;
}
void QueueLeftItem::setActions(std::vector<std::shared_ptr<CauseAction>> value)
{
    m_Actions = value;
}
bool QueueLeftItem::getBlocked() const
{
    return m_Blocked;
}
void QueueLeftItem::setBlocked(bool value)
{
    m_Blocked = value;
}
bool QueueLeftItem::getBuildable() const
{
    return m_Buildable;
}
void QueueLeftItem::setBuildable(bool value)
{
    m_Buildable = value;
}
int32_t QueueLeftItem::getId() const
{
    return m_Id;
}
void QueueLeftItem::setId(int32_t value)
{
    m_Id = value;
}
int32_t QueueLeftItem::getInQueueSince() const
{
    return m_InQueueSince;
}
void QueueLeftItem::setInQueueSince(int32_t value)
{
    m_InQueueSince = value;
}
std::string QueueLeftItem::getParams() const
{
    return m_Params;
}
void QueueLeftItem::setParams(std::string value)
{
    m_Params = value;
}
bool QueueLeftItem::getStuck() const
{
    return m_Stuck;
}
void QueueLeftItem::setStuck(bool value)
{
    m_Stuck = value;
}
std::shared_ptr<FreeStyleProject> QueueLeftItem::getTask() const
{
    return m_Task;
}
void QueueLeftItem::setTask(std::shared_ptr<FreeStyleProject> value)
{
    m_Task = value;
}
std::string QueueLeftItem::getUrl() const
{
    return m_Url;
}
void QueueLeftItem::setUrl(std::string value)
{
    m_Url = value;
}
std::string QueueLeftItem::getWhy() const
{
    return m_Why;
}
void QueueLeftItem::setWhy(std::string value)
{
    m_Why = value;
}
bool QueueLeftItem::getCancelled() const
{
    return m_Cancelled;
}
void QueueLeftItem::setCancelled(bool value)
{
    m_Cancelled = value;
}
std::shared_ptr<FreeStyleBuild> QueueLeftItem::getExecutable() const
{
    return m_Executable;
}
void QueueLeftItem::setExecutable(std::shared_ptr<FreeStyleBuild> value)
{
    m_Executable = value;
}

}
}
}
}

