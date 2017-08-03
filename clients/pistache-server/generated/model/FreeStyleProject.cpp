/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "FreeStyleProject.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

FreeStyleProject::FreeStyleProject()
{
    m__class = "";
    m__classIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Url = "";
    m_UrlIsSet = false;
    m_Color = "";
    m_ColorIsSet = false;
    m_ActionsIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_DisplayName = "";
    m_DisplayNameIsSet = false;
    m_DisplayNameOrNull = "";
    m_DisplayNameOrNullIsSet = false;
    m_FullDisplayName = "";
    m_FullDisplayNameIsSet = false;
    m_FullName = "";
    m_FullNameIsSet = false;
    m_Buildable = false;
    m_BuildableIsSet = false;
    m_BuildsIsSet = false;
    m_FirstBuildIsSet = false;
    m_HealthReportIsSet = false;
    m_InQueue = false;
    m_InQueueIsSet = false;
    m_KeepDependencies = false;
    m_KeepDependenciesIsSet = false;
    m_LastBuildIsSet = false;
    m_LastCompletedBuildIsSet = false;
    m_LastFailedBuild = "";
    m_LastFailedBuildIsSet = false;
    m_LastStableBuildIsSet = false;
    m_LastSuccessfulBuildIsSet = false;
    m_LastUnstableBuild = "";
    m_LastUnstableBuildIsSet = false;
    m_LastUnsuccessfulBuild = "";
    m_LastUnsuccessfulBuildIsSet = false;
    m_NextBuildNumber = 0;
    m_NextBuildNumberIsSet = false;
    m_QueueItem = "";
    m_QueueItemIsSet = false;
    m_ConcurrentBuild = false;
    m_ConcurrentBuildIsSet = false;
    m_ScmIsSet = false;
    
}

FreeStyleProject::~FreeStyleProject()
{
}

void FreeStyleProject::validate()
{
    // TODO: implement validation
}

nlohmann::json FreeStyleProject::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_UrlIsSet)
    {
        val["url"] = ModelBase::toJson(m_Url);
    }
    if(m_ColorIsSet)
    {
        val["color"] = ModelBase::toJson(m_Color);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Actions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["actions"] = jsonArray;
        }
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    if(m_DisplayNameIsSet)
    {
        val["displayName"] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DisplayNameOrNullIsSet)
    {
        val["displayNameOrNull"] = ModelBase::toJson(m_DisplayNameOrNull);
    }
    if(m_FullDisplayNameIsSet)
    {
        val["fullDisplayName"] = ModelBase::toJson(m_FullDisplayName);
    }
    if(m_FullNameIsSet)
    {
        val["fullName"] = ModelBase::toJson(m_FullName);
    }
    if(m_BuildableIsSet)
    {
        val["buildable"] = m_Buildable;
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Builds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["builds"] = jsonArray;
        }
    }
    if(m_FirstBuildIsSet)
    {
        val["firstBuild"] = ModelBase::toJson(m_FirstBuild);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_HealthReport )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["healthReport"] = jsonArray;
        }
    }
    if(m_InQueueIsSet)
    {
        val["inQueue"] = m_InQueue;
    }
    if(m_KeepDependenciesIsSet)
    {
        val["keepDependencies"] = m_KeepDependencies;
    }
    if(m_LastBuildIsSet)
    {
        val["lastBuild"] = ModelBase::toJson(m_LastBuild);
    }
    if(m_LastCompletedBuildIsSet)
    {
        val["lastCompletedBuild"] = ModelBase::toJson(m_LastCompletedBuild);
    }
    if(m_LastFailedBuildIsSet)
    {
        val["lastFailedBuild"] = ModelBase::toJson(m_LastFailedBuild);
    }
    if(m_LastStableBuildIsSet)
    {
        val["lastStableBuild"] = ModelBase::toJson(m_LastStableBuild);
    }
    if(m_LastSuccessfulBuildIsSet)
    {
        val["lastSuccessfulBuild"] = ModelBase::toJson(m_LastSuccessfulBuild);
    }
    if(m_LastUnstableBuildIsSet)
    {
        val["lastUnstableBuild"] = ModelBase::toJson(m_LastUnstableBuild);
    }
    if(m_LastUnsuccessfulBuildIsSet)
    {
        val["lastUnsuccessfulBuild"] = ModelBase::toJson(m_LastUnsuccessfulBuild);
    }
    if(m_NextBuildNumberIsSet)
    {
        val["nextBuildNumber"] = m_NextBuildNumber;
    }
    if(m_QueueItemIsSet)
    {
        val["queueItem"] = ModelBase::toJson(m_QueueItem);
    }
    if(m_ConcurrentBuildIsSet)
    {
        val["concurrentBuild"] = m_ConcurrentBuild;
    }
    if(m_ScmIsSet)
    {
        val["scm"] = ModelBase::toJson(m_Scm);
    }
    

    return val;
}

