//
// ClassesByClass.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class ClassesByClass: Codable {

    public var classes: [String]?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case classes = "classes"
        case _class = "_class"
    }

}