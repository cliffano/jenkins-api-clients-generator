package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import io.swagger.server.api.model.CauseUserIdCause;
import java.util.ArrayList;
import java.util.List;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class CauseAction   {
  
  private String propertyClass = null;
  private List<CauseUserIdCause> causes = new ArrayList<CauseUserIdCause>();

  public CauseAction () {

  }

  public CauseAction (String propertyClass, List<CauseUserIdCause> causes) {
    this.propertyClass = propertyClass;
    this.causes = causes;
  }

    
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

    
  @JsonProperty("causes")
  public List<CauseUserIdCause> getCauses() {
    return causes;
  }
  public void setCauses(List<CauseUserIdCause> causes) {
    this.causes = causes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CauseAction causeAction = (CauseAction) o;
    return Objects.equals(propertyClass, causeAction.propertyClass) &&
        Objects.equals(causes, causeAction.causes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, causes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CauseAction {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    causes: ").append(toIndentedString(causes)).append("\n");
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
