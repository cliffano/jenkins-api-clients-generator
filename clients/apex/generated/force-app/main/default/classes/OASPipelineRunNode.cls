/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASPipelineRunNode
 */
public class OASPipelineRunNode implements OAS.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get displayName
     * @return displayName
     */
    public String displayName { get; set; }

    /**
     * Get durationInMillis
     * @return durationInMillis
     */
    public Integer durationInMillis { get; set; }

    /**
     * Get edges
     * @return edges
     */
    public List<OASPipelineRunNodeedges> edges { get; set; }

    /**
     * Get id
     * @return id
     */
    public String id { get; set; }

    /**
     * Get result
     * @return result
     */
    public String result { get; set; }

    /**
     * Get startTime
     * @return startTime
     */
    public String startTime { get; set; }

    /**
     * Get state
     * @return state
     */
    public String state { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public OASPipelineRunNode() {
        edges = new List<OASPipelineRunNodeedges>();
    }

    public static OASPipelineRunNode getExample() {
        OASPipelineRunNode pipelineRunNode = new OASPipelineRunNode();
          pipelineRunNode.propertyClass = '';
          pipelineRunNode.displayName = '';
          pipelineRunNode.durationInMillis = 0;
          pipelineRunNode.edges = new List<OASPipelineRunNodeedges>{OASPipelineRunNodeedges.getExample()};
          pipelineRunNode.id = '';
          pipelineRunNode.result = '';
          pipelineRunNode.startTime = '';
          pipelineRunNode.state = '';
        return pipelineRunNode;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASPipelineRunNode) {           
            OASPipelineRunNode pipelineRunNode = (OASPipelineRunNode) obj;
            return this.propertyClass == pipelineRunNode.propertyClass
                && this.displayName == pipelineRunNode.displayName
                && this.durationInMillis == pipelineRunNode.durationInMillis
                && this.edges == pipelineRunNode.edges
                && this.id == pipelineRunNode.id
                && this.result == pipelineRunNode.result
                && this.startTime == pipelineRunNode.startTime
                && this.state == pipelineRunNode.state;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (displayName == null ? 0 : System.hashCode(displayName));
        hashCode = (17 * hashCode) + (durationInMillis == null ? 0 : System.hashCode(durationInMillis));
        hashCode = (17 * hashCode) + (edges == null ? 0 : System.hashCode(edges));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (result == null ? 0 : System.hashCode(result));
        hashCode = (17 * hashCode) + (startTime == null ? 0 : System.hashCode(startTime));
        hashCode = (17 * hashCode) + (state == null ? 0 : System.hashCode(state));
        return hashCode;
    }
}
