# coding: utf-8

from __future__ import absolute_import
from swagger_server.models.branch_impllinks import BranchImpllinks
from swagger_server.models.branch_implpermissions import BranchImplpermissions
from swagger_server.models.pipeline_run_impl import PipelineRunImpl
from swagger_server.models.string_parameter_definition import StringParameterDefinition
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class BranchImpl(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, display_name: str=None, estimated_duration_in_millis: int=None, full_display_name: str=None, full_name: str=None, name: str=None, organization: str=None, parameters: List[StringParameterDefinition]=None, permissions: BranchImplpermissions=None, weather_score: int=None, pull_request: str=None, links: BranchImpllinks=None, latest_run: PipelineRunImpl=None):
        """
        BranchImpl - a model defined in Swagger

        :param _class: The _class of this BranchImpl.
        :type _class: str
        :param display_name: The display_name of this BranchImpl.
        :type display_name: str
        :param estimated_duration_in_millis: The estimated_duration_in_millis of this BranchImpl.
        :type estimated_duration_in_millis: int
        :param full_display_name: The full_display_name of this BranchImpl.
        :type full_display_name: str
        :param full_name: The full_name of this BranchImpl.
        :type full_name: str
        :param name: The name of this BranchImpl.
        :type name: str
        :param organization: The organization of this BranchImpl.
        :type organization: str
        :param parameters: The parameters of this BranchImpl.
        :type parameters: List[StringParameterDefinition]
        :param permissions: The permissions of this BranchImpl.
        :type permissions: BranchImplpermissions
        :param weather_score: The weather_score of this BranchImpl.
        :type weather_score: int
        :param pull_request: The pull_request of this BranchImpl.
        :type pull_request: str
        :param links: The links of this BranchImpl.
        :type links: BranchImpllinks
        :param latest_run: The latest_run of this BranchImpl.
        :type latest_run: PipelineRunImpl
        """
        self.swagger_types = {
            '_class': str,
            'display_name': str,
            'estimated_duration_in_millis': int,
            'full_display_name': str,
            'full_name': str,
            'name': str,
            'organization': str,
            'parameters': List[StringParameterDefinition],
            'permissions': BranchImplpermissions,
            'weather_score': int,
            'pull_request': str,
            'links': BranchImpllinks,
            'latest_run': PipelineRunImpl
        }

        self.attribute_map = {
            '_class': '_class',
            'display_name': 'displayName',
            'estimated_duration_in_millis': 'estimatedDurationInMillis',
            'full_display_name': 'fullDisplayName',
            'full_name': 'fullName',
            'name': 'name',
            'organization': 'organization',
            'parameters': 'parameters',
            'permissions': 'permissions',
            'weather_score': 'weatherScore',
            'pull_request': 'pullRequest',
            'links': '_links',
            'latest_run': 'latestRun'
        }

        self.__class = _class
        self._display_name = display_name
        self._estimated_duration_in_millis = estimated_duration_in_millis
        self._full_display_name = full_display_name
        self._full_name = full_name
        self._name = name
        self._organization = organization
        self._parameters = parameters
        self._permissions = permissions
        self._weather_score = weather_score
        self._pull_request = pull_request
        self._links = links
        self._latest_run = latest_run

    @classmethod
    def from_dict(cls, dikt) -> 'BranchImpl':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The BranchImpl of this BranchImpl.
        :rtype: BranchImpl
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this BranchImpl.

        :return: The _class of this BranchImpl.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this BranchImpl.

        :param _class: The _class of this BranchImpl.
        :type _class: str
        """

        self.__class = _class

    @property
    def display_name(self) -> str:
        """
        Gets the display_name of this BranchImpl.

        :return: The display_name of this BranchImpl.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name: str):
        """
        Sets the display_name of this BranchImpl.

        :param display_name: The display_name of this BranchImpl.
        :type display_name: str
        """

        self._display_name = display_name

    @property
    def estimated_duration_in_millis(self) -> int:
        """
        Gets the estimated_duration_in_millis of this BranchImpl.

        :return: The estimated_duration_in_millis of this BranchImpl.
        :rtype: int
        """
        return self._estimated_duration_in_millis

    @estimated_duration_in_millis.setter
    def estimated_duration_in_millis(self, estimated_duration_in_millis: int):
        """
        Sets the estimated_duration_in_millis of this BranchImpl.

        :param estimated_duration_in_millis: The estimated_duration_in_millis of this BranchImpl.
        :type estimated_duration_in_millis: int
        """

        self._estimated_duration_in_millis = estimated_duration_in_millis

    @property
    def full_display_name(self) -> str:
        """
        Gets the full_display_name of this BranchImpl.

        :return: The full_display_name of this BranchImpl.
        :rtype: str
        """
        return self._full_display_name

    @full_display_name.setter
    def full_display_name(self, full_display_name: str):
        """
        Sets the full_display_name of this BranchImpl.

        :param full_display_name: The full_display_name of this BranchImpl.
        :type full_display_name: str
        """

        self._full_display_name = full_display_name

    @property
    def full_name(self) -> str:
        """
        Gets the full_name of this BranchImpl.

        :return: The full_name of this BranchImpl.
        :rtype: str
        """
        return self._full_name

    @full_name.setter
    def full_name(self, full_name: str):
        """
        Sets the full_name of this BranchImpl.

        :param full_name: The full_name of this BranchImpl.
        :type full_name: str
        """

        self._full_name = full_name

    @property
    def name(self) -> str:
        """
        Gets the name of this BranchImpl.

        :return: The name of this BranchImpl.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """
        Sets the name of this BranchImpl.

        :param name: The name of this BranchImpl.
        :type name: str
        """

        self._name = name

    @property
    def organization(self) -> str:
        """
        Gets the organization of this BranchImpl.

        :return: The organization of this BranchImpl.
        :rtype: str
        """
        return self._organization

    @organization.setter
    def organization(self, organization: str):
        """
        Sets the organization of this BranchImpl.

        :param organization: The organization of this BranchImpl.
        :type organization: str
        """

        self._organization = organization

    @property
    def parameters(self) -> List[StringParameterDefinition]:
        """
        Gets the parameters of this BranchImpl.

        :return: The parameters of this BranchImpl.
        :rtype: List[StringParameterDefinition]
        """
        return self._parameters

    @parameters.setter
    def parameters(self, parameters: List[StringParameterDefinition]):
        """
        Sets the parameters of this BranchImpl.

        :param parameters: The parameters of this BranchImpl.
        :type parameters: List[StringParameterDefinition]
        """

        self._parameters = parameters

    @property
    def permissions(self) -> BranchImplpermissions:
        """
        Gets the permissions of this BranchImpl.

        :return: The permissions of this BranchImpl.
        :rtype: BranchImplpermissions
        """
        return self._permissions

    @permissions.setter
    def permissions(self, permissions: BranchImplpermissions):
        """
        Sets the permissions of this BranchImpl.

        :param permissions: The permissions of this BranchImpl.
        :type permissions: BranchImplpermissions
        """

        self._permissions = permissions

    @property
    def weather_score(self) -> int:
        """
        Gets the weather_score of this BranchImpl.

        :return: The weather_score of this BranchImpl.
        :rtype: int
        """
        return self._weather_score

    @weather_score.setter
    def weather_score(self, weather_score: int):
        """
        Sets the weather_score of this BranchImpl.

        :param weather_score: The weather_score of this BranchImpl.
        :type weather_score: int
        """

        self._weather_score = weather_score

    @property
    def pull_request(self) -> str:
        """
        Gets the pull_request of this BranchImpl.

        :return: The pull_request of this BranchImpl.
        :rtype: str
        """
        return self._pull_request

    @pull_request.setter
    def pull_request(self, pull_request: str):
        """
        Sets the pull_request of this BranchImpl.

        :param pull_request: The pull_request of this BranchImpl.
        :type pull_request: str
        """

        self._pull_request = pull_request

    @property
    def links(self) -> BranchImpllinks:
        """
        Gets the links of this BranchImpl.

        :return: The links of this BranchImpl.
        :rtype: BranchImpllinks
        """
        return self._links

    @links.setter
    def links(self, links: BranchImpllinks):
        """
        Sets the links of this BranchImpl.

        :param links: The links of this BranchImpl.
        :type links: BranchImpllinks
        """

        self._links = links

    @property
    def latest_run(self) -> PipelineRunImpl:
        """
        Gets the latest_run of this BranchImpl.

        :return: The latest_run of this BranchImpl.
        :rtype: PipelineRunImpl
        """
        return self._latest_run

    @latest_run.setter
    def latest_run(self, latest_run: PipelineRunImpl):
        """
        Sets the latest_run of this BranchImpl.

        :param latest_run: The latest_run of this BranchImpl.
        :type latest_run: PipelineRunImpl
        """

        self._latest_run = latest_run

