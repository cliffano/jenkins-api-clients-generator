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
pub struct SwapSpaceMonitorMemoryUsage2 {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "availablePhysicalMemory")]
  available_physical_memory: Option<i32>,
  #[serde(rename = "availableSwapSpace")]
  available_swap_space: Option<i32>,
  #[serde(rename = "totalPhysicalMemory")]
  total_physical_memory: Option<i32>,
  #[serde(rename = "totalSwapSpace")]
  total_swap_space: Option<i32>
}

impl SwapSpaceMonitorMemoryUsage2 {
  pub fn new() -> SwapSpaceMonitorMemoryUsage2 {
    SwapSpaceMonitorMemoryUsage2 {
      _class: None,
      available_physical_memory: None,
      available_swap_space: None,
      total_physical_memory: None,
      total_swap_space: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> SwapSpaceMonitorMemoryUsage2 {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_available_physical_memory(&mut self, available_physical_memory: i32) {
    self.available_physical_memory = Some(available_physical_memory);
  }

  pub fn with_available_physical_memory(mut self, available_physical_memory: i32) -> SwapSpaceMonitorMemoryUsage2 {
    self.available_physical_memory = Some(available_physical_memory);
    self
  }

  pub fn available_physical_memory(&self) -> Option<&i32> {
    self.available_physical_memory.as_ref()
  }

  pub fn reset_available_physical_memory(&mut self) {
    self.available_physical_memory = None;
  }

  pub fn set_available_swap_space(&mut self, available_swap_space: i32) {
    self.available_swap_space = Some(available_swap_space);
  }

  pub fn with_available_swap_space(mut self, available_swap_space: i32) -> SwapSpaceMonitorMemoryUsage2 {
    self.available_swap_space = Some(available_swap_space);
    self
  }

  pub fn available_swap_space(&self) -> Option<&i32> {
    self.available_swap_space.as_ref()
  }

  pub fn reset_available_swap_space(&mut self) {
    self.available_swap_space = None;
  }

  pub fn set_total_physical_memory(&mut self, total_physical_memory: i32) {
    self.total_physical_memory = Some(total_physical_memory);
  }

  pub fn with_total_physical_memory(mut self, total_physical_memory: i32) -> SwapSpaceMonitorMemoryUsage2 {
    self.total_physical_memory = Some(total_physical_memory);
    self
  }

  pub fn total_physical_memory(&self) -> Option<&i32> {
    self.total_physical_memory.as_ref()
  }

  pub fn reset_total_physical_memory(&mut self) {
    self.total_physical_memory = None;
  }

  pub fn set_total_swap_space(&mut self, total_swap_space: i32) {
    self.total_swap_space = Some(total_swap_space);
  }

  pub fn with_total_swap_space(mut self, total_swap_space: i32) -> SwapSpaceMonitorMemoryUsage2 {
    self.total_swap_space = Some(total_swap_space);
    self
  }

  pub fn total_swap_space(&self) -> Option<&i32> {
    self.total_swap_space.as_ref()
  }

  pub fn reset_total_swap_space(&mut self) {
    self.total_swap_space = None;
  }

}



