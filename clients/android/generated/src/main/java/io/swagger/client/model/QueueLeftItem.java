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

import io.swagger.client.model.CauseAction;
import io.swagger.client.model.FreeStyleBuild;
import io.swagger.client.model.FreeStyleProject;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class QueueLeftItem {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("actions")
  private List<CauseAction> actions = null;
  @SerializedName("blocked")
  private Boolean blocked = null;
  @SerializedName("buildable")
  private Boolean buildable = null;
  @SerializedName("id")
  private Integer id = null;
  @SerializedName("inQueueSince")
  private Integer inQueueSince = null;
  @SerializedName("params")
  private String params = null;
  @SerializedName("stuck")
  private Boolean stuck = null;
  @SerializedName("task")
  private FreeStyleProject task = null;
  @SerializedName("url")
  private String url = null;
  @SerializedName("why")
  private String why = null;
  @SerializedName("cancelled")
  private Boolean cancelled = null;
  @SerializedName("executable")
  private FreeStyleBuild executable = null;

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
  public List<CauseAction> getActions() {
    return actions;
  }
  public void setActions(List<CauseAction> actions) {
    this.actions = actions;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getBlocked() {
    return blocked;
  }
  public void setBlocked(Boolean blocked) {
    this.blocked = blocked;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getBuildable() {
    return buildable;
  }
  public void setBuildable(Boolean buildable) {
    this.buildable = buildable;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getInQueueSince() {
    return inQueueSince;
  }
  public void setInQueueSince(Integer inQueueSince) {
    this.inQueueSince = inQueueSince;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getParams() {
    return params;
  }
  public void setParams(String params) {
    this.params = params;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getStuck() {
    return stuck;
  }
  public void setStuck(Boolean stuck) {
    this.stuck = stuck;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public FreeStyleProject getTask() {
    return task;
  }
  public void setTask(FreeStyleProject task) {
    this.task = task;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getWhy() {
    return why;
  }
  public void setWhy(String why) {
    this.why = why;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getCancelled() {
    return cancelled;
  }
  public void setCancelled(Boolean cancelled) {
    this.cancelled = cancelled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public FreeStyleBuild getExecutable() {
    return executable;
  }
  public void setExecutable(FreeStyleBuild executable) {
    this.executable = executable;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueLeftItem queueLeftItem = (QueueLeftItem) o;
    return (this._class == null ? queueLeftItem._class == null : this._class.equals(queueLeftItem._class)) &&
        (this.actions == null ? queueLeftItem.actions == null : this.actions.equals(queueLeftItem.actions)) &&
        (this.blocked == null ? queueLeftItem.blocked == null : this.blocked.equals(queueLeftItem.blocked)) &&
        (this.buildable == null ? queueLeftItem.buildable == null : this.buildable.equals(queueLeftItem.buildable)) &&
        (this.id == null ? queueLeftItem.id == null : this.id.equals(queueLeftItem.id)) &&
        (this.inQueueSince == null ? queueLeftItem.inQueueSince == null : this.inQueueSince.equals(queueLeftItem.inQueueSince)) &&
        (this.params == null ? queueLeftItem.params == null : this.params.equals(queueLeftItem.params)) &&
        (this.stuck == null ? queueLeftItem.stuck == null : this.stuck.equals(queueLeftItem.stuck)) &&
        (this.task == null ? queueLeftItem.task == null : this.task.equals(queueLeftItem.task)) &&
        (this.url == null ? queueLeftItem.url == null : this.url.equals(queueLeftItem.url)) &&
        (this.why == null ? queueLeftItem.why == null : this.why.equals(queueLeftItem.why)) &&
        (this.cancelled == null ? queueLeftItem.cancelled == null : this.cancelled.equals(queueLeftItem.cancelled)) &&
        (this.executable == null ? queueLeftItem.executable == null : this.executable.equals(queueLeftItem.executable));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.actions == null ? 0: this.actions.hashCode());
    result = 31 * result + (this.blocked == null ? 0: this.blocked.hashCode());
    result = 31 * result + (this.buildable == null ? 0: this.buildable.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.inQueueSince == null ? 0: this.inQueueSince.hashCode());
    result = 31 * result + (this.params == null ? 0: this.params.hashCode());
    result = 31 * result + (this.stuck == null ? 0: this.stuck.hashCode());
    result = 31 * result + (this.task == null ? 0: this.task.hashCode());
    result = 31 * result + (this.url == null ? 0: this.url.hashCode());
    result = 31 * result + (this.why == null ? 0: this.why.hashCode());
    result = 31 * result + (this.cancelled == null ? 0: this.cancelled.hashCode());
    result = 31 * result + (this.executable == null ? 0: this.executable.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueLeftItem {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  actions: ").append(actions).append("\n");
    sb.append("  blocked: ").append(blocked).append("\n");
    sb.append("  buildable: ").append(buildable).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  inQueueSince: ").append(inQueueSince).append("\n");
    sb.append("  params: ").append(params).append("\n");
    sb.append("  stuck: ").append(stuck).append("\n");
    sb.append("  task: ").append(task).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  why: ").append(why).append("\n");
    sb.append("  cancelled: ").append(cancelled).append("\n");
    sb.append("  executable: ").append(executable).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
