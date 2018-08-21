# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.MultibranchPipeline do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"displayName",
    :"estimatedDurationInMillis",
    :"latestRun",
    :"name",
    :"organization",
    :"weatherScore",
    :"branchNames",
    :"numberOfFailingBranches",
    :"numberOfFailingPullRequests",
    :"numberOfSuccessfulBranches",
    :"numberOfSuccessfulPullRequests",
    :"totalNumberOfBranches",
    :"totalNumberOfPullRequests",
    :"_class"
  ]

  @type t :: %__MODULE__{
    :"displayName" => String.t,
    :"estimatedDurationInMillis" => integer(),
    :"latestRun" => String.t,
    :"name" => String.t,
    :"organization" => String.t,
    :"weatherScore" => integer(),
    :"branchNames" => [String.t],
    :"numberOfFailingBranches" => integer(),
    :"numberOfFailingPullRequests" => integer(),
    :"numberOfSuccessfulBranches" => integer(),
    :"numberOfSuccessfulPullRequests" => integer(),
    :"totalNumberOfBranches" => integer(),
    :"totalNumberOfPullRequests" => integer(),
    :"_class" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.MultibranchPipeline do
  def decode(value, _options) do
    value
  end
end
