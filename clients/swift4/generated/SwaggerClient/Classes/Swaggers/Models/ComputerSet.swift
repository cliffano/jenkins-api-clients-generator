//
// ComputerSet.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class ComputerSet: Codable {

    public var _class: String?
    public var busyExecutors: Int?
    public var computer: [HudsonMasterComputer]?
    public var displayName: String?
    public var totalExecutors: Int?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case busyExecutors = "busyExecutors"
        case computer = "computer"
        case displayName = "displayName"
        case totalExecutors = "totalExecutors"
    }

}
