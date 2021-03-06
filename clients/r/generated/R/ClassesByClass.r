# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' ClassesByClass Class
#'
#' @field classes 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ClassesByClass <- R6::R6Class(
  'ClassesByClass',
  public = list(
    `classes` = NULL,
    `_class` = NULL,
    initialize = function(`classes`, `_class`){
      if (!missing(`classes`)) {
        stopifnot(is.list(`classes`), length(`classes`) != 0)
        lapply(`classes`, function(x) stopifnot(is.character(x)))
        self$`classes` <- `classes`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      ClassesByClassObject <- list()
      if (!is.null(self$`classes`)) {
        ClassesByClassObject[['classes']] <- self$`classes`
      }
      if (!is.null(self$`_class`)) {
        ClassesByClassObject[['_class']] <- self$`_class`
      }

      ClassesByClassObject
    },
    fromJSON = function(ClassesByClassJson) {
      ClassesByClassObject <- jsonlite::fromJSON(ClassesByClassJson)
      if (!is.null(ClassesByClassObject$`classes`)) {
        self$`classes` <- ClassesByClassObject$`classes`
      }
      if (!is.null(ClassesByClassObject$`_class`)) {
        self$`_class` <- ClassesByClassObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "classes": [%s],
           "_class": %s
        }',
        lapply(self$`classes`, function(x) paste(paste0('"', x, '"'), sep=",")),
        self$`_class`
      )
    },
    fromJSONString = function(ClassesByClassJson) {
      ClassesByClassObject <- jsonlite::fromJSON(ClassesByClassJson)
      self$`classes` <- ClassesByClassObject$`classes`
      self$`_class` <- ClassesByClassObject$`_class`
    }
  )
)
