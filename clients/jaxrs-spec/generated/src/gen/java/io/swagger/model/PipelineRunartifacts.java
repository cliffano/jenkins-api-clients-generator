package io.swagger.model;

import javax.validation.constraints.*;


import io.swagger.annotations.*;
import java.util.Objects;


public class PipelineRunartifacts   {
  
  private String name = null;
  private Integer size = null;
  private String url = null;
  private String propertyClass = null;

  /**
   **/
  public PipelineRunartifacts name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public PipelineRunartifacts size(Integer size) {
    this.size = size;
    return this;
  }

  
  @ApiModelProperty(value = "")
  public Integer getSize() {
    return size;
  }
  public void setSize(Integer size) {
    this.size = size;
  }

  /**
   **/
  public PipelineRunartifacts url(String url) {
    this.url = url;
    return this;
  }

  
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  /**
   **/
  public PipelineRunartifacts propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

  
  @ApiModelProperty(value = "")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineRunartifacts pipelineRunartifacts = (PipelineRunartifacts) o;
    return Objects.equals(name, pipelineRunartifacts.name) &&
        Objects.equals(size, pipelineRunartifacts.size) &&
        Objects.equals(url, pipelineRunartifacts.url) &&
        Objects.equals(propertyClass, pipelineRunartifacts.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, size, url, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineRunartifacts {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

