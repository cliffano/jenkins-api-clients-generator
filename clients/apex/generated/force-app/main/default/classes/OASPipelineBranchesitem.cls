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
 * OASPipelineBranchesitem
 */
public class OASPipelineBranchesitem implements OAS.MappedProperties {
    /**
     * Get displayName
     * @return displayName
     */
    public String displayName { get; set; }

    /**
     * Get estimatedDurationInMillis
     * @return estimatedDurationInMillis
     */
    public Integer estimatedDurationInMillis { get; set; }

    /**
     * Get name
     * @return name
     */
    public String name { get; set; }

    /**
     * Get weatherScore
     * @return weatherScore
     */
    public Integer weatherScore { get; set; }

    /**
     * Get latestRun
     * @return latestRun
     */
    public OASPipelineBranchesitemlatestRun latestRun { get; set; }

    /**
     * Get organization
     * @return organization
     */
    public String organization { get; set; }

    /**
     * Get pullRequest
     * @return pullRequest
     */
    public OASPipelineBranchesitempullRequest pullRequest { get; set; }

    /**
     * Get totalNumberOfPullRequests
     * @return totalNumberOfPullRequests
     */
    public Integer totalNumberOfPullRequests { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASPipelineBranchesitem getExample() {
        OASPipelineBranchesitem pipelineBranchesitem = new OASPipelineBranchesitem();
          pipelineBranchesitem.displayName = '';
          pipelineBranchesitem.estimatedDurationInMillis = 0;
          pipelineBranchesitem.name = '';
          pipelineBranchesitem.weatherScore = 0;
          pipelineBranchesitem.latestRun = OASPipelineBranchesitemlatestRun.getExample();
          pipelineBranchesitem.organization = '';
          pipelineBranchesitem.pullRequest = OASPipelineBranchesitempullRequest.getExample();
          pipelineBranchesitem.totalNumberOfPullRequests = 0;
          pipelineBranchesitem.propertyClass = '';
        return pipelineBranchesitem;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASPipelineBranchesitem) {           
            OASPipelineBranchesitem pipelineBranchesitem = (OASPipelineBranchesitem) obj;
            return this.displayName == pipelineBranchesitem.displayName
                && this.estimatedDurationInMillis == pipelineBranchesitem.estimatedDurationInMillis
                && this.name == pipelineBranchesitem.name
                && this.weatherScore == pipelineBranchesitem.weatherScore
                && this.latestRun == pipelineBranchesitem.latestRun
                && this.organization == pipelineBranchesitem.organization
                && this.pullRequest == pipelineBranchesitem.pullRequest
                && this.totalNumberOfPullRequests == pipelineBranchesitem.totalNumberOfPullRequests
                && this.propertyClass == pipelineBranchesitem.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (displayName == null ? 0 : System.hashCode(displayName));
        hashCode = (17 * hashCode) + (estimatedDurationInMillis == null ? 0 : System.hashCode(estimatedDurationInMillis));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (weatherScore == null ? 0 : System.hashCode(weatherScore));
        hashCode = (17 * hashCode) + (latestRun == null ? 0 : System.hashCode(latestRun));
        hashCode = (17 * hashCode) + (organization == null ? 0 : System.hashCode(organization));
        hashCode = (17 * hashCode) + (pullRequest == null ? 0 : System.hashCode(pullRequest));
        hashCode = (17 * hashCode) + (totalNumberOfPullRequests == null ? 0 : System.hashCode(totalNumberOfPullRequests));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}
