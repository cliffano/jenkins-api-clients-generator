{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.1
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.PipelineBranchesitempullRequest exposing (PipelineBranchesitempullRequest, pipelineBranchesitempullRequestDecoder, pipelineBranchesitempullRequestEncoder)

import Data.PipelineBranchesitempullRequestlinks exposing (PipelineBranchesitempullRequestlinks, pipelineBranchesitempullRequestlinksDecoder, pipelineBranchesitempullRequestlinksEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias PipelineBranchesitempullRequest =
    { links : Maybe PipelineBranchesitempullRequestlinks
    , author : Maybe String
    , id : Maybe String
    , title : Maybe String
    , url : Maybe String
    , class : Maybe String
    }


pipelineBranchesitempullRequestDecoder : Decoder PipelineBranchesitempullRequest
pipelineBranchesitempullRequestDecoder =
    decode PipelineBranchesitempullRequest
        |> optional "_links" (Decode.nullable pipelineBranchesitempullRequestlinksDecoder) Nothing
        |> optional "author" (Decode.nullable Decode.string) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "title" (Decode.nullable Decode.string) Nothing
        |> optional "url" (Decode.nullable Decode.string) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



pipelineBranchesitempullRequestEncoder : PipelineBranchesitempullRequest -> Encode.Value
pipelineBranchesitempullRequestEncoder model =
    Encode.object
        [ ( "_links", withDefault Encode.null (map pipelineBranchesitempullRequestlinksEncoder model.links) )
        , ( "author", withDefault Encode.null (map Encode.string model.author) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "title", withDefault Encode.null (map Encode.string model.title) )
        , ( "url", withDefault Encode.null (map Encode.string model.url) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]


