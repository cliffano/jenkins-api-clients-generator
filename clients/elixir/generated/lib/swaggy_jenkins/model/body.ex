# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.Body do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"favorite"
  ]

  @type t :: %__MODULE__{
    :"favorite" => boolean()
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.Body do
  def decode(value, _options) do
    value
  end
end
