package apimodels;

import apimodels.CauseAction;
import apimodels.FreeStyleProject;
import java.util.ArrayList;
import java.util.List;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
/**
 * QueueBlockedItem
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2018-08-21T02:12:05.971Z[GMT]")

@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class QueueBlockedItem   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("actions")
  private List<CauseAction> actions = null;

  @JsonProperty("blocked")
  private Boolean blocked = null;

  @JsonProperty("buildable")
  private Boolean buildable = null;

  @JsonProperty("id")
  private Integer id = null;

  @JsonProperty("inQueueSince")
  private Integer inQueueSince = null;

  @JsonProperty("params")
  private String params = null;

  @JsonProperty("stuck")
  private Boolean stuck = null;

  @JsonProperty("task")
  private FreeStyleProject task = null;

  @JsonProperty("url")
  private String url = null;

  @JsonProperty("why")
  private String why = null;

  @JsonProperty("buildableStartMilliseconds")
  private Integer buildableStartMilliseconds = null;

  public QueueBlockedItem propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
    public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public QueueBlockedItem actions(List<CauseAction> actions) {
    this.actions = actions;
    return this;
  }

  public QueueBlockedItem addActionsItem(CauseAction actionsItem) {
    if (actions == null) {
      actions = new ArrayList<>();
    }
    actions.add(actionsItem);
    return this;
  }

   /**
   * Get actions
   * @return actions
  **/
  @Valid
  public List<CauseAction> getActions() {
    return actions;
  }

  public void setActions(List<CauseAction> actions) {
    this.actions = actions;
  }

  public QueueBlockedItem blocked(Boolean blocked) {
    this.blocked = blocked;
    return this;
  }

   /**
   * Get blocked
   * @return blocked
  **/
    public Boolean getBlocked() {
    return blocked;
  }

  public void setBlocked(Boolean blocked) {
    this.blocked = blocked;
  }

  public QueueBlockedItem buildable(Boolean buildable) {
    this.buildable = buildable;
    return this;
  }

   /**
   * Get buildable
   * @return buildable
  **/
    public Boolean getBuildable() {
    return buildable;
  }

  public void setBuildable(Boolean buildable) {
    this.buildable = buildable;
  }

  public QueueBlockedItem id(Integer id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
    public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public QueueBlockedItem inQueueSince(Integer inQueueSince) {
    this.inQueueSince = inQueueSince;
    return this;
  }

   /**
   * Get inQueueSince
   * @return inQueueSince
  **/
    public Integer getInQueueSince() {
    return inQueueSince;
  }

  public void setInQueueSince(Integer inQueueSince) {
    this.inQueueSince = inQueueSince;
  }

  public QueueBlockedItem params(String params) {
    this.params = params;
    return this;
  }

   /**
   * Get params
   * @return params
  **/
    public String getParams() {
    return params;
  }

  public void setParams(String params) {
    this.params = params;
  }

  public QueueBlockedItem stuck(Boolean stuck) {
    this.stuck = stuck;
    return this;
  }

   /**
   * Get stuck
   * @return stuck
  **/
    public Boolean getStuck() {
    return stuck;
  }

  public void setStuck(Boolean stuck) {
    this.stuck = stuck;
  }

  public QueueBlockedItem task(FreeStyleProject task) {
    this.task = task;
    return this;
  }

   /**
   * Get task
   * @return task
  **/
  @Valid
  public FreeStyleProject getTask() {
    return task;
  }

  public void setTask(FreeStyleProject task) {
    this.task = task;
  }

  public QueueBlockedItem url(String url) {
    this.url = url;
    return this;
  }

   /**
   * Get url
   * @return url
  **/
    public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public QueueBlockedItem why(String why) {
    this.why = why;
    return this;
  }

   /**
   * Get why
   * @return why
  **/
    public String getWhy() {
    return why;
  }

  public void setWhy(String why) {
    this.why = why;
  }

  public QueueBlockedItem buildableStartMilliseconds(Integer buildableStartMilliseconds) {
    this.buildableStartMilliseconds = buildableStartMilliseconds;
    return this;
  }

   /**
   * Get buildableStartMilliseconds
   * @return buildableStartMilliseconds
  **/
    public Integer getBuildableStartMilliseconds() {
    return buildableStartMilliseconds;
  }

  public void setBuildableStartMilliseconds(Integer buildableStartMilliseconds) {
    this.buildableStartMilliseconds = buildableStartMilliseconds;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueBlockedItem queueBlockedItem = (QueueBlockedItem) o;
    return Objects.equals(propertyClass, queueBlockedItem.propertyClass) &&
        Objects.equals(actions, queueBlockedItem.actions) &&
        Objects.equals(blocked, queueBlockedItem.blocked) &&
        Objects.equals(buildable, queueBlockedItem.buildable) &&
        Objects.equals(id, queueBlockedItem.id) &&
        Objects.equals(inQueueSince, queueBlockedItem.inQueueSince) &&
        Objects.equals(params, queueBlockedItem.params) &&
        Objects.equals(stuck, queueBlockedItem.stuck) &&
        Objects.equals(task, queueBlockedItem.task) &&
        Objects.equals(url, queueBlockedItem.url) &&
        Objects.equals(why, queueBlockedItem.why) &&
        Objects.equals(buildableStartMilliseconds, queueBlockedItem.buildableStartMilliseconds);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, actions, blocked, buildable, id, inQueueSince, params, stuck, task, url, why, buildableStartMilliseconds);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueBlockedItem {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    actions: ").append(toIndentedString(actions)).append("\n");
    sb.append("    blocked: ").append(toIndentedString(blocked)).append("\n");
    sb.append("    buildable: ").append(toIndentedString(buildable)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    inQueueSince: ").append(toIndentedString(inQueueSince)).append("\n");
    sb.append("    params: ").append(toIndentedString(params)).append("\n");
    sb.append("    stuck: ").append(toIndentedString(stuck)).append("\n");
    sb.append("    task: ").append(toIndentedString(task)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    why: ").append(toIndentedString(why)).append("\n");
    sb.append("    buildableStartMilliseconds: ").append(toIndentedString(buildableStartMilliseconds)).append("\n");
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
