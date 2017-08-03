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


class HudsonMasterComputerexecutors(object):
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
        'current_executable': 'FreeStyleBuild',
        'idle': 'bool',
        'likely_stuck': 'bool',
        'number': 'int',
        'progress': 'int',
        '_class': 'str'
    }

    attribute_map = {
        'current_executable': 'currentExecutable',
        'idle': 'idle',
        'likely_stuck': 'likelyStuck',
        'number': 'number',
        'progress': 'progress',
        '_class': '_class'
    }

    def __init__(self, current_executable=None, idle=None, likely_stuck=None, number=None, progress=None, _class=None):
        """
        HudsonMasterComputerexecutors - a model defined in Swagger
        """

        self._current_executable = None
        self._idle = None
        self._likely_stuck = None
        self._number = None
        self._progress = None
        self.__class = None
        self.discriminator = None

        if current_executable is not None:
          self.current_executable = current_executable
        if idle is not None:
          self.idle = idle
        if likely_stuck is not None:
          self.likely_stuck = likely_stuck
        if number is not None:
          self.number = number
        if progress is not None:
          self.progress = progress
        if _class is not None:
          self._class = _class

    @property
    def current_executable(self):
        """
        Gets the current_executable of this HudsonMasterComputerexecutors.

        :return: The current_executable of this HudsonMasterComputerexecutors.
        :rtype: FreeStyleBuild
        """
        return self._current_executable

    @current_executable.setter
    def current_executable(self, current_executable):
        """
        Sets the current_executable of this HudsonMasterComputerexecutors.

        :param current_executable: The current_executable of this HudsonMasterComputerexecutors.
        :type: FreeStyleBuild
        """

        self._current_executable = current_executable

    @property
    def idle(self):
        """
        Gets the idle of this HudsonMasterComputerexecutors.

        :return: The idle of this HudsonMasterComputerexecutors.
        :rtype: bool
        """
        return self._idle

    @idle.setter
    def idle(self, idle):
        """
        Sets the idle of this HudsonMasterComputerexecutors.

        :param idle: The idle of this HudsonMasterComputerexecutors.
        :type: bool
        """

        self._idle = idle

    @property
    def likely_stuck(self):
        """
        Gets the likely_stuck of this HudsonMasterComputerexecutors.

        :return: The likely_stuck of this HudsonMasterComputerexecutors.
        :rtype: bool
        """
        return self._likely_stuck

    @likely_stuck.setter
    def likely_stuck(self, likely_stuck):
        """
        Sets the likely_stuck of this HudsonMasterComputerexecutors.

        :param likely_stuck: The likely_stuck of this HudsonMasterComputerexecutors.
        :type: bool
        """

        self._likely_stuck = likely_stuck

    @property
    def number(self):
        """
        Gets the number of this HudsonMasterComputerexecutors.

        :return: The number of this HudsonMasterComputerexecutors.
        :rtype: int
        """
        return self._number

    @number.setter
    def number(self, number):
        """
        Sets the number of this HudsonMasterComputerexecutors.

        :param number: The number of this HudsonMasterComputerexecutors.
        :type: int
        """

        self._number = number

    @property
    def progress(self):
        """
        Gets the progress of this HudsonMasterComputerexecutors.

        :return: The progress of this HudsonMasterComputerexecutors.
        :rtype: int
        """
        return self._progress

    @progress.setter
    def progress(self, progress):
        """
        Sets the progress of this HudsonMasterComputerexecutors.

        :param progress: The progress of this HudsonMasterComputerexecutors.
        :type: int
        """

        self._progress = progress

    @property
    def _class(self):
        """
        Gets the _class of this HudsonMasterComputerexecutors.

        :return: The _class of this HudsonMasterComputerexecutors.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonMasterComputerexecutors.

        :param _class: The _class of this HudsonMasterComputerexecutors.
        :type: str
        """

        self.__class = _class

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
        if not isinstance(other, HudsonMasterComputerexecutors):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
