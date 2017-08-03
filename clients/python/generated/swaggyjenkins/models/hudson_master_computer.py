# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class HudsonMasterComputer(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        '_class': 'str',
        'display_name': 'str',
        'executors': 'list[HudsonMasterComputerexecutors]',
        'icon': 'str',
        'icon_class_name': 'str',
        'idle': 'bool',
        'jnlp_agent': 'bool',
        'launch_supported': 'bool',
        'load_statistics': 'Label1',
        'manual_launch_allowed': 'bool',
        'monitor_data': 'HudsonMasterComputermonitorData',
        'num_executors': 'int',
        'offline': 'bool',
        'offline_cause': 'str',
        'offline_cause_reason': 'str',
        'temporarily_offline': 'bool'
    }

    attribute_map = {
        '_class': '_class',
        'display_name': 'displayName',
        'executors': 'executors',
        'icon': 'icon',
        'icon_class_name': 'iconClassName',
        'idle': 'idle',
        'jnlp_agent': 'jnlpAgent',
        'launch_supported': 'launchSupported',
        'load_statistics': 'loadStatistics',
        'manual_launch_allowed': 'manualLaunchAllowed',
        'monitor_data': 'monitorData',
        'num_executors': 'numExecutors',
        'offline': 'offline',
        'offline_cause': 'offlineCause',
        'offline_cause_reason': 'offlineCauseReason',
        'temporarily_offline': 'temporarilyOffline'
    }

    def __init__(self, _class=None, display_name=None, executors=None, icon=None, icon_class_name=None, idle=None, jnlp_agent=None, launch_supported=None, load_statistics=None, manual_launch_allowed=None, monitor_data=None, num_executors=None, offline=None, offline_cause=None, offline_cause_reason=None, temporarily_offline=None):
        """
        HudsonMasterComputer - a model defined in Swagger
        """

        self.__class = None
        self._display_name = None
        self._executors = None
        self._icon = None
        self._icon_class_name = None
        self._idle = None
        self._jnlp_agent = None
        self._launch_supported = None
        self._load_statistics = None
        self._manual_launch_allowed = None
        self._monitor_data = None
        self._num_executors = None
        self._offline = None
        self._offline_cause = None
        self._offline_cause_reason = None
        self._temporarily_offline = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if display_name is not None:
          self.display_name = display_name
        if executors is not None:
          self.executors = executors
        if icon is not None:
          self.icon = icon
        if icon_class_name is not None:
          self.icon_class_name = icon_class_name
        if idle is not None:
          self.idle = idle
        if jnlp_agent is not None:
          self.jnlp_agent = jnlp_agent
        if launch_supported is not None:
          self.launch_supported = launch_supported
        if load_statistics is not None:
          self.load_statistics = load_statistics
        if manual_launch_allowed is not None:
          self.manual_launch_allowed = manual_launch_allowed
        if monitor_data is not None:
          self.monitor_data = monitor_data
        if num_executors is not None:
          self.num_executors = num_executors
        if offline is not None:
          self.offline = offline
        if offline_cause is not None:
          self.offline_cause = offline_cause
        if offline_cause_reason is not None:
          self.offline_cause_reason = offline_cause_reason
        if temporarily_offline is not None:
          self.temporarily_offline = temporarily_offline

    @property
    def _class(self):
        """
        Gets the _class of this HudsonMasterComputer.

        :return: The _class of this HudsonMasterComputer.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonMasterComputer.

        :param _class: The _class of this HudsonMasterComputer.
        :type: str
        """

        self.__class = _class

    @property
    def display_name(self):
        """
        Gets the display_name of this HudsonMasterComputer.

        :return: The display_name of this HudsonMasterComputer.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """
        Sets the display_name of this HudsonMasterComputer.

        :param display_name: The display_name of this HudsonMasterComputer.
        :type: str
        """

        self._display_name = display_name

    @property
    def executors(self):
        """
        Gets the executors of this HudsonMasterComputer.

        :return: The executors of this HudsonMasterComputer.
        :rtype: list[HudsonMasterComputerexecutors]
        """
        return self._executors

    @executors.setter
    def executors(self, executors):
        """
        Sets the executors of this HudsonMasterComputer.

        :param executors: The executors of this HudsonMasterComputer.
        :type: list[HudsonMasterComputerexecutors]
        """

        self._executors = executors

    @property
    def icon(self):
        """
        Gets the icon of this HudsonMasterComputer.

        :return: The icon of this HudsonMasterComputer.
        :rtype: str
        """
        return self._icon

    @icon.setter
    def icon(self, icon):
        """
        Sets the icon of this HudsonMasterComputer.

        :param icon: The icon of this HudsonMasterComputer.
        :type: str
        """

        self._icon = icon

    @property
    def icon_class_name(self):
        """
        Gets the icon_class_name of this HudsonMasterComputer.

        :return: The icon_class_name of this HudsonMasterComputer.
        :rtype: str
        """
        return self._icon_class_name

    @icon_class_name.setter
    def icon_class_name(self, icon_class_name):
        """
        Sets the icon_class_name of this HudsonMasterComputer.

        :param icon_class_name: The icon_class_name of this HudsonMasterComputer.
        :type: str
        """

        self._icon_class_name = icon_class_name

    @property
    def idle(self):
        """
        Gets the idle of this HudsonMasterComputer.

        :return: The idle of this HudsonMasterComputer.
        :rtype: bool
        """
        return self._idle

    @idle.setter
    def idle(self, idle):
        """
        Sets the idle of this HudsonMasterComputer.

        :param idle: The idle of this HudsonMasterComputer.
        :type: bool
        """

        self._idle = idle

    @property
    def jnlp_agent(self):
        """
        Gets the jnlp_agent of this HudsonMasterComputer.

        :return: The jnlp_agent of this HudsonMasterComputer.
        :rtype: bool
        """
        return self._jnlp_agent

    @jnlp_agent.setter
    def jnlp_agent(self, jnlp_agent):
        """
        Sets the jnlp_agent of this HudsonMasterComputer.

        :param jnlp_agent: The jnlp_agent of this HudsonMasterComputer.
        :type: bool
        """

        self._jnlp_agent = jnlp_agent

    @property
    def launch_supported(self):
        """
        Gets the launch_supported of this HudsonMasterComputer.

        :return: The launch_supported of this HudsonMasterComputer.
        :rtype: bool
        """
        return self._launch_supported

    @launch_supported.setter
    def launch_supported(self, launch_supported):
        """
        Sets the launch_supported of this HudsonMasterComputer.

        :param launch_supported: The launch_supported of this HudsonMasterComputer.
        :type: bool
        """

        self._launch_supported = launch_supported

    @property
    def load_statistics(self):
        """
        Gets the load_statistics of this HudsonMasterComputer.

        :return: The load_statistics of this HudsonMasterComputer.
        :rtype: Label1
        """
        return self._load_statistics

    @load_statistics.setter
    def load_statistics(self, load_statistics):
        """
        Sets the load_statistics of this HudsonMasterComputer.

        :param load_statistics: The load_statistics of this HudsonMasterComputer.
        :type: Label1
        """

        self._load_statistics = load_statistics

    @property
    def manual_launch_allowed(self):
        """
        Gets the manual_launch_allowed of this HudsonMasterComputer.

        :return: The manual_launch_allowed of this HudsonMasterComputer.
        :rtype: bool
        """
        return self._manual_launch_allowed

    @manual_launch_allowed.setter
    def manual_launch_allowed(self, manual_launch_allowed):
        """
        Sets the manual_launch_allowed of this HudsonMasterComputer.

        :param manual_launch_allowed: The manual_launch_allowed of this HudsonMasterComputer.
        :type: bool
        """

        self._manual_launch_allowed = manual_launch_allowed

    @property
    def monitor_data(self):
        """
        Gets the monitor_data of this HudsonMasterComputer.

        :return: The monitor_data of this HudsonMasterComputer.
        :rtype: HudsonMasterComputermonitorData
        """
        return self._monitor_data

    @monitor_data.setter
    def monitor_data(self, monitor_data):
        """
        Sets the monitor_data of this HudsonMasterComputer.

        :param monitor_data: The monitor_data of this HudsonMasterComputer.
        :type: HudsonMasterComputermonitorData
        """

        self._monitor_data = monitor_data

    @property
    def num_executors(self):
        """
        Gets the num_executors of this HudsonMasterComputer.

        :return: The num_executors of this HudsonMasterComputer.
        :rtype: int
        """
        return self._num_executors

    @num_executors.setter
    def num_executors(self, num_executors):
        """
        Sets the num_executors of this HudsonMasterComputer.

        :param num_executors: The num_executors of this HudsonMasterComputer.
        :type: int
        """

        self._num_executors = num_executors

    @property
    def offline(self):
        """
        Gets the offline of this HudsonMasterComputer.

        :return: The offline of this HudsonMasterComputer.
        :rtype: bool
        """
        return self._offline

    @offline.setter
    def offline(self, offline):
        """
        Sets the offline of this HudsonMasterComputer.

        :param offline: The offline of this HudsonMasterComputer.
        :type: bool
        """

        self._offline = offline

    @property
    def offline_cause(self):
        """
        Gets the offline_cause of this HudsonMasterComputer.

        :return: The offline_cause of this HudsonMasterComputer.
        :rtype: str
        """
        return self._offline_cause

    @offline_cause.setter
    def offline_cause(self, offline_cause):
        """
        Sets the offline_cause of this HudsonMasterComputer.

        :param offline_cause: The offline_cause of this HudsonMasterComputer.
        :type: str
        """

        self._offline_cause = offline_cause

    @property
    def offline_cause_reason(self):
        """
        Gets the offline_cause_reason of this HudsonMasterComputer.

        :return: The offline_cause_reason of this HudsonMasterComputer.
        :rtype: str
        """
        return self._offline_cause_reason

    @offline_cause_reason.setter
    def offline_cause_reason(self, offline_cause_reason):
        """
        Sets the offline_cause_reason of this HudsonMasterComputer.

        :param offline_cause_reason: The offline_cause_reason of this HudsonMasterComputer.
        :type: str
        """

        self._offline_cause_reason = offline_cause_reason

    @property
    def temporarily_offline(self):
        """
        Gets the temporarily_offline of this HudsonMasterComputer.

        :return: The temporarily_offline of this HudsonMasterComputer.
        :rtype: bool
        """
        return self._temporarily_offline

    @temporarily_offline.setter
    def temporarily_offline(self, temporarily_offline):
        """
        Sets the temporarily_offline of this HudsonMasterComputer.

        :param temporarily_offline: The temporarily_offline of this HudsonMasterComputer.
        :type: bool
        """

        self._temporarily_offline = temporarily_offline

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, HudsonMasterComputer):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
