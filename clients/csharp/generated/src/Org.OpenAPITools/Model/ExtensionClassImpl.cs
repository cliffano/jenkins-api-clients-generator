/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// ExtensionClassImpl
    /// </summary>
    [DataContract]
    public partial class ExtensionClassImpl :  IEquatable<ExtensionClassImpl>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ExtensionClassImpl" /> class.
        /// </summary>
        /// <param name="_class">_class.</param>
        /// <param name="links">links.</param>
        /// <param name="classes">classes.</param>
        public ExtensionClassImpl(string _class = default(string), ExtensionClassImpllinks links = default(ExtensionClassImpllinks), List<string> classes = default(List<string>))
        {
            this.Class = _class;
            this.Links = links;
            this.Classes = classes;
        }
        
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links", EmitDefaultValue=false)]
        public ExtensionClassImpllinks Links { get; set; }

        /// <summary>
        /// Gets or Sets Classes
        /// </summary>
        [DataMember(Name="classes", EmitDefaultValue=false)]
        public List<string> Classes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ExtensionClassImpl {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Links: ").Append(Links).Append("\n");
            sb.Append("  Classes: ").Append(Classes).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as ExtensionClassImpl);
        }

        /// <summary>
        /// Returns true if ExtensionClassImpl instances are equal
        /// </summary>
        /// <param name="input">Instance of ExtensionClassImpl to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ExtensionClassImpl input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Class == input.Class ||
                    (this.Class != null &&
                    this.Class.Equals(input.Class))
                ) && 
                (
                    this.Links == input.Links ||
                    (this.Links != null &&
                    this.Links.Equals(input.Links))
                ) && 
                (
                    this.Classes == input.Classes ||
                    this.Classes != null &&
                    this.Classes.SequenceEqual(input.Classes)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Class != null)
                    hashCode = hashCode * 59 + this.Class.GetHashCode();
                if (this.Links != null)
                    hashCode = hashCode * 59 + this.Links.GetHashCode();
                if (this.Classes != null)
                    hashCode = hashCode * 59 + this.Classes.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}