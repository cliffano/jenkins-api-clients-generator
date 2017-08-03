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



#include "HudsonMasterComputerexecutors.h"

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

HudsonMasterComputerexecutors::HudsonMasterComputerexecutors()
{
    m_Idle = false;
    m_LikelyStuck = false;
    m_number = 0;
    m_Progress = 0;
    m__class = "";
    
}

HudsonMasterComputerexecutors::~HudsonMasterComputerexecutors()
{
}

std::string HudsonMasterComputerexecutors::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Idle", m_Idle);
	pt.put("LikelyStuck", m_LikelyStuck);
	pt.put("number", m_number);
	pt.put("Progress", m_Progress);
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void HudsonMasterComputerexecutors::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Idle = pt.get("Idle", false);
	m_LikelyStuck = pt.get("LikelyStuck", false);
	m_number = pt.get("number", 0);
	m_Progress = pt.get("Progress", 0);
	m__class = pt.get("_class", "");
}

std::shared_ptr<FreeStyleBuild> HudsonMasterComputerexecutors::getCurrentExecutable() const
{
    return m_CurrentExecutable;
}
void HudsonMasterComputerexecutors::setCurrentExecutable(std::shared_ptr<FreeStyleBuild> value)
{
    m_CurrentExecutable = value;
}
bool HudsonMasterComputerexecutors::getIdle() const
{
    return m_Idle;
}
void HudsonMasterComputerexecutors::setIdle(bool value)
{
    m_Idle = value;
}
bool HudsonMasterComputerexecutors::getLikelyStuck() const
{
    return m_LikelyStuck;
}
void HudsonMasterComputerexecutors::setLikelyStuck(bool value)
{
    m_LikelyStuck = value;
}
int32_t HudsonMasterComputerexecutors::getNumber() const
{
    return m_number;
}
void HudsonMasterComputerexecutors::setNumber(int32_t value)
{
    m_number = value;
}
int32_t HudsonMasterComputerexecutors::getProgress() const
{
    return m_Progress;
}
void HudsonMasterComputerexecutors::setProgress(int32_t value)
{
    m_Progress = value;
}
std::string HudsonMasterComputerexecutors::getClass() const
{
    return m__class;
}
void HudsonMasterComputerexecutors::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

