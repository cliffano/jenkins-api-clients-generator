# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.GithubContent do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"name",
    :"sha",
    :"_class",
    :"repo",
    :"size",
    :"owner",
    :"path",
    :"base64Data"
  ]

  @type t :: %__MODULE__{
    :"name" => String.t,
    :"sha" => String.t,
    :"_class" => String.t,
    :"repo" => String.t,
    :"size" => integer(),
    :"owner" => String.t,
    :"path" => String.t,
    :"base64Data" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.GithubContent do
  def decode(value, _options) do
    value
  end
end

