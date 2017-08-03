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


class SwapSpaceMonitorMemoryUsage2(object):
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
        'available_physical_memory': 'int',
        'available_swap_space': 'int',
        'total_physical_memory': 'int',
        'total_swap_space': 'int'
    }

    attribute_map = {
        '_class': '_class',
        'available_physical_memory': 'availablePhysicalMemory',
        'available_swap_space': 'availableSwapSpace',
        'total_physical_memory': 'totalPhysicalMemory',
        'total_swap_space': 'totalSwapSpace'
    }

    def __init__(self, _class=None, available_physical_memory=None, available_swap_space=None, total_physical_memory=None, total_swap_space=None):
        """
        SwapSpaceMonitorMemoryUsage2 - a model defined in Swagger
        """

        self.__class = None
        self._available_physical_memory = None
        self._available_swap_space = None
        self._total_physical_memory = None
        self._total_swap_space = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if available_physical_memory is not None:
          self.available_physical_memory = available_physical_memory
        if available_swap_space is not None:
          self.available_swap_space = available_swap_space
        if total_physical_memory is not None:
          self.total_physical_memory = total_physical_memory
        if total_swap_space is not None:
          self.total_swap_space = total_swap_space

    @property
    def _class(self):
        """
        Gets the _class of this SwapSpaceMonitorMemoryUsage2.

        :return: The _class of this SwapSpaceMonitorMemoryUsage2.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this SwapSpaceMonitorMemoryUsage2.

        :param _class: The _class of this SwapSpaceMonitorMemoryUsage2.
        :type: str
        """

        self.__class = _class

    @property
    def available_physical_memory(self):
        """
        Gets the available_physical_memory of this SwapSpaceMonitorMemoryUsage2.

        :return: The available_physical_memory of this SwapSpaceMonitorMemoryUsage2.
        :rtype: int
        """
        return self._available_physical_memory

    @available_physical_memory.setter
    def available_physical_memory(self, available_physical_memory):
        """
        Sets the available_physical_memory of this SwapSpaceMonitorMemoryUsage2.

        :param available_physical_memory: The available_physical_memory of this SwapSpaceMonitorMemoryUsage2.
        :type: int
        """

        self._available_physical_memory = available_physical_memory

    @property
    def available_swap_space(self):
        """
        Gets the available_swap_space of this SwapSpaceMonitorMemoryUsage2.

        :return: The available_swap_space of this SwapSpaceMonitorMemoryUsage2.
        :rtype: int
        """
        return self._available_swap_space

    @available_swap_space.setter
    def available_swap_space(self, available_swap_space):
        """
        Sets the available_swap_space of this SwapSpaceMonitorMemoryUsage2.

        :param available_swap_space: The available_swap_space of this SwapSpaceMonitorMemoryUsage2.
        :type: int
        """

        self._available_swap_space = available_swap_space

    @property
    def total_physical_memory(self):
        """
        Gets the total_physical_memory of this SwapSpaceMonitorMemoryUsage2.

        :return: The total_physical_memory of this SwapSpaceMonitorMemoryUsage2.
        :rtype: int
        """
        return self._total_physical_memory

    @total_physical_memory.setter
    def total_physical_memory(self, total_physical_memory):
        """
        Sets the total_physical_memory of this SwapSpaceMonitorMemoryUsage2.

        :param total_physical_memory: The total_physical_memory of this SwapSpaceMonitorMemoryUsage2.
        :type: int
        """

        self._total_physical_memory = total_physical_memory

    @property
    def total_swap_space(self):
        """
        Gets the total_swap_space of this SwapSpaceMonitorMemoryUsage2.

        :return: The total_swap_space of this SwapSpaceMonitorMemoryUsage2.
        :rtype: int
        """
        return self._total_swap_space

    @total_swap_space.setter
    def total_swap_space(self, total_swap_space):
        """
        Sets the total_swap_space of this SwapSpaceMonitorMemoryUsage2.

        :param total_swap_space: The total_swap_space of this SwapSpaceMonitorMemoryUsage2.
        :type: int
        """

        self._total_swap_space = total_swap_space

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
        if not isinstance(other, SwapSpaceMonitorMemoryUsage2):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
