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


class FreeStyleProjecthealthReport(object):
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
        'description': 'str',
        'icon_class_name': 'str',
        'icon_url': 'str',
        'score': 'int',
        '_class': 'str'
    }

    attribute_map = {
        'description': 'description',
        'icon_class_name': 'iconClassName',
        'icon_url': 'iconUrl',
        'score': 'score',
        '_class': '_class'
    }

    def __init__(self, description=None, icon_class_name=None, icon_url=None, score=None, _class=None):
        """
        FreeStyleProjecthealthReport - a model defined in Swagger
        """

        self._description = None
        self._icon_class_name = None
        self._icon_url = None
        self._score = None
        self.__class = None
        self.discriminator = None

        if description is not None:
          self.description = description
        if icon_class_name is not None:
          self.icon_class_name = icon_class_name
        if icon_url is not None:
          self.icon_url = icon_url
        if score is not None:
          self.score = score
        if _class is not None:
          self._class = _class

    @property
    def description(self):
        """
        Gets the description of this FreeStyleProjecthealthReport.

        :return: The description of this FreeStyleProjecthealthReport.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """
        Sets the description of this FreeStyleProjecthealthReport.

        :param description: The description of this FreeStyleProjecthealthReport.
        :type: str
        """

        self._description = description

    @property
    def icon_class_name(self):
        """
        Gets the icon_class_name of this FreeStyleProjecthealthReport.

        :return: The icon_class_name of this FreeStyleProjecthealthReport.
        :rtype: str
        """
        return self._icon_class_name

    @icon_class_name.setter
    def icon_class_name(self, icon_class_name):
        """
        Sets the icon_class_name of this FreeStyleProjecthealthReport.

        :param icon_class_name: The icon_class_name of this FreeStyleProjecthealthReport.
        :type: str
        """

        self._icon_class_name = icon_class_name

    @property
    def icon_url(self):
        """
        Gets the icon_url of this FreeStyleProjecthealthReport.

        :return: The icon_url of this FreeStyleProjecthealthReport.
        :rtype: str
        """
        return self._icon_url

    @icon_url.setter
    def icon_url(self, icon_url):
        """
        Sets the icon_url of this FreeStyleProjecthealthReport.

        :param icon_url: The icon_url of this FreeStyleProjecthealthReport.
        :type: str
        """

        self._icon_url = icon_url

    @property
    def score(self):
        """
        Gets the score of this FreeStyleProjecthealthReport.

        :return: The score of this FreeStyleProjecthealthReport.
        :rtype: int
        """
        return self._score

    @score.setter
    def score(self, score):
        """
        Sets the score of this FreeStyleProjecthealthReport.

        :param score: The score of this FreeStyleProjecthealthReport.
        :type: int
        """

        self._score = score

    @property
    def _class(self):
        """
        Gets the _class of this FreeStyleProjecthealthReport.

        :return: The _class of this FreeStyleProjecthealthReport.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this FreeStyleProjecthealthReport.

        :param _class: The _class of this FreeStyleProjecthealthReport.
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
        if not isinstance(other, FreeStyleProjecthealthReport):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
