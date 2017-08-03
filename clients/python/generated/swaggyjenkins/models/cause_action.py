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


class CauseAction(object):
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
        'causes': 'list[CauseUserIdCause]'
    }

    attribute_map = {
        '_class': '_class',
        'causes': 'causes'
    }

    def __init__(self, _class=None, causes=None):
        """
        CauseAction - a model defined in Swagger
        """

        self.__class = None
        self._causes = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if causes is not None:
          self.causes = causes

    @property
    def _class(self):
        """
        Gets the _class of this CauseAction.

        :return: The _class of this CauseAction.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this CauseAction.

        :param _class: The _class of this CauseAction.
        :type: str
        """

        self.__class = _class

    @property
    def causes(self):
        """
        Gets the causes of this CauseAction.

        :return: The causes of this CauseAction.
        :rtype: list[CauseUserIdCause]
        """
        return self._causes

    @causes.setter
    def causes(self, causes):
        """
        Sets the causes of this CauseAction.

        :param causes: The causes of this CauseAction.
        :type: list[CauseUserIdCause]
        """

        self._causes = causes

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
        if not isinstance(other, CauseAction):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
