# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' GithubRespositoryContainerlinks Class
#'
#' @field self 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GithubRespositoryContainerlinks <- R6::R6Class(
  'GithubRespositoryContainerlinks',
  public = list(
    `self` = NULL,
    `_class` = NULL,
    initialize = function(`self`, `_class`){
      if (!missing(`self`)) {
        stopifnot(R6::is.R6(`self`))
        self$`self` <- `self`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      GithubRespositoryContainerlinksObject <- list()
      if (!is.null(self$`self`)) {
        GithubRespositoryContainerlinksObject[['self']] <- self$`self`$toJSON()
      }
      if (!is.null(self$`_class`)) {
        GithubRespositoryContainerlinksObject[['_class']] <- self$`_class`
      }

      GithubRespositoryContainerlinksObject
    },
    fromJSON = function(GithubRespositoryContainerlinksJson) {
      GithubRespositoryContainerlinksObject <- jsonlite::fromJSON(GithubRespositoryContainerlinksJson)
      if (!is.null(GithubRespositoryContainerlinksObject$`self`)) {
        selfObject <- Link$new()
        selfObject$fromJSON(jsonlite::toJSON(GithubRespositoryContainerlinksObject$self, auto_unbox = TRUE))
        self$`self` <- selfObject
      }
      if (!is.null(GithubRespositoryContainerlinksObject$`_class`)) {
        self$`_class` <- GithubRespositoryContainerlinksObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "self": %s,
           "_class": %s
        }',
        self$`self`$toJSON(),
        self$`_class`
      )
    },
    fromJSONString = function(GithubRespositoryContainerlinksJson) {
      GithubRespositoryContainerlinksObject <- jsonlite::fromJSON(GithubRespositoryContainerlinksJson)
      LinkObject <- Link$new()
      self$`self` <- LinkObject$fromJSON(jsonlite::toJSON(GithubRespositoryContainerlinksObject$self, auto_unbox = TRUE))
      self$`_class` <- GithubRespositoryContainerlinksObject$`_class`
    }
  )
)
