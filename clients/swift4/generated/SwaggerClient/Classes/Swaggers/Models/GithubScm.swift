//
// GithubScm.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubScm: Codable {

    public var _class: String?
    public var links: GithubScmlinks?
    public var credentialId: String?
    public var id: String?
    public var uri: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case links = "_links"
        case credentialId = "credentialId"
        case id = "id"
        case uri = "uri"
    }

}
