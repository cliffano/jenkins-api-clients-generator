//
// HudsonmodelHudsonMasterComputer.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class HudsonmodelHudsonMasterComputer: JSONEncodable {

    public var _class: String?
    public var displayName: String?
    public var executors: [HudsonmodelHudsonMasterComputerexecutors]?
    public var icon: String?
    public var iconClassName: String?
    public var idle: Bool?
    public var jnlpAgent: Bool?
    public var launchSupported: Bool?
    public var loadStatistics: HudsonmodelLabel1?
    public var manualLaunchAllowed: Bool?
    public var monitorData: HudsonmodelHudsonMasterComputerMonitorData?
    public var numExecutors: Int32?
    public var offline: Bool?
    public var offlineCause: String?
    public var offlineCauseReason: String?
    public var temporarilyOffline: Bool?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["executors"] = self.executors?.encodeToJSON()
        nillableDictionary["icon"] = self.icon
        nillableDictionary["iconClassName"] = self.iconClassName
        nillableDictionary["idle"] = self.idle
        nillableDictionary["jnlpAgent"] = self.jnlpAgent
        nillableDictionary["launchSupported"] = self.launchSupported
        nillableDictionary["loadStatistics"] = self.loadStatistics?.encodeToJSON()
        nillableDictionary["manualLaunchAllowed"] = self.manualLaunchAllowed
        nillableDictionary["monitorData"] = self.monitorData?.encodeToJSON()
        nillableDictionary["numExecutors"] = self.numExecutors?.encodeToJSON()
        nillableDictionary["offline"] = self.offline
        nillableDictionary["offlineCause"] = self.offlineCause
        nillableDictionary["offlineCauseReason"] = self.offlineCauseReason
        nillableDictionary["temporarilyOffline"] = self.temporarilyOffline

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}