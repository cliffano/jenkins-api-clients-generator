# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.HudsonMasterComputer do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"displayName",
    :"executors",
    :"icon",
    :"iconClassName",
    :"idle",
    :"jnlpAgent",
    :"launchSupported",
    :"loadStatistics",
    :"manualLaunchAllowed",
    :"monitorData",
    :"numExecutors",
    :"offline",
    :"offlineCause",
    :"offlineCauseReason",
    :"temporarilyOffline"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"displayName" => String.t,
    :"executors" => [HudsonMasterComputerexecutors],
    :"icon" => String.t,
    :"iconClassName" => String.t,
    :"idle" => boolean(),
    :"jnlpAgent" => boolean(),
    :"launchSupported" => boolean(),
    :"loadStatistics" => Label1,
    :"manualLaunchAllowed" => boolean(),
    :"monitorData" => HudsonMasterComputermonitorData,
    :"numExecutors" => integer(),
    :"offline" => boolean(),
    :"offlineCause" => String.t,
    :"offlineCauseReason" => String.t,
    :"temporarilyOffline" => boolean()
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.HudsonMasterComputer do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"executors", :list, SwaggyJenkins.Model.HudsonMasterComputerexecutors, options)
    |> deserialize(:"loadStatistics", :struct, SwaggyJenkins.Model.Label1, options)
    |> deserialize(:"monitorData", :struct, SwaggyJenkins.Model.HudsonMasterComputermonitorData, options)
  end
end

