/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct DefaultCrumbIssuer {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "crumb")]
  crumb: Option<String>,
  #[serde(rename = "crumbRequestField")]
  crumb_request_field: Option<String>
}

impl DefaultCrumbIssuer {
  pub fn new() -> DefaultCrumbIssuer {
    DefaultCrumbIssuer {
      _class: None,
      crumb: None,
      crumb_request_field: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> DefaultCrumbIssuer {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_crumb(&mut self, crumb: String) {
    self.crumb = Some(crumb);
  }

  pub fn with_crumb(mut self, crumb: String) -> DefaultCrumbIssuer {
    self.crumb = Some(crumb);
    self
  }

  pub fn crumb(&self) -> Option<&String> {
    self.crumb.as_ref()
  }

  pub fn reset_crumb(&mut self) {
    self.crumb = None;
  }

  pub fn set_crumb_request_field(&mut self, crumb_request_field: String) {
    self.crumb_request_field = Some(crumb_request_field);
  }

  pub fn with_crumb_request_field(mut self, crumb_request_field: String) -> DefaultCrumbIssuer {
    self.crumb_request_field = Some(crumb_request_field);
    self
  }

  pub fn crumb_request_field(&self) -> Option<&String> {
    self.crumb_request_field.as_ref()
  }

  pub fn reset_crumb_request_field(&mut self) {
    self.crumb_request_field = None;
  }

}



