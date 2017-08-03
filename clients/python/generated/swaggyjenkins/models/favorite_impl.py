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


class FavoriteImpl(object):
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
        'links': 'FavoriteImpllinks',
        'item': 'PipelineImpl'
    }

    attribute_map = {
        '_class': '_class',
        'links': '_links',
        'item': 'item'
    }

    def __init__(self, _class=None, links=None, item=None):
        """
        FavoriteImpl - a model defined in Swagger
        """

        self.__class = None
        self._links = None
        self._item = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if links is not None:
          self.links = links
        if item is not None:
          self.item = item

    @property
    def _class(self):
        """
        Gets the _class of this FavoriteImpl.

        :return: The _class of this FavoriteImpl.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this FavoriteImpl.

        :param _class: The _class of this FavoriteImpl.
        :type: str
        """

        self.__class = _class

    @property
    def links(self):
        """
        Gets the links of this FavoriteImpl.

        :return: The links of this FavoriteImpl.
        :rtype: FavoriteImpllinks
        """
        return self._links

    @links.setter
    def links(self, links):
        """
        Sets the links of this FavoriteImpl.

        :param links: The links of this FavoriteImpl.
        :type: FavoriteImpllinks
        """

        self._links = links

    @property
    def item(self):
        """
        Gets the item of this FavoriteImpl.

        :return: The item of this FavoriteImpl.
        :rtype: PipelineImpl
        """
        return self._item

    @item.setter
    def item(self, item):
        """
        Sets the item of this FavoriteImpl.

        :param item: The item of this FavoriteImpl.
        :type: PipelineImpl
        """

        self._item = item

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
        if not isinstance(other, FavoriteImpl):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
