{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.BranchImpllinks exposing (BranchImpllinks, branchImpllinksDecoder, branchImpllinksEncoder)

import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias BranchImpllinks =
    { self : Maybe Link
    , actions : Maybe Link
    , runs : Maybe Link
    , queue : Maybe Link
    , class : Maybe String
    }


branchImpllinksDecoder : Decoder BranchImpllinks
branchImpllinksDecoder =
    decode BranchImpllinks
        |> optional "self" (Decode.nullable linkDecoder) Nothing
        |> optional "actions" (Decode.nullable linkDecoder) Nothing
        |> optional "runs" (Decode.nullable linkDecoder) Nothing
        |> optional "queue" (Decode.nullable linkDecoder) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



branchImpllinksEncoder : BranchImpllinks -> Encode.Value
branchImpllinksEncoder model =
    Encode.object
        [ ( "self", withDefault Encode.null (map linkEncoder model.self) )
        , ( "actions", withDefault Encode.null (map linkEncoder model.actions) )
        , ( "runs", withDefault Encode.null (map linkEncoder model.runs) )
        , ( "queue", withDefault Encode.null (map linkEncoder model.queue) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]

