//
// GithubOrganizationlinks.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubOrganizationlinks: Codable {

    public var repositories: Link?
    public var _self: Link?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case repositories = "repositories"
        case _self = "self"
        case _class = "_class"
    }

}
