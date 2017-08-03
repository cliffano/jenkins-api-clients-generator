package apimodels;

import java.util.Objects;
import apimodels.InputStepImpllinks;
import apimodels.StringParameterDefinition;
import java.util.ArrayList;
import java.util.List;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import javax.validation.constraints.*;
/**
 * InputStepImpl
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-08-03T23:33:33.060Z")

public class InputStepImpl   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("_links")
  private InputStepImpllinks links = null;

  @JsonProperty("id")
  private String id = null;

  @JsonProperty("message")
  private String message = null;

  @JsonProperty("ok")
  private String ok = null;

  @JsonProperty("parameters")
  private List<StringParameterDefinition> parameters = null;

  @JsonProperty("submitter")
  private String submitter = null;

  public InputStepImpl propertyClass(String propertyClass) {
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

  public InputStepImpl links(InputStepImpllinks links) {
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @Valid
  public InputStepImpllinks getLinks() {
    return links;
  }

  public void setLinks(InputStepImpllinks links) {
    this.links = links;
  }

  public InputStepImpl id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
    public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public InputStepImpl message(String message) {
    this.message = message;
    return this;
  }

   /**
   * Get message
   * @return message
  **/
    public String getMessage() {
    return message;
  }

  public void setMessage(String message) {
    this.message = message;
  }

  public InputStepImpl ok(String ok) {
    this.ok = ok;
    return this;
  }

   /**
   * Get ok
   * @return ok
  **/
    public String getOk() {
    return ok;
  }

  public void setOk(String ok) {
    this.ok = ok;
  }

  public InputStepImpl parameters(List<StringParameterDefinition> parameters) {
    this.parameters = parameters;
    return this;
  }

  public InputStepImpl addParametersItem(StringParameterDefinition parametersItem) {
    if (this.parameters == null) {
      this.parameters = new ArrayList<StringParameterDefinition>();
    }
    this.parameters.add(parametersItem);
    return this;
  }

   /**
   * Get parameters
   * @return parameters
  **/
  @Valid
  public List<StringParameterDefinition> getParameters() {
    return parameters;
  }

  public void setParameters(List<StringParameterDefinition> parameters) {
    this.parameters = parameters;
  }

  public InputStepImpl submitter(String submitter) {
    this.submitter = submitter;
    return this;
  }

   /**
   * Get submitter
   * @return submitter
  **/
    public String getSubmitter() {
    return submitter;
  }

  public void setSubmitter(String submitter) {
    this.submitter = submitter;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InputStepImpl inputStepImpl = (InputStepImpl) o;
    return Objects.equals(this.propertyClass, inputStepImpl.propertyClass) &&
        Objects.equals(this.links, inputStepImpl.links) &&
        Objects.equals(this.id, inputStepImpl.id) &&
        Objects.equals(this.message, inputStepImpl.message) &&
        Objects.equals(this.ok, inputStepImpl.ok) &&
        Objects.equals(this.parameters, inputStepImpl.parameters) &&
        Objects.equals(this.submitter, inputStepImpl.submitter);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, id, message, ok, parameters, submitter);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InputStepImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
    sb.append("    ok: ").append(toIndentedString(ok)).append("\n");
    sb.append("    parameters: ").append(toIndentedString(parameters)).append("\n");
    sb.append("    submitter: ").append(toIndentedString(submitter)).append("\n");
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

  public void validate() {
    ValidatorFactory factory = Validation.buildDefaultValidatorFactory();
    Validator validator = factory.getValidator();
    Set<ConstraintViolation<InputStepImpl>> constraintViolations = validator.validate(this);
    if (constraintViolations.size() > 0) {
      StringBuilder errors = new StringBuilder();
      for (ConstraintViolation<InputStepImpl> contraintes : constraintViolations) {
        errors.append(String.format("%s.%s %s\n",
            contraintes.getRootBeanClass().getSimpleName(),
            contraintes.getPropertyPath(),
            contraintes.getMessage()));
      }
      throw new RuntimeException("Bean validation : " + errors);
    }
  }
}

