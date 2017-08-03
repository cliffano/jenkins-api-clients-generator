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
/*
 * HudsonMasterComputermonitorData.h
 *
 * 
 */

#ifndef HudsonMasterComputermonitorData_H_
#define HudsonMasterComputermonitorData_H_


#include "ModelBase.h"

#include "SwapSpaceMonitorMemoryUsage2.h"
#include "DiskSpaceMonitorDescriptorDiskSpace.h"
#include <string>
#include "ResponseTimeMonitorData.h"
#include "ClockDifference.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonMasterComputermonitorData
    : public ModelBase
{
public:
    HudsonMasterComputermonitorData();
    virtual ~HudsonMasterComputermonitorData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// HudsonMasterComputermonitorData members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SwapSpaceMonitorMemoryUsage2> getHudsonNodeMonitorsSwapSpaceMonitor() const;
    void setHudsonNodeMonitorsSwapSpaceMonitor(std::shared_ptr<SwapSpaceMonitorMemoryUsage2> value);
    bool hudsonNodeMonitorsSwapSpaceMonitorIsSet() const;
    void unsetHudson_node_monitors_SwapSpaceMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DiskSpaceMonitorDescriptorDiskSpace> getHudsonNodeMonitorsTemporarySpaceMonitor() const;
    void setHudsonNodeMonitorsTemporarySpaceMonitor(std::shared_ptr<DiskSpaceMonitorDescriptorDiskSpace> value);
    bool hudsonNodeMonitorsTemporarySpaceMonitorIsSet() const;
    void unsetHudson_node_monitors_TemporarySpaceMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DiskSpaceMonitorDescriptorDiskSpace> getHudsonNodeMonitorsDiskSpaceMonitor() const;
    void setHudsonNodeMonitorsDiskSpaceMonitor(std::shared_ptr<DiskSpaceMonitorDescriptorDiskSpace> value);
    bool hudsonNodeMonitorsDiskSpaceMonitorIsSet() const;
    void unsetHudson_node_monitors_DiskSpaceMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::string getHudsonNodeMonitorsArchitectureMonitor() const;
    void setHudsonNodeMonitorsArchitectureMonitor(std::string value);
    bool hudsonNodeMonitorsArchitectureMonitorIsSet() const;
    void unsetHudson_node_monitors_ArchitectureMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseTimeMonitorData> getHudsonNodeMonitorsResponseTimeMonitor() const;
    void setHudsonNodeMonitorsResponseTimeMonitor(std::shared_ptr<ResponseTimeMonitorData> value);
    bool hudsonNodeMonitorsResponseTimeMonitorIsSet() const;
    void unsetHudson_node_monitors_ResponseTimeMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ClockDifference> getHudsonNodeMonitorsClockMonitor() const;
    void setHudsonNodeMonitorsClockMonitor(std::shared_ptr<ClockDifference> value);
    bool hudsonNodeMonitorsClockMonitorIsSet() const;
    void unsetHudson_node_monitors_ClockMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::shared_ptr<SwapSpaceMonitorMemoryUsage2> m_Hudson_node_monitors_SwapSpaceMonitor;
    bool m_Hudson_node_monitors_SwapSpaceMonitorIsSet;
    std::shared_ptr<DiskSpaceMonitorDescriptorDiskSpace> m_Hudson_node_monitors_TemporarySpaceMonitor;
    bool m_Hudson_node_monitors_TemporarySpaceMonitorIsSet;
    std::shared_ptr<DiskSpaceMonitorDescriptorDiskSpace> m_Hudson_node_monitors_DiskSpaceMonitor;
    bool m_Hudson_node_monitors_DiskSpaceMonitorIsSet;
    std::string m_Hudson_node_monitors_ArchitectureMonitor;
    bool m_Hudson_node_monitors_ArchitectureMonitorIsSet;
    std::shared_ptr<ResponseTimeMonitorData> m_Hudson_node_monitors_ResponseTimeMonitor;
    bool m_Hudson_node_monitors_ResponseTimeMonitorIsSet;
    std::shared_ptr<ClockDifference> m_Hudson_node_monitors_ClockMonitor;
    bool m_Hudson_node_monitors_ClockMonitorIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* HudsonMasterComputermonitorData_H_ */
