/**
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

package io.swagger.client.model;

import io.swagger.client.model.InputStepImpl;
import io.swagger.client.model.PipelineStepImpllinks;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class PipelineStepImpl {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("_links")
  private PipelineStepImpllinks links = null;
  @SerializedName("displayName")
  private String displayName = null;
  @SerializedName("durationInMillis")
  private Integer durationInMillis = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("input")
  private InputStepImpl input = null;
  @SerializedName("result")
  private String result = null;
  @SerializedName("startTime")
  private String startTime = null;
  @SerializedName("state")
  private String state = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public PipelineStepImpllinks getLinks() {
    return links;
  }
  public void setLinks(PipelineStepImpllinks links) {
    this.links = links;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getDurationInMillis() {
    return durationInMillis;
  }
  public void setDurationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public InputStepImpl getInput() {
    return input;
  }
  public void setInput(InputStepImpl input) {
    this.input = input;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getResult() {
    return result;
  }
  public void setResult(String result) {
    this.result = result;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getStartTime() {
    return startTime;
  }
  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineStepImpl pipelineStepImpl = (PipelineStepImpl) o;
    return (this._class == null ? pipelineStepImpl._class == null : this._class.equals(pipelineStepImpl._class)) &&
        (this.links == null ? pipelineStepImpl.links == null : this.links.equals(pipelineStepImpl.links)) &&
        (this.displayName == null ? pipelineStepImpl.displayName == null : this.displayName.equals(pipelineStepImpl.displayName)) &&
        (this.durationInMillis == null ? pipelineStepImpl.durationInMillis == null : this.durationInMillis.equals(pipelineStepImpl.durationInMillis)) &&
        (this.id == null ? pipelineStepImpl.id == null : this.id.equals(pipelineStepImpl.id)) &&
        (this.input == null ? pipelineStepImpl.input == null : this.input.equals(pipelineStepImpl.input)) &&
        (this.result == null ? pipelineStepImpl.result == null : this.result.equals(pipelineStepImpl.result)) &&
        (this.startTime == null ? pipelineStepImpl.startTime == null : this.startTime.equals(pipelineStepImpl.startTime)) &&
        (this.state == null ? pipelineStepImpl.state == null : this.state.equals(pipelineStepImpl.state));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.links == null ? 0: this.links.hashCode());
    result = 31 * result + (this.displayName == null ? 0: this.displayName.hashCode());
    result = 31 * result + (this.durationInMillis == null ? 0: this.durationInMillis.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.input == null ? 0: this.input.hashCode());
    result = 31 * result + (this.result == null ? 0: this.result.hashCode());
    result = 31 * result + (this.startTime == null ? 0: this.startTime.hashCode());
    result = 31 * result + (this.state == null ? 0: this.state.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineStepImpl {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  links: ").append(links).append("\n");
    sb.append("  displayName: ").append(displayName).append("\n");
    sb.append("  durationInMillis: ").append(durationInMillis).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  input: ").append(input).append("\n");
    sb.append("  result: ").append(result).append("\n");
    sb.append("  startTime: ").append(startTime).append("\n");
    sb.append("  state: ").append(state).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
