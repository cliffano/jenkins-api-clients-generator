//
// PipelineBranchesitemlatestRun.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class PipelineBranchesitemlatestRun: Codable {

    public var durationInMillis: Int?
    public var estimatedDurationInMillis: Int?
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


    private enum CodingKeys: String, CodingKey { 
        case durationInMillis = "durationInMillis"
        case estimatedDurationInMillis = "estimatedDurationInMillis"
        case enQueueTime = "enQueueTime"
        case endTime = "endTime"
        case id = "id"
        case organization = "organization"
        case pipeline = "pipeline"
        case result = "result"
        case runSummary = "runSummary"
        case startTime = "startTime"
        case state = "state"
        case type = "type"
        case commitId = "commitId"
        case _class = "_class"
    }

}
