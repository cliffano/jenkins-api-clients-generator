//
// PipelineBranchesitem.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct PipelineBranchesitem: Codable {

    public var displayName: String?
    public var estimatedDurationInMillis: Int?
    public var name: String?
    public var weatherScore: Int?
    public var latestRun: PipelineBranchesitemlatestRun?
    public var organization: String?
    public var pullRequest: PipelineBranchesitempullRequest?
    public var totalNumberOfPullRequests: Int?
    public var _class: String?

    public init(displayName: String?, estimatedDurationInMillis: Int?, name: String?, weatherScore: Int?, latestRun: PipelineBranchesitemlatestRun?, organization: String?, pullRequest: PipelineBranchesitempullRequest?, totalNumberOfPullRequests: Int?, _class: String?) {
        self.displayName = displayName
        self.estimatedDurationInMillis = estimatedDurationInMillis
        self.name = name
        self.weatherScore = weatherScore
        self.latestRun = latestRun
        self.organization = organization
        self.pullRequest = pullRequest
        self.totalNumberOfPullRequests = totalNumberOfPullRequests
        self._class = _class
    }


}

