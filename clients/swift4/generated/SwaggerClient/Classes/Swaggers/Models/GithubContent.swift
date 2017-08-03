//
// GithubContent.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubContent: Codable {

    public var name: String?
    public var sha: String?
    public var _class: String?
    public var repo: String?
    public var size: Int?
    public var owner: String?
    public var path: String?
    public var base64Data: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case name = "name"
        case sha = "sha"
        case _class = "_class"
        case repo = "repo"
        case size = "size"
        case owner = "owner"
        case path = "path"
        case base64Data = "base64Data"
    }

}
