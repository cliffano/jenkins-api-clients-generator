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


class GithubRepositorylinks(object):
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
        '_self': 'Link',
        '_class': 'str'
    }

    attribute_map = {
        '_self': 'self',
        '_class': '_class'
    }

    def __init__(self, _self=None, _class=None):
        """
        GithubRepositorylinks - a model defined in Swagger
        """

        self.__self = None
        self.__class = None
        self.discriminator = None

        if _self is not None:
          self._self = _self
        if _class is not None:
          self._class = _class

    @property
    def _self(self):
        """
        Gets the _self of this GithubRepositorylinks.

        :return: The _self of this GithubRepositorylinks.
        :rtype: Link
        """
        return self.__self

    @_self.setter
    def _self(self, _self):
        """
        Sets the _self of this GithubRepositorylinks.

        :param _self: The _self of this GithubRepositorylinks.
        :type: Link
        """

        self.__self = _self

    @property
    def _class(self):
        """
        Gets the _class of this GithubRepositorylinks.

        :return: The _class of this GithubRepositorylinks.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this GithubRepositorylinks.

        :param _class: The _class of this GithubRepositorylinks.
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
        if not isinstance(other, GithubRepositorylinks):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
