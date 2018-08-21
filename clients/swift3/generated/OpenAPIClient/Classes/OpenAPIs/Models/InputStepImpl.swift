//
// InputStepImpl.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class InputStepImpl: JSONEncodable {

    public var _class: String?
    public var links: InputStepImpllinks?
    public var id: String?
    public var message: String?
    public var ok: String?
    public var parameters: [StringParameterDefinition]?
    public var submitter: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["id"] = self.id
        nillableDictionary["message"] = self.message
        nillableDictionary["ok"] = self.ok
        nillableDictionary["parameters"] = self.parameters?.encodeToJSON()
        nillableDictionary["submitter"] = self.submitter

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
