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

import io.swagger.client.model.ExtensionClassImpllinks;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ExtensionClassImpl {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("_links")
  private ExtensionClassImpllinks links = null;
  @SerializedName("classes")
  private List<String> classes = null;

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
  public ExtensionClassImpllinks getLinks() {
    return links;
  }
  public void setLinks(ExtensionClassImpllinks links) {
    this.links = links;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getClasses() {
    return classes;
  }
  public void setClasses(List<String> classes) {
    this.classes = classes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ExtensionClassImpl extensionClassImpl = (ExtensionClassImpl) o;
    return (this._class == null ? extensionClassImpl._class == null : this._class.equals(extensionClassImpl._class)) &&
        (this.links == null ? extensionClassImpl.links == null : this.links.equals(extensionClassImpl.links)) &&
        (this.classes == null ? extensionClassImpl.classes == null : this.classes.equals(extensionClassImpl.classes));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.links == null ? 0: this.links.hashCode());
    result = 31 * result + (this.classes == null ? 0: this.classes.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExtensionClassImpl {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  links: ").append(links).append("\n");
    sb.append("  classes: ").append(classes).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
