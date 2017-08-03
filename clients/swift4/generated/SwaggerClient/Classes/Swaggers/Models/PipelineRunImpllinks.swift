//
// PipelineRunImpllinks.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class PipelineRunImpllinks: Codable {

    public var nodes: Link?
    public var log: Link?
    public var _self: Link?
    public var actions: Link?
    public var steps: Link?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case nodes = "nodes"
        case log = "log"
        case _self = "self"
        case actions = "actions"
        case steps = "steps"
        case _class = "_class"
    }

}
