/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
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
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// ClassesByClass
    /// </summary>
    [DataContract]
    public partial class ClassesByClass :  IEquatable<ClassesByClass>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ClassesByClass" /> class.
        /// </summary>
        /// <param name="Classes">Classes.</param>
        /// <param name="_Class">_Class.</param>
        public ClassesByClass(List<string> Classes = default(List<string>), string _Class = default(string))
        {
            this.Classes = Classes;
            this._Class = _Class;
        }
        
        /// <summary>
        /// Gets or Sets Classes
        /// </summary>
        [DataMember(Name="classes", EmitDefaultValue=false)]
        public List<string> Classes { get; set; }

        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClassesByClass {\n");
            sb.Append("  Classes: ").Append(Classes).Append("\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
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
            return this.Equals(input as ClassesByClass);
        }

        /// <summary>
        /// Returns true if ClassesByClass instances are equal
        /// </summary>
        /// <param name="input">Instance of ClassesByClass to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ClassesByClass input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Classes == input.Classes ||
                    (this.Classes != null &&
                    this.Classes.SequenceEqual(input.Classes))
                ) && 
                (
                    this._Class == input._Class ||
                    (this._Class != null &&
                    this._Class.Equals(input._Class))
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
                if (this.Classes != null)
                    hashCode = hashCode * 59 + this.Classes.GetHashCode();
                if (this._Class != null)
                    hashCode = hashCode * 59 + this._Class.GetHashCode();
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
