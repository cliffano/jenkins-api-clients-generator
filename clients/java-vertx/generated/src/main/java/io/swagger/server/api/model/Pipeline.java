package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.server.api.model.PipelinelatestRun;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class Pipeline   {
  
  private String propertyClass = null;
  private String organization = null;
  private String name = null;
  private String displayName = null;
  private String fullName = null;
  private Integer weatherScore = null;
  private Integer estimatedDurationInMillis = null;
  private PipelinelatestRun latestRun = null;

  public Pipeline () {

  }

  public Pipeline (String propertyClass, String organization, String name, String displayName, String fullName, Integer weatherScore, Integer estimatedDurationInMillis, PipelinelatestRun latestRun) {
    this.propertyClass = propertyClass;
    this.organization = organization;
    this.name = name;
    this.displayName = displayName;
    this.fullName = fullName;
    this.weatherScore = weatherScore;
    this.estimatedDurationInMillis = estimatedDurationInMillis;
    this.latestRun = latestRun;
  }

    
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

    
  @JsonProperty("organization")
  public String getOrganization() {
    return organization;
  }
  public void setOrganization(String organization) {
    this.organization = organization;
  }

    
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

    
  @JsonProperty("displayName")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

    
  @JsonProperty("fullName")
  public String getFullName() {
    return fullName;
  }
  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

    
  @JsonProperty("weatherScore")
  public Integer getWeatherScore() {
    return weatherScore;
  }
  public void setWeatherScore(Integer weatherScore) {
    this.weatherScore = weatherScore;
  }

    
  @JsonProperty("estimatedDurationInMillis")
  public Integer getEstimatedDurationInMillis() {
    return estimatedDurationInMillis;
  }
  public void setEstimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
  }

    
  @JsonProperty("latestRun")
  public PipelinelatestRun getLatestRun() {
    return latestRun;
  }
  public void setLatestRun(PipelinelatestRun latestRun) {
    this.latestRun = latestRun;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Pipeline pipeline = (Pipeline) o;
    return Objects.equals(propertyClass, pipeline.propertyClass) &&
        Objects.equals(organization, pipeline.organization) &&
        Objects.equals(name, pipeline.name) &&
        Objects.equals(displayName, pipeline.displayName) &&
        Objects.equals(fullName, pipeline.fullName) &&
        Objects.equals(weatherScore, pipeline.weatherScore) &&
        Objects.equals(estimatedDurationInMillis, pipeline.estimatedDurationInMillis) &&
        Objects.equals(latestRun, pipeline.latestRun);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, organization, name, displayName, fullName, weatherScore, estimatedDurationInMillis, latestRun);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Pipeline {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    fullName: ").append(toIndentedString(fullName)).append("\n");
    sb.append("    weatherScore: ").append(toIndentedString(weatherScore)).append("\n");
    sb.append("    estimatedDurationInMillis: ").append(toIndentedString(estimatedDurationInMillis)).append("\n");
    sb.append("    latestRun: ").append(toIndentedString(latestRun)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
