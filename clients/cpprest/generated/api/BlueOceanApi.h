/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BlueOceanApi.h
 *
 * 
 */

#ifndef BlueOceanApi_H_
#define BlueOceanApi_H_


#include "ApiClient.h"

#include "Body.h"
#include "BranchImpl.h"
#include "FavoriteImpl.h"
#include "GithubScm.h"
#include "MultibranchPipeline.h"
#include "Organisation.h"
#include "Organisations.h"
#include "Pipeline.h"
#include "PipelineActivities.h"
#include "PipelineFolderImpl.h"
#include "PipelineImpl.h"
#include "PipelineQueue.h"
#include "PipelineRun.h"
#include "PipelineRunNode.h"
#include "PipelineRunNodeSteps.h"
#include "PipelineRunNodes.h"
#include "PipelineRuns.h"
#include "PipelineStepImpl.h"
#include "Pipelines.h"
#include "QueueItemImpl.h"
#include "ScmOrganisations.h"
#include "User.h"
#include "UserFavorites.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  BlueOceanApi
{
public:
    BlueOceanApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~BlueOceanApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Delete queue item from an organization pipeline queue
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="queue">Name of the queue item</param>
    pplx::task<void> deletePipelineQueueItem(utility::string_t organization, utility::string_t pipeline, utility::string_t queue);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve authenticated user details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    pplx::task<std::shared_ptr<User>> getAuthenticatedUser(utility::string_t organization);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get a list of class names supported by a given class
    /// </remarks>
    /// <param name="class">Name of the class</param>
    pplx::task<utility::string_t> getClasses(utility::string_t class);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve organization details
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    pplx::task<std::shared_ptr<Organisation>> getOrganisation(utility::string_t organization);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all organizations details
    /// </remarks>
    
    pplx::task<std::shared_ptr<Organisations>> getOrganisations();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<Pipeline>> getPipeline(utility::string_t organization, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all activities details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<PipelineActivities>> getPipelineActivities(utility::string_t organization, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve branch details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="branch">Name of the branch</param>
    pplx::task<std::shared_ptr<BranchImpl>> getPipelineBranch(utility::string_t organization, utility::string_t pipeline, utility::string_t branch);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve branch run details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="branch">Name of the branch</param>/// <param name="run">Name of the run</param>
    pplx::task<std::shared_ptr<PipelineRun>> getPipelineBranchRun(utility::string_t organization, utility::string_t pipeline, utility::string_t branch, utility::string_t run);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all branches details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<MultibranchPipeline>> getPipelineBranches(utility::string_t organization, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline folder for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="folder">Name of the folder</param>
    pplx::task<std::shared_ptr<PipelineFolderImpl>> getPipelineFolder(utility::string_t organization, utility::string_t folder);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline details for an organization folder
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="folder">Name of the folder</param>
    pplx::task<std::shared_ptr<PipelineImpl>> getPipelineFolderPipeline(utility::string_t organization, utility::string_t pipeline, utility::string_t folder);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve queue details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<PipelineQueue>> getPipelineQueue(utility::string_t organization, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>
    pplx::task<std::shared_ptr<PipelineRun>> getPipelineRun(utility::string_t organization, utility::string_t pipeline, utility::string_t run);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get log for a pipeline run
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>/// <param name="start">Start position of the log (optional)</param>/// <param name="download">Set to true in order to download the file, otherwise it&#39;s passed as a response body (optional)</param>
    pplx::task<utility::string_t> getPipelineRunLog(utility::string_t organization, utility::string_t pipeline, utility::string_t run, int32_t start, bool download);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run node details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>/// <param name="node">Name of the node</param>
    pplx::task<std::shared_ptr<PipelineRunNode>> getPipelineRunNode(utility::string_t organization, utility::string_t pipeline, utility::string_t run, utility::string_t node);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run node details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>/// <param name="node">Name of the node</param>/// <param name="step">Name of the step</param>
    pplx::task<std::shared_ptr<PipelineStepImpl>> getPipelineRunNodeStep(utility::string_t organization, utility::string_t pipeline, utility::string_t run, utility::string_t node, utility::string_t step);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get log for a pipeline run node step
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>/// <param name="node">Name of the node</param>/// <param name="step">Name of the step</param>
    pplx::task<utility::string_t> getPipelineRunNodeStepLog(utility::string_t organization, utility::string_t pipeline, utility::string_t run, utility::string_t node, utility::string_t step);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run node steps details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>/// <param name="node">Name of the node</param>
    pplx::task<std::shared_ptr<PipelineRunNodeSteps>> getPipelineRunNodeSteps(utility::string_t organization, utility::string_t pipeline, utility::string_t run, utility::string_t node);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run nodes details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>
    pplx::task<std::shared_ptr<PipelineRunNodes>> getPipelineRunNodes(utility::string_t organization, utility::string_t pipeline, utility::string_t run);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all runs details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<PipelineRuns>> getPipelineRuns(utility::string_t organization, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all pipelines details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    pplx::task<std::shared_ptr<Pipelines>> getPipelines(utility::string_t organization);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="scm">Name of SCM</param>
    pplx::task<std::shared_ptr<GithubScm>> getSCM(utility::string_t organization, utility::string_t scm);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM organization repositories details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="scm">Name of SCM</param>/// <param name="scmOrganisation">Name of the SCM organization</param>/// <param name="credentialId">Credential ID (optional)</param>/// <param name="pageSize">Number of items in a page (optional)</param>/// <param name="pageNumber">Page number (optional)</param>
    pplx::task<std::shared_ptr<ScmOrganisations>> getSCMOrganisationRepositories(utility::string_t organization, utility::string_t scm, utility::string_t scmOrganisation, utility::string_t credentialId, int32_t pageSize, int32_t pageNumber);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM organization repository details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="scm">Name of SCM</param>/// <param name="scmOrganisation">Name of the SCM organization</param>/// <param name="repository">Name of the SCM repository</param>/// <param name="credentialId">Credential ID (optional)</param>
    pplx::task<std::shared_ptr<ScmOrganisations>> getSCMOrganisationRepository(utility::string_t organization, utility::string_t scm, utility::string_t scmOrganisation, utility::string_t repository, utility::string_t credentialId);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM organizations details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="scm">Name of SCM</param>/// <param name="credentialId">Credential ID (optional)</param>
    pplx::task<std::shared_ptr<ScmOrganisations>> getSCMOrganisations(utility::string_t organization, utility::string_t scm, utility::string_t credentialId);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve user details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="user">Name of the user</param>
    pplx::task<std::shared_ptr<User>> getUser(utility::string_t organization, utility::string_t user);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve user favorites details for an organization
    /// </remarks>
    /// <param name="user">Name of the user</param>
    pplx::task<std::shared_ptr<UserFavorites>> getUserFavorites(utility::string_t user);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve users details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    pplx::task<std::shared_ptr<User>> getUsers(utility::string_t organization);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Replay an organization pipeline run
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>
    pplx::task<std::shared_ptr<QueueItemImpl>> postPipelineRun(utility::string_t organization, utility::string_t pipeline, utility::string_t run);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Start a build for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<QueueItemImpl>> postPipelineRuns(utility::string_t organization, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Favorite/unfavorite a pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="body">Set JSON string body to {\&quot;favorite\&quot;: true} to favorite, set value to false to unfavorite</param>
    pplx::task<std::shared_ptr<FavoriteImpl>> putPipelineFavorite(utility::string_t organization, utility::string_t pipeline, std::shared_ptr<Body> body);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Stop a build of an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="run">Name of the run</param>/// <param name="blocking">Set to true to make blocking stop, default: false (optional)</param>/// <param name="timeOutInSecs">Timeout in seconds, default: 10 seconds (optional)</param>
    pplx::task<std::shared_ptr<PipelineRun>> putPipelineRun(utility::string_t organization, utility::string_t pipeline, utility::string_t run, utility::string_t blocking, int32_t timeOutInSecs);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Search for any resource details
    /// </remarks>
    /// <param name="q">Query string</param>
    pplx::task<utility::string_t> search(utility::string_t q);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get classes details
    /// </remarks>
    /// <param name="q">Query string containing an array of class names</param>
    pplx::task<utility::string_t> searchClasses(utility::string_t q);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* BlueOceanApi_H_ */

