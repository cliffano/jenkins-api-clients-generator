//
// GithubRepositorypermissions.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct GithubRepositorypermissions: Codable {

    public var admin: Bool?
    public var push: Bool?
    public var pull: Bool?
    public var _class: String?

    public init(admin: Bool?, push: Bool?, pull: Bool?, _class: String?) {
        self.admin = admin
        self.push = push
        self.pull = pull
        self._class = _class
    }


}
