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
    /// QueueItemImpl
    /// </summary>
    [DataContract]
    public partial class QueueItemImpl :  IEquatable<QueueItemImpl>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="QueueItemImpl" /> class.
        /// </summary>
        /// <param name="_class">_class.</param>
        /// <param name="expectedBuildNumber">expectedBuildNumber.</param>
        /// <param name="id">id.</param>
        /// <param name="pipeline">pipeline.</param>
        /// <param name="queuedTime">queuedTime.</param>
        public QueueItemImpl(string _class = default(string), int? expectedBuildNumber = default(int?), string id = default(string), string pipeline = default(string), int? queuedTime = default(int?))
        {
            this.Class = _class;
            this.ExpectedBuildNumber = expectedBuildNumber;
            this.Id = id;
            this.Pipeline = pipeline;
            this.QueuedTime = queuedTime;
        }
        
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets ExpectedBuildNumber
        /// </summary>
        [DataMember(Name="expectedBuildNumber", EmitDefaultValue=false)]
        public int? ExpectedBuildNumber { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Pipeline
        /// </summary>
        [DataMember(Name="pipeline", EmitDefaultValue=false)]
        public string Pipeline { get; set; }

        /// <summary>
        /// Gets or Sets QueuedTime
        /// </summary>
        [DataMember(Name="queuedTime", EmitDefaultValue=false)]
        public int? QueuedTime { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueueItemImpl {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  ExpectedBuildNumber: ").Append(ExpectedBuildNumber).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Pipeline: ").Append(Pipeline).Append("\n");
            sb.Append("  QueuedTime: ").Append(QueuedTime).Append("\n");
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
            return this.Equals(input as QueueItemImpl);
        }

        /// <summary>
        /// Returns true if QueueItemImpl instances are equal
        /// </summary>
        /// <param name="input">Instance of QueueItemImpl to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(QueueItemImpl input)
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
                    this.ExpectedBuildNumber == input.ExpectedBuildNumber ||
                    (this.ExpectedBuildNumber != null &&
                    this.ExpectedBuildNumber.Equals(input.ExpectedBuildNumber))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Pipeline == input.Pipeline ||
                    (this.Pipeline != null &&
                    this.Pipeline.Equals(input.Pipeline))
                ) && 
                (
                    this.QueuedTime == input.QueuedTime ||
                    (this.QueuedTime != null &&
                    this.QueuedTime.Equals(input.QueuedTime))
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
                if (this.ExpectedBuildNumber != null)
                    hashCode = hashCode * 59 + this.ExpectedBuildNumber.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.Pipeline != null)
                    hashCode = hashCode * 59 + this.Pipeline.GetHashCode();
                if (this.QueuedTime != null)
                    hashCode = hashCode * 59 + this.QueuedTime.GetHashCode();
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