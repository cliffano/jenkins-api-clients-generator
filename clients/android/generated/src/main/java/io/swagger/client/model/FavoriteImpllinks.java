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

import io.swagger.client.model.Link;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class FavoriteImpllinks {
  
  @SerializedName("self")
  private Link self = null;
  @SerializedName("_class")
  private String _class = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public Link getSelf() {
    return self;
  }
  public void setSelf(Link self) {
    this.self = self;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FavoriteImpllinks favoriteImpllinks = (FavoriteImpllinks) o;
    return (this.self == null ? favoriteImpllinks.self == null : this.self.equals(favoriteImpllinks.self)) &&
        (this._class == null ? favoriteImpllinks._class == null : this._class.equals(favoriteImpllinks._class));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.self == null ? 0: this.self.hashCode());
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class FavoriteImpllinks {\n");
    
    sb.append("  self: ").append(self).append("\n");
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