void FreeStyleProject::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
        
    }
    if(val.find("url") != val.end())
    {
        setUrl(val.at("url"));
        
    }
    if(val.find("color") != val.end())
    {
        setColor(val.at("color"));
        
    }
    {
        m_Actions.clear();
        nlohmann::json jsonArray;
        if(val.find("actions") != val.end())
        {
        for( auto& item : val["actions"] )
        {
            
            if(item.is_null())
            {
                m_Actions.push_back( std::shared_ptr<FreeStyleProjectactions>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleProjectactions> newItem(new FreeStyleProjectactions());
                newItem->fromJson(item);
                m_Actions.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
        
    }
    if(val.find("displayName") != val.end())
    {
        setDisplayName(val.at("displayName"));
        
    }
    if(val.find("displayNameOrNull") != val.end())
    {
        setDisplayNameOrNull(val.at("displayNameOrNull"));
        
    }
    if(val.find("fullDisplayName") != val.end())
    {
        setFullDisplayName(val.at("fullDisplayName"));
        
    }
    if(val.find("fullName") != val.end())
    {
        setFullName(val.at("fullName"));
        
    }
    if(val.find("buildable") != val.end())
    {
        setBuildable(val.at("buildable"));
    }
    {
        m_Builds.clear();
        nlohmann::json jsonArray;
        if(val.find("builds") != val.end())
        {
        for( auto& item : val["builds"] )
        {
            
            if(item.is_null())
            {
                m_Builds.push_back( std::shared_ptr<FreeStyleBuild>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
                newItem->fromJson(item);
                m_Builds.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("firstBuild") != val.end())
    {
        if(!val["firstBuild"].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val["firstBuild"]);
            setFirstBuild( newItem );
        }
        
    }
    {
        m_HealthReport.clear();
        nlohmann::json jsonArray;
        if(val.find("healthReport") != val.end())
        {
        for( auto& item : val["healthReport"] )
        {
            
            if(item.is_null())
            {
                m_HealthReport.push_back( std::shared_ptr<FreeStyleProjecthealthReport>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleProjecthealthReport> newItem(new FreeStyleProjecthealthReport());
                newItem->fromJson(item);
                m_HealthReport.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("inQueue") != val.end())
    {
        setInQueue(val.at("inQueue"));
    }
    if(val.find("keepDependencies") != val.end())
    {
        setKeepDependencies(val.at("keepDependencies"));
    }
    if(val.find("lastBuild") != val.end())
    {
        if(!val["lastBuild"].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val["lastBuild"]);
            setLastBuild( newItem );
        }
        
    }
    if(val.find("lastCompletedBuild") != val.end())
    {
        if(!val["lastCompletedBuild"].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val["lastCompletedBuild"]);
            setLastCompletedBuild( newItem );
        }
        
    }
    if(val.find("lastFailedBuild") != val.end())
    {
        setLastFailedBuild(val.at("lastFailedBuild"));
        
    }
    if(val.find("lastStableBuild") != val.end())
    {
        if(!val["lastStableBuild"].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val["lastStableBuild"]);
            setLastStableBuild( newItem );
        }
        
    }
    if(val.find("lastSuccessfulBuild") != val.end())
    {
        if(!val["lastSuccessfulBuild"].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val["lastSuccessfulBuild"]);
            setLastSuccessfulBuild( newItem );
        }
        
    }
    if(val.find("lastUnstableBuild") != val.end())
    {
        setLastUnstableBuild(val.at("lastUnstableBuild"));
        
    }
    if(val.find("lastUnsuccessfulBuild") != val.end())
    {
        setLastUnsuccessfulBuild(val.at("lastUnsuccessfulBuild"));
        
    }
    if(val.find("nextBuildNumber") != val.end())
    {
        setNextBuildNumber(val.at("nextBuildNumber"));
    }
    if(val.find("queueItem") != val.end())
    {
        setQueueItem(val.at("queueItem"));
        
    }
    if(val.find("concurrentBuild") != val.end())
    {
        setConcurrentBuild(val.at("concurrentBuild"));
    }
    if(val.find("scm") != val.end())
    {
        if(!val["scm"].is_null())
        {
            std::shared_ptr<NullSCM> newItem(new NullSCM());
            newItem->fromJson(val["scm"]);
            setScm( newItem );
        }
        
    }
    
}


std::string FreeStyleProject::getClass() const
{
    return m__class;
}
void FreeStyleProject::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool FreeStyleProject::classIsSet() const
{
    return m__classIsSet;
}
void FreeStyleProject::unset_class()
{
    m__classIsSet = false;
}
std::string FreeStyleProject::getName() const
{
    return m_Name;
}
void FreeStyleProject::setName(std::string value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool FreeStyleProject::nameIsSet() const
{
    return m_NameIsSet;
}
void FreeStyleProject::unsetName()
{
    m_NameIsSet = false;
}
std::string FreeStyleProject::getUrl() const
{
    return m_Url;
}
void FreeStyleProject::setUrl(std::string value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool FreeStyleProject::urlIsSet() const
{
    return m_UrlIsSet;
}
void FreeStyleProject::unsetUrl()
{
    m_UrlIsSet = false;
}
std::string FreeStyleProject::getColor() const
{
    return m_Color;
}
void FreeStyleProject::setColor(std::string value)
{
    m_Color = value;
    m_ColorIsSet = true;
}
bool FreeStyleProject::colorIsSet() const
{
    return m_ColorIsSet;
}
void FreeStyleProject::unsetColor()
{
    m_ColorIsSet = false;
}
std::vector<std::shared_ptr<FreeStyleProjectactions>>& FreeStyleProject::getActions()
{
    return m_Actions;
}
bool FreeStyleProject::actionsIsSet() const
{
    return m_ActionsIsSet;
}
void FreeStyleProject::unsetActions()
{
    m_ActionsIsSet = false;
}
std::string FreeStyleProject::getDescription() const
{
    return m_Description;
}
void FreeStyleProject::setDescription(std::string value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool FreeStyleProject::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void FreeStyleProject::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string FreeStyleProject::getDisplayName() const
{
    return m_DisplayName;
}
void FreeStyleProject::setDisplayName(std::string value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool FreeStyleProject::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void FreeStyleProject::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
std::string FreeStyleProject::getDisplayNameOrNull() const
{
    return m_DisplayNameOrNull;
}
void FreeStyleProject::setDisplayNameOrNull(std::string value)
{
    m_DisplayNameOrNull = value;
    m_DisplayNameOrNullIsSet = true;
}
bool FreeStyleProject::displayNameOrNullIsSet() const
{
    return m_DisplayNameOrNullIsSet;
}
void FreeStyleProject::unsetDisplayNameOrNull()
{
    m_DisplayNameOrNullIsSet = false;
}
std::string FreeStyleProject::getFullDisplayName() const
{
    return m_FullDisplayName;
}
void FreeStyleProject::setFullDisplayName(std::string value)
{
    m_FullDisplayName = value;
    m_FullDisplayNameIsSet = true;
}
bool FreeStyleProject::fullDisplayNameIsSet() const
{
    return m_FullDisplayNameIsSet;
}
void FreeStyleProject::unsetFullDisplayName()
{
    m_FullDisplayNameIsSet = false;
}
std::string FreeStyleProject::getFullName() const
{
    return m_FullName;
}
void FreeStyleProject::setFullName(std::string value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool FreeStyleProject::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void FreeStyleProject::unsetFullName()
{
    m_FullNameIsSet = false;
}
bool FreeStyleProject::getBuildable() const
{
    return m_Buildable;
}
void FreeStyleProject::setBuildable(bool value)
{
    m_Buildable = value;
    m_BuildableIsSet = true;
}
bool FreeStyleProject::buildableIsSet() const
{
    return m_BuildableIsSet;
}
void FreeStyleProject::unsetBuildable()
{
    m_BuildableIsSet = false;
}
std::vector<std::shared_ptr<FreeStyleBuild>>& FreeStyleProject::getBuilds()
{
    return m_Builds;
}
bool FreeStyleProject::buildsIsSet() const
{
    return m_BuildsIsSet;
}
void FreeStyleProject::unsetBuilds()
{
    m_BuildsIsSet = false;
}
std::shared_ptr<FreeStyleBuild> FreeStyleProject::getFirstBuild() const
{
    return m_FirstBuild;
}
void FreeStyleProject::setFirstBuild(std::shared_ptr<FreeStyleBuild> value)
{
    m_FirstBuild = value;
    m_FirstBuildIsSet = true;
}
bool FreeStyleProject::firstBuildIsSet() const
{
    return m_FirstBuildIsSet;
}
void FreeStyleProject::unsetFirstBuild()
{
    m_FirstBuildIsSet = false;
}
std::vector<std::shared_ptr<FreeStyleProjecthealthReport>>& FreeStyleProject::getHealthReport()
{
    return m_HealthReport;
}
bool FreeStyleProject::healthReportIsSet() const
{
    return m_HealthReportIsSet;
}
void FreeStyleProject::unsetHealthReport()
{
    m_HealthReportIsSet = false;
}
bool FreeStyleProject::getInQueue() const
{
    return m_InQueue;
}
void FreeStyleProject::setInQueue(bool value)
{
    m_InQueue = value;
    m_InQueueIsSet = true;
}
bool FreeStyleProject::inQueueIsSet() const
{
    return m_InQueueIsSet;
}
void FreeStyleProject::unsetInQueue()
{
    m_InQueueIsSet = false;
}
bool FreeStyleProject::getKeepDependencies() const
{
    return m_KeepDependencies;
}
void FreeStyleProject::setKeepDependencies(bool value)
{
    m_KeepDependencies = value;
    m_KeepDependenciesIsSet = true;
}
bool FreeStyleProject::keepDependenciesIsSet() const
{
    return m_KeepDependenciesIsSet;
}
void FreeStyleProject::unsetKeepDependencies()
{
    m_KeepDependenciesIsSet = false;
}
std::shared_ptr<FreeStyleBuild> FreeStyleProject::getLastBuild() const
{
    return m_LastBuild;
}
void FreeStyleProject::setLastBuild(std::shared_ptr<FreeStyleBuild> value)
{
    m_LastBuild = value;
    m_LastBuildIsSet = true;
}
bool FreeStyleProject::lastBuildIsSet() const
{
    return m_LastBuildIsSet;
}
void FreeStyleProject::unsetLastBuild()
{
    m_LastBuildIsSet = false;
}
std::shared_ptr<FreeStyleBuild> FreeStyleProject::getLastCompletedBuild() const
{
    return m_LastCompletedBuild;
}
void FreeStyleProject::setLastCompletedBuild(std::shared_ptr<FreeStyleBuild> value)
{
    m_LastCompletedBuild = value;
    m_LastCompletedBuildIsSet = true;
}
bool FreeStyleProject::lastCompletedBuildIsSet() const
{
    return m_LastCompletedBuildIsSet;
}
void FreeStyleProject::unsetLastCompletedBuild()
{
    m_LastCompletedBuildIsSet = false;
}
std::string FreeStyleProject::getLastFailedBuild() const
{
    return m_LastFailedBuild;
}
void FreeStyleProject::setLastFailedBuild(std::string value)
{
    m_LastFailedBuild = value;
    m_LastFailedBuildIsSet = true;
}
bool FreeStyleProject::lastFailedBuildIsSet() const
{
    return m_LastFailedBuildIsSet;
}
void FreeStyleProject::unsetLastFailedBuild()
{
    m_LastFailedBuildIsSet = false;
}
std::shared_ptr<FreeStyleBuild> FreeStyleProject::getLastStableBuild() const
{
    return m_LastStableBuild;
}
void FreeStyleProject::setLastStableBuild(std::shared_ptr<FreeStyleBuild> value)
{
    m_LastStableBuild = value;
    m_LastStableBuildIsSet = true;
}
bool FreeStyleProject::lastStableBuildIsSet() const
{
    return m_LastStableBuildIsSet;
}
void FreeStyleProject::unsetLastStableBuild()
{
    m_LastStableBuildIsSet = false;
}
std::shared_ptr<FreeStyleBuild> FreeStyleProject::getLastSuccessfulBuild() const
{
    return m_LastSuccessfulBuild;
}
void FreeStyleProject::setLastSuccessfulBuild(std::shared_ptr<FreeStyleBuild> value)
{
    m_LastSuccessfulBuild = value;
    m_LastSuccessfulBuildIsSet = true;
}
bool FreeStyleProject::lastSuccessfulBuildIsSet() const
{
    return m_LastSuccessfulBuildIsSet;
}
void FreeStyleProject::unsetLastSuccessfulBuild()
{
    m_LastSuccessfulBuildIsSet = false;
}
std::string FreeStyleProject::getLastUnstableBuild() const
{
    return m_LastUnstableBuild;
}
void FreeStyleProject::setLastUnstableBuild(std::string value)
{
    m_LastUnstableBuild = value;
    m_LastUnstableBuildIsSet = true;
}
bool FreeStyleProject::lastUnstableBuildIsSet() const
{
    return m_LastUnstableBuildIsSet;
}
void FreeStyleProject::unsetLastUnstableBuild()
{
    m_LastUnstableBuildIsSet = false;
}
std::string FreeStyleProject::getLastUnsuccessfulBuild() const
{
    return m_LastUnsuccessfulBuild;
}
void FreeStyleProject::setLastUnsuccessfulBuild(std::string value)
{
    m_LastUnsuccessfulBuild = value;
    m_LastUnsuccessfulBuildIsSet = true;
}
bool FreeStyleProject::lastUnsuccessfulBuildIsSet() const
{
    return m_LastUnsuccessfulBuildIsSet;
}
void FreeStyleProject::unsetLastUnsuccessfulBuild()
{
    m_LastUnsuccessfulBuildIsSet = false;
}
int32_t FreeStyleProject::getNextBuildNumber() const
{
    return m_NextBuildNumber;
}
void FreeStyleProject::setNextBuildNumber(int32_t value)
{
    m_NextBuildNumber = value;
    m_NextBuildNumberIsSet = true;
}
bool FreeStyleProject::nextBuildNumberIsSet() const
{
    return m_NextBuildNumberIsSet;
}
void FreeStyleProject::unsetNextBuildNumber()
{
    m_NextBuildNumberIsSet = false;
}
std::string FreeStyleProject::getQueueItem() const
{
    return m_QueueItem;
}
void FreeStyleProject::setQueueItem(std::string value)
{
    m_QueueItem = value;
    m_QueueItemIsSet = true;
}
bool FreeStyleProject::queueItemIsSet() const
{
    return m_QueueItemIsSet;
}
void FreeStyleProject::unsetQueueItem()
{
    m_QueueItemIsSet = false;
}
bool FreeStyleProject::getConcurrentBuild() const
{
    return m_ConcurrentBuild;
}
void FreeStyleProject::setConcurrentBuild(bool value)
{
    m_ConcurrentBuild = value;
    m_ConcurrentBuildIsSet = true;
}
bool FreeStyleProject::concurrentBuildIsSet() const
{
    return m_ConcurrentBuildIsSet;
}
void FreeStyleProject::unsetConcurrentBuild()
{
    m_ConcurrentBuildIsSet = false;
}
std::shared_ptr<NullSCM> FreeStyleProject::getScm() const
{
    return m_Scm;
}
void FreeStyleProject::setScm(std::shared_ptr<NullSCM> value)
{
    m_Scm = value;
    m_ScmIsSet = true;
}
bool FreeStyleProject::scmIsSet() const
{
    return m_ScmIsSet;
}
void FreeStyleProject::unsetScm()
{
    m_ScmIsSet = false;
}

}
}
}
}

