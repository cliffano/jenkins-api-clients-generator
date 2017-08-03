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


class GithubRepository(object):
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
        'links': 'GithubRepositorylinks',
        'default_branch': 'str',
        'description': 'str',
        'name': 'str',
        'permissions': 'GithubRepositorypermissions',
        'private': 'bool',
        'full_name': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'links': '_links',
        'default_branch': 'defaultBranch',
        'description': 'description',
        'name': 'name',
        'permissions': 'permissions',
        'private': 'private',
        'full_name': 'fullName'
    }

    def __init__(self, _class=None, links=None, default_branch=None, description=None, name=None, permissions=None, private=None, full_name=None):
        """
        GithubRepository - a model defined in Swagger
        """

        self.__class = None
        self._links = None
        self._default_branch = None
        self._description = None
        self._name = None
        self._permissions = None
        self._private = None
        self._full_name = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if links is not None:
          self.links = links
        if default_branch is not None:
          self.default_branch = default_branch
        if description is not None:
          self.description = description
        if name is not None:
          self.name = name
        if permissions is not None:
          self.permissions = permissions
        if private is not None:
          self.private = private
        if full_name is not None:
          self.full_name = full_name

    @property
    def _class(self):
        """
        Gets the _class of this GithubRepository.

        :return: The _class of this GithubRepository.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this GithubRepository.

        :param _class: The _class of this GithubRepository.
        :type: str
        """

        self.__class = _class

    @property
    def links(self):
        """
        Gets the links of this GithubRepository.

        :return: The links of this GithubRepository.
        :rtype: GithubRepositorylinks
        """
        return self._links

    @links.setter
    def links(self, links):
        """
        Sets the links of this GithubRepository.

        :param links: The links of this GithubRepository.
        :type: GithubRepositorylinks
        """

        self._links = links

    @property
    def default_branch(self):
        """
        Gets the default_branch of this GithubRepository.

        :return: The default_branch of this GithubRepository.
        :rtype: str
        """
        return self._default_branch

    @default_branch.setter
    def default_branch(self, default_branch):
        """
        Sets the default_branch of this GithubRepository.

        :param default_branch: The default_branch of this GithubRepository.
        :type: str
        """

        self._default_branch = default_branch

    @property
    def description(self):
        """
        Gets the description of this GithubRepository.

        :return: The description of this GithubRepository.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """
        Sets the description of this GithubRepository.

        :param description: The description of this GithubRepository.
        :type: str
        """

        self._description = description

    @property
    def name(self):
        """
        Gets the name of this GithubRepository.

        :return: The name of this GithubRepository.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this GithubRepository.

        :param name: The name of this GithubRepository.
        :type: str
        """

        self._name = name

    @property
    def permissions(self):
        """
        Gets the permissions of this GithubRepository.

        :return: The permissions of this GithubRepository.
        :rtype: GithubRepositorypermissions
        """
        return self._permissions

    @permissions.setter
    def permissions(self, permissions):
        """
        Sets the permissions of this GithubRepository.

        :param permissions: The permissions of this GithubRepository.
        :type: GithubRepositorypermissions
        """

        self._permissions = permissions

    @property
    def private(self):
        """
        Gets the private of this GithubRepository.

        :return: The private of this GithubRepository.
        :rtype: bool
        """
        return self._private

    @private.setter
    def private(self, private):
        """
        Sets the private of this GithubRepository.

        :param private: The private of this GithubRepository.
        :type: bool
        """

        self._private = private

    @property
    def full_name(self):
        """
        Gets the full_name of this GithubRepository.

        :return: The full_name of this GithubRepository.
        :rtype: str
        """
        return self._full_name

    @full_name.setter
    def full_name(self, full_name):
        """
        Sets the full_name of this GithubRepository.

        :param full_name: The full_name of this GithubRepository.
        :type: str
        """

        self._full_name = full_name

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
        if not isinstance(other, GithubRepository):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
