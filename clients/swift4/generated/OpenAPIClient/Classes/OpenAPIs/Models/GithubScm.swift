//
// GithubScm.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct GithubScm: Codable {

    public var _class: String?
    public var links: GithubScmlinks?
    public var credentialId: String?
    public var _id: String?
    public var uri: String?

    public init(_class: String?, links: GithubScmlinks?, credentialId: String?, _id: String?, uri: String?) {
        self._class = _class
        self.links = links
        self.credentialId = credentialId
        self._id = _id
        self.uri = uri
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case links = "_links"
        case credentialId
        case _id = "id"
        case uri
    }


}
