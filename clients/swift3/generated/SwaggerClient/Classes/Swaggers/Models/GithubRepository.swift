//
// GithubRepository.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubRepository: JSONEncodable {

    public var _class: String?
    public var links: GithubRepositorylinks?
    public var defaultBranch: String?
    public var description: String?
    public var name: String?
    public var permissions: GithubRepositorypermissions?
    public var _private: Bool?
    public var fullName: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["defaultBranch"] = self.defaultBranch
        nillableDictionary["description"] = self.description
        nillableDictionary["name"] = self.name
        nillableDictionary["permissions"] = self.permissions?.encodeToJSON()
        nillableDictionary["private"] = self._private
        nillableDictionary["fullName"] = self.fullName

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
