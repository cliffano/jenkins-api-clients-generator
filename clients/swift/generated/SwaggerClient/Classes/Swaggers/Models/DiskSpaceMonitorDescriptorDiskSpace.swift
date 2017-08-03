//
// DiskSpaceMonitorDescriptorDiskSpace.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class DiskSpaceMonitorDescriptorDiskSpace: JSONEncodable {
    public var _class: String?
    public var timestamp: Int32?
    public var path: String?
    public var size: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["timestamp"] = self.timestamp?.encodeToJSON()
        nillableDictionary["path"] = self.path
        nillableDictionary["size"] = self.size?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
