//
// PipelinelatestRun.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class PipelinelatestRun: JSONEncodable {
    public var artifacts: [PipelinelatestRunartifacts]?
    public var durationInMillis: Int32?
    public var estimatedDurationInMillis: Int32?
    public var enQueueTime: String?
    public var endTime: String?
    public var id: String?
    public var organization: String?
    public var pipeline: String?
    public var result: String?
    public var runSummary: String?
    public var startTime: String?
    public var state: String?
    public var type: String?
    public var commitId: String?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["artifacts"] = self.artifacts?.encodeToJSON()
        nillableDictionary["durationInMillis"] = self.durationInMillis?.encodeToJSON()
        nillableDictionary["estimatedDurationInMillis"] = self.estimatedDurationInMillis?.encodeToJSON()
        nillableDictionary["enQueueTime"] = self.enQueueTime
        nillableDictionary["endTime"] = self.endTime
        nillableDictionary["id"] = self.id
        nillableDictionary["organization"] = self.organization
        nillableDictionary["pipeline"] = self.pipeline
        nillableDictionary["result"] = self.result
        nillableDictionary["runSummary"] = self.runSummary
        nillableDictionary["startTime"] = self.startTime
        nillableDictionary["state"] = self.state
        nillableDictionary["type"] = self.type
        nillableDictionary["commitId"] = self.commitId
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
