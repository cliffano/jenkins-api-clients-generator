# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' GithubScmlinks Class
#'
#' @field self 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GithubScmlinks <- R6::R6Class(
  'GithubScmlinks',
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
      GithubScmlinksObject <- list()
      if (!is.null(self$`self`)) {
        GithubScmlinksObject[['self']] <- self$`self`$toJSON()
      }
      if (!is.null(self$`_class`)) {
        GithubScmlinksObject[['_class']] <- self$`_class`
      }

      GithubScmlinksObject
    },
    fromJSON = function(GithubScmlinksJson) {
      GithubScmlinksObject <- jsonlite::fromJSON(GithubScmlinksJson)
      if (!is.null(GithubScmlinksObject$`self`)) {
        selfObject <- Link$new()
        selfObject$fromJSON(jsonlite::toJSON(GithubScmlinksObject$self, auto_unbox = TRUE))
        self$`self` <- selfObject
      }
      if (!is.null(GithubScmlinksObject$`_class`)) {
        self$`_class` <- GithubScmlinksObject$`_class`
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
    fromJSONString = function(GithubScmlinksJson) {
      GithubScmlinksObject <- jsonlite::fromJSON(GithubScmlinksJson)
      LinkObject <- Link$new()
      self$`self` <- LinkObject$fromJSON(jsonlite::toJSON(GithubScmlinksObject$self, auto_unbox = TRUE))
      self$`_class` <- GithubScmlinksObject$`_class`
    }
  )
)