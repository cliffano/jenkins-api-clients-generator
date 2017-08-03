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

import io.swagger.client.model.HudsonMasterComputer;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComputerSet {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("busyExecutors")
  private Integer busyExecutors = null;
  @SerializedName("computer")
  private List<HudsonMasterComputer> computer = null;
  @SerializedName("displayName")
  private String displayName = null;
  @SerializedName("totalExecutors")
  private Integer totalExecutors = null;

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
  public Integer getBusyExecutors() {
    return busyExecutors;
  }
  public void setBusyExecutors(Integer busyExecutors) {
    this.busyExecutors = busyExecutors;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonMasterComputer> getComputer() {
    return computer;
  }
  public void setComputer(List<HudsonMasterComputer> computer) {
    this.computer = computer;
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
  public Integer getTotalExecutors() {
    return totalExecutors;
  }
  public void setTotalExecutors(Integer totalExecutors) {
    this.totalExecutors = totalExecutors;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComputerSet computerSet = (ComputerSet) o;
    return (this._class == null ? computerSet._class == null : this._class.equals(computerSet._class)) &&
        (this.busyExecutors == null ? computerSet.busyExecutors == null : this.busyExecutors.equals(computerSet.busyExecutors)) &&
        (this.computer == null ? computerSet.computer == null : this.computer.equals(computerSet.computer)) &&
        (this.displayName == null ? computerSet.displayName == null : this.displayName.equals(computerSet.displayName)) &&
        (this.totalExecutors == null ? computerSet.totalExecutors == null : this.totalExecutors.equals(computerSet.totalExecutors));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.busyExecutors == null ? 0: this.busyExecutors.hashCode());
    result = 31 * result + (this.computer == null ? 0: this.computer.hashCode());
    result = 31 * result + (this.displayName == null ? 0: this.displayName.hashCode());
    result = 31 * result + (this.totalExecutors == null ? 0: this.totalExecutors.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComputerSet {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  busyExecutors: ").append(busyExecutors).append("\n");
    sb.append("  computer: ").append(computer).append("\n");
    sb.append("  displayName: ").append(displayName).append("\n");
    sb.append("  totalExecutors: ").append(totalExecutors).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
