//
// GithubRepositorypermissions.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubRepositorypermissions: Codable {

    public var admin: Bool?
    public var push: Bool?
    public var pull: Bool?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case admin = "admin"
        case push = "push"
        case pull = "pull"
        case _class = "_class"
    }

}
