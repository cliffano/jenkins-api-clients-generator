/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;

/**
 * PipelineFolderImpl
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaJerseyServerCodegen", date = "2017-08-03T23:34:37.174Z")
public class PipelineFolderImpl   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("displayName")
  private String displayName = null;

  @JsonProperty("fullName")
  private String fullName = null;

  @JsonProperty("name")
  private String name = null;

  @JsonProperty("organization")
  private String organization = null;

  @JsonProperty("numberOfFolders")
  private Integer numberOfFolders = null;

  @JsonProperty("numberOfPipelines")
  private Integer numberOfPipelines = null;

  public PipelineFolderImpl propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

  /**
   * Get propertyClass
   * @return propertyClass
   **/
  @JsonProperty("_class")
  @ApiModelProperty(value = "")
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public PipelineFolderImpl displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

  /**
   * Get displayName
   * @return displayName
   **/
  @JsonProperty("displayName")
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public PipelineFolderImpl fullName(String fullName) {
    this.fullName = fullName;
    return this;
  }

  /**
   * Get fullName
   * @return fullName
   **/
  @JsonProperty("fullName")
  @ApiModelProperty(value = "")
  public String getFullName() {
    return fullName;
  }

  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  public PipelineFolderImpl name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
   **/
  @JsonProperty("name")
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public PipelineFolderImpl organization(String organization) {
    this.organization = organization;
    return this;
  }

  /**
   * Get organization
   * @return organization
   **/
  @JsonProperty("organization")
  @ApiModelProperty(value = "")
  public String getOrganization() {
    return organization;
  }

  public void setOrganization(String organization) {
    this.organization = organization;
  }

  public PipelineFolderImpl numberOfFolders(Integer numberOfFolders) {
    this.numberOfFolders = numberOfFolders;
    return this;
  }

  /**
   * Get numberOfFolders
   * @return numberOfFolders
   **/
  @JsonProperty("numberOfFolders")
  @ApiModelProperty(value = "")
  public Integer getNumberOfFolders() {
    return numberOfFolders;
  }

  public void setNumberOfFolders(Integer numberOfFolders) {
    this.numberOfFolders = numberOfFolders;
  }

  public PipelineFolderImpl numberOfPipelines(Integer numberOfPipelines) {
    this.numberOfPipelines = numberOfPipelines;
    return this;
  }

  /**
   * Get numberOfPipelines
   * @return numberOfPipelines
   **/
  @JsonProperty("numberOfPipelines")
  @ApiModelProperty(value = "")
  public Integer getNumberOfPipelines() {
    return numberOfPipelines;
  }

  public void setNumberOfPipelines(Integer numberOfPipelines) {
    this.numberOfPipelines = numberOfPipelines;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineFolderImpl pipelineFolderImpl = (PipelineFolderImpl) o;
    return Objects.equals(this.propertyClass, pipelineFolderImpl.propertyClass) &&
        Objects.equals(this.displayName, pipelineFolderImpl.displayName) &&
        Objects.equals(this.fullName, pipelineFolderImpl.fullName) &&
        Objects.equals(this.name, pipelineFolderImpl.name) &&
        Objects.equals(this.organization, pipelineFolderImpl.organization) &&
        Objects.equals(this.numberOfFolders, pipelineFolderImpl.numberOfFolders) &&
        Objects.equals(this.numberOfPipelines, pipelineFolderImpl.numberOfPipelines);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, displayName, fullName, name, organization, numberOfFolders, numberOfPipelines);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineFolderImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    fullName: ").append(toIndentedString(fullName)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    numberOfFolders: ").append(toIndentedString(numberOfFolders)).append("\n");
    sb.append("    numberOfPipelines: ").append(toIndentedString(numberOfPipelines)).append("\n");
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

