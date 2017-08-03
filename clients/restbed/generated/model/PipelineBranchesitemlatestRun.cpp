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



#include "PipelineBranchesitemlatestRun.h"

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

PipelineBranchesitemlatestRun::PipelineBranchesitemlatestRun()
{
    m_DurationInMillis = 0;
    m_EstimatedDurationInMillis = 0;
    m_EnQueueTime = "";
    m_EndTime = "";
    m_Id = "";
    m_Organization = "";
    m_Pipeline = "";
    m_Result = "";
    m_RunSummary = "";
    m_StartTime = "";
    m_State = "";
    m_Type = "";
    m_CommitId = "";
    m__class = "";
    
}

PipelineBranchesitemlatestRun::~PipelineBranchesitemlatestRun()
{
}

std::string PipelineBranchesitemlatestRun::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("DurationInMillis", m_DurationInMillis);
	pt.put("EstimatedDurationInMillis", m_EstimatedDurationInMillis);
	pt.put("EnQueueTime", m_EnQueueTime);
	pt.put("EndTime", m_EndTime);
	pt.put("Id", m_Id);
	pt.put("Organization", m_Organization);
	pt.put("Pipeline", m_Pipeline);
	pt.put("Result", m_Result);
	pt.put("RunSummary", m_RunSummary);
	pt.put("StartTime", m_StartTime);
	pt.put("State", m_State);
	pt.put("Type", m_Type);
	pt.put("CommitId", m_CommitId);
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void PipelineBranchesitemlatestRun::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_DurationInMillis = pt.get("DurationInMillis", 0);
	m_EstimatedDurationInMillis = pt.get("EstimatedDurationInMillis", 0);
	m_EnQueueTime = pt.get("EnQueueTime", "");
	m_EndTime = pt.get("EndTime", "");
	m_Id = pt.get("Id", "");
	m_Organization = pt.get("Organization", "");
	m_Pipeline = pt.get("Pipeline", "");
	m_Result = pt.get("Result", "");
	m_RunSummary = pt.get("RunSummary", "");
	m_StartTime = pt.get("StartTime", "");
	m_State = pt.get("State", "");
	m_Type = pt.get("Type", "");
	m_CommitId = pt.get("CommitId", "");
	m__class = pt.get("_class", "");
}

int32_t PipelineBranchesitemlatestRun::getDurationInMillis() const
{
    return m_DurationInMillis;
}
void PipelineBranchesitemlatestRun::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
}
int32_t PipelineBranchesitemlatestRun::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void PipelineBranchesitemlatestRun::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
}
std::string PipelineBranchesitemlatestRun::getEnQueueTime() const
{
    return m_EnQueueTime;
}
void PipelineBranchesitemlatestRun::setEnQueueTime(std::string value)
{
    m_EnQueueTime = value;
}
std::string PipelineBranchesitemlatestRun::getEndTime() const
{
    return m_EndTime;
}
void PipelineBranchesitemlatestRun::setEndTime(std::string value)
{
    m_EndTime = value;
}
std::string PipelineBranchesitemlatestRun::getId() const
{
    return m_Id;
}
void PipelineBranchesitemlatestRun::setId(std::string value)
{
    m_Id = value;
}
std::string PipelineBranchesitemlatestRun::getOrganization() const
{
    return m_Organization;
}
void PipelineBranchesitemlatestRun::setOrganization(std::string value)
{
    m_Organization = value;
}
std::string PipelineBranchesitemlatestRun::getPipeline() const
{
    return m_Pipeline;
}
void PipelineBranchesitemlatestRun::setPipeline(std::string value)
{
    m_Pipeline = value;
}
std::string PipelineBranchesitemlatestRun::getResult() const
{
    return m_Result;
}
void PipelineBranchesitemlatestRun::setResult(std::string value)
{
    m_Result = value;
}
std::string PipelineBranchesitemlatestRun::getRunSummary() const
{
    return m_RunSummary;
}
void PipelineBranchesitemlatestRun::setRunSummary(std::string value)
{
    m_RunSummary = value;
}
std::string PipelineBranchesitemlatestRun::getStartTime() const
{
    return m_StartTime;
}
void PipelineBranchesitemlatestRun::setStartTime(std::string value)
{
    m_StartTime = value;
}
std::string PipelineBranchesitemlatestRun::getState() const
{
    return m_State;
}
void PipelineBranchesitemlatestRun::setState(std::string value)
{
    m_State = value;
}
std::string PipelineBranchesitemlatestRun::getType() const
{
    return m_Type;
}
void PipelineBranchesitemlatestRun::setType(std::string value)
{
    m_Type = value;
}
std::string PipelineBranchesitemlatestRun::getCommitId() const
{
    return m_CommitId;
}
void PipelineBranchesitemlatestRun::setCommitId(std::string value)
{
    m_CommitId = value;
}
std::string PipelineBranchesitemlatestRun::getClass() const
{
    return m__class;
}
void PipelineBranchesitemlatestRun::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

