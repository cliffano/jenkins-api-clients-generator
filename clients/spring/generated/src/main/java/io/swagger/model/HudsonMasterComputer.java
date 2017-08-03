package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.HudsonMasterComputerexecutors;
import io.swagger.model.HudsonMasterComputermonitorData;
import io.swagger.model.Label1;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * HudsonMasterComputer
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.SpringCodegen", date = "2017-08-03T23:37:43.850Z")

public class HudsonMasterComputer   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("displayName")
  private String displayName = null;

  @JsonProperty("executors")
  private List<HudsonMasterComputerexecutors> executors = null;

  @JsonProperty("icon")
  private String icon = null;

  @JsonProperty("iconClassName")
  private String iconClassName = null;

  @JsonProperty("idle")
  private Boolean idle = null;

  @JsonProperty("jnlpAgent")
  private Boolean jnlpAgent = null;

  @JsonProperty("launchSupported")
  private Boolean launchSupported = null;

  @JsonProperty("loadStatistics")
  private Label1 loadStatistics = null;

  @JsonProperty("manualLaunchAllowed")
  private Boolean manualLaunchAllowed = null;

  @JsonProperty("monitorData")
  private HudsonMasterComputermonitorData monitorData = null;

  @JsonProperty("numExecutors")
  private Integer numExecutors = null;

  @JsonProperty("offline")
  private Boolean offline = null;

  @JsonProperty("offlineCause")
  private String offlineCause = null;

  @JsonProperty("offlineCauseReason")
  private String offlineCauseReason = null;

  @JsonProperty("temporarilyOffline")
  private Boolean temporarilyOffline = null;

  public HudsonMasterComputer propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")


  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public HudsonMasterComputer displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

   /**
   * Get displayName
   * @return displayName
  **/
  @ApiModelProperty(value = "")


  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public HudsonMasterComputer executors(List<HudsonMasterComputerexecutors> executors) {
    this.executors = executors;
    return this;
  }

  public HudsonMasterComputer addExecutorsItem(HudsonMasterComputerexecutors executorsItem) {
    if (this.executors == null) {
      this.executors = new ArrayList<HudsonMasterComputerexecutors>();
    }
    this.executors.add(executorsItem);
    return this;
  }

   /**
   * Get executors
   * @return executors
  **/
  @ApiModelProperty(value = "")

  @Valid

  public List<HudsonMasterComputerexecutors> getExecutors() {
    return executors;
  }

  public void setExecutors(List<HudsonMasterComputerexecutors> executors) {
    this.executors = executors;
  }

  public HudsonMasterComputer icon(String icon) {
    this.icon = icon;
    return this;
  }

   /**
   * Get icon
   * @return icon
  **/
  @ApiModelProperty(value = "")


  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HudsonMasterComputer iconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
    return this;
  }

   /**
   * Get iconClassName
   * @return iconClassName
  **/
  @ApiModelProperty(value = "")


  public String getIconClassName() {
    return iconClassName;
  }

  public void setIconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
  }

  public HudsonMasterComputer idle(Boolean idle) {
    this.idle = idle;
    return this;
  }

   /**
   * Get idle
   * @return idle
  **/
  @ApiModelProperty(value = "")


  public Boolean isIdle() {
    return idle;
  }

  public void setIdle(Boolean idle) {
    this.idle = idle;
  }

  public HudsonMasterComputer jnlpAgent(Boolean jnlpAgent) {
    this.jnlpAgent = jnlpAgent;
    return this;
  }

   /**
   * Get jnlpAgent
   * @return jnlpAgent
  **/
  @ApiModelProperty(value = "")


  public Boolean isJnlpAgent() {
    return jnlpAgent;
  }

  public void setJnlpAgent(Boolean jnlpAgent) {
    this.jnlpAgent = jnlpAgent;
  }

  public HudsonMasterComputer launchSupported(Boolean launchSupported) {
    this.launchSupported = launchSupported;
    return this;
  }

   /**
   * Get launchSupported
   * @return launchSupported
  **/
  @ApiModelProperty(value = "")


  public Boolean isLaunchSupported() {
    return launchSupported;
  }

  public void setLaunchSupported(Boolean launchSupported) {
    this.launchSupported = launchSupported;
  }

  public HudsonMasterComputer loadStatistics(Label1 loadStatistics) {
    this.loadStatistics = loadStatistics;
    return this;
  }

   /**
   * Get loadStatistics
   * @return loadStatistics
  **/
  @ApiModelProperty(value = "")

  @Valid

  public Label1 getLoadStatistics() {
    return loadStatistics;
  }

  public void setLoadStatistics(Label1 loadStatistics) {
    this.loadStatistics = loadStatistics;
  }

  public HudsonMasterComputer manualLaunchAllowed(Boolean manualLaunchAllowed) {
    this.manualLaunchAllowed = manualLaunchAllowed;
    return this;
  }

   /**
   * Get manualLaunchAllowed
   * @return manualLaunchAllowed
  **/
  @ApiModelProperty(value = "")


  public Boolean isManualLaunchAllowed() {
    return manualLaunchAllowed;
  }

  public void setManualLaunchAllowed(Boolean manualLaunchAllowed) {
    this.manualLaunchAllowed = manualLaunchAllowed;
  }

  public HudsonMasterComputer monitorData(HudsonMasterComputermonitorData monitorData) {
    this.monitorData = monitorData;
    return this;
  }

   /**
   * Get monitorData
   * @return monitorData
  **/
  @ApiModelProperty(value = "")

  @Valid

  public HudsonMasterComputermonitorData getMonitorData() {
    return monitorData;
  }

  public void setMonitorData(HudsonMasterComputermonitorData monitorData) {
    this.monitorData = monitorData;
  }

  public HudsonMasterComputer numExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
    return this;
  }

   /**
   * Get numExecutors
   * @return numExecutors
  **/
  @ApiModelProperty(value = "")


  public Integer getNumExecutors() {
    return numExecutors;
  }

  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

  public HudsonMasterComputer offline(Boolean offline) {
    this.offline = offline;
    return this;
  }

   /**
   * Get offline
   * @return offline
  **/
  @ApiModelProperty(value = "")


  public Boolean isOffline() {
    return offline;
  }

  public void setOffline(Boolean offline) {
    this.offline = offline;
  }

  public HudsonMasterComputer offlineCause(String offlineCause) {
    this.offlineCause = offlineCause;
    return this;
  }

   /**
   * Get offlineCause
   * @return offlineCause
  **/
  @ApiModelProperty(value = "")


  public String getOfflineCause() {
    return offlineCause;
  }

  public void setOfflineCause(String offlineCause) {
    this.offlineCause = offlineCause;
  }

  public HudsonMasterComputer offlineCauseReason(String offlineCauseReason) {
    this.offlineCauseReason = offlineCauseReason;
    return this;
  }

   /**
   * Get offlineCauseReason
   * @return offlineCauseReason
  **/
  @ApiModelProperty(value = "")


  public String getOfflineCauseReason() {
    return offlineCauseReason;
  }

  public void setOfflineCauseReason(String offlineCauseReason) {
    this.offlineCauseReason = offlineCauseReason;
  }

  public HudsonMasterComputer temporarilyOffline(Boolean temporarilyOffline) {
    this.temporarilyOffline = temporarilyOffline;
    return this;
  }

   /**
   * Get temporarilyOffline
   * @return temporarilyOffline
  **/
  @ApiModelProperty(value = "")


  public Boolean isTemporarilyOffline() {
    return temporarilyOffline;
  }

  public void setTemporarilyOffline(Boolean temporarilyOffline) {
    this.temporarilyOffline = temporarilyOffline;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonMasterComputer hudsonMasterComputer = (HudsonMasterComputer) o;
    return Objects.equals(this.propertyClass, hudsonMasterComputer.propertyClass) &&
        Objects.equals(this.displayName, hudsonMasterComputer.displayName) &&
        Objects.equals(this.executors, hudsonMasterComputer.executors) &&
        Objects.equals(this.icon, hudsonMasterComputer.icon) &&
        Objects.equals(this.iconClassName, hudsonMasterComputer.iconClassName) &&
        Objects.equals(this.idle, hudsonMasterComputer.idle) &&
        Objects.equals(this.jnlpAgent, hudsonMasterComputer.jnlpAgent) &&
        Objects.equals(this.launchSupported, hudsonMasterComputer.launchSupported) &&
        Objects.equals(this.loadStatistics, hudsonMasterComputer.loadStatistics) &&
        Objects.equals(this.manualLaunchAllowed, hudsonMasterComputer.manualLaunchAllowed) &&
        Objects.equals(this.monitorData, hudsonMasterComputer.monitorData) &&
        Objects.equals(this.numExecutors, hudsonMasterComputer.numExecutors) &&
        Objects.equals(this.offline, hudsonMasterComputer.offline) &&
        Objects.equals(this.offlineCause, hudsonMasterComputer.offlineCause) &&
        Objects.equals(this.offlineCauseReason, hudsonMasterComputer.offlineCauseReason) &&
        Objects.equals(this.temporarilyOffline, hudsonMasterComputer.temporarilyOffline);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, displayName, executors, icon, iconClassName, idle, jnlpAgent, launchSupported, loadStatistics, manualLaunchAllowed, monitorData, numExecutors, offline, offlineCause, offlineCauseReason, temporarilyOffline);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonMasterComputer {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    executors: ").append(toIndentedString(executors)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconClassName: ").append(toIndentedString(iconClassName)).append("\n");
    sb.append("    idle: ").append(toIndentedString(idle)).append("\n");
    sb.append("    jnlpAgent: ").append(toIndentedString(jnlpAgent)).append("\n");
    sb.append("    launchSupported: ").append(toIndentedString(launchSupported)).append("\n");
    sb.append("    loadStatistics: ").append(toIndentedString(loadStatistics)).append("\n");
    sb.append("    manualLaunchAllowed: ").append(toIndentedString(manualLaunchAllowed)).append("\n");
    sb.append("    monitorData: ").append(toIndentedString(monitorData)).append("\n");
    sb.append("    numExecutors: ").append(toIndentedString(numExecutors)).append("\n");
    sb.append("    offline: ").append(toIndentedString(offline)).append("\n");
    sb.append("    offlineCause: ").append(toIndentedString(offlineCause)).append("\n");
    sb.append("    offlineCauseReason: ").append(toIndentedString(offlineCauseReason)).append("\n");
    sb.append("    temporarilyOffline: ").append(toIndentedString(temporarilyOffline)).append("\n");
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

