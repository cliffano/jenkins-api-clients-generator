# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class User(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, id: str=None, full_name: str=None, email: str=None, name: str=None):
        """
        User - a model defined in Swagger

        :param _class: The _class of this User.
        :type _class: str
        :param id: The id of this User.
        :type id: str
        :param full_name: The full_name of this User.
        :type full_name: str
        :param email: The email of this User.
        :type email: str
        :param name: The name of this User.
        :type name: str
        """
        self.swagger_types = {
            '_class': str,
            'id': str,
            'full_name': str,
            'email': str,
            'name': str
        }

        self.attribute_map = {
            '_class': '_class',
            'id': 'id',
            'full_name': 'fullName',
            'email': 'email',
            'name': 'name'
        }

        self.__class = _class
        self._id = id
        self._full_name = full_name
        self._email = email
        self._name = name

    @classmethod
    def from_dict(cls, dikt) -> 'User':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The User of this User.
        :rtype: User
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this User.

        :return: The _class of this User.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this User.

        :param _class: The _class of this User.
        :type _class: str
        """

        self.__class = _class

    @property
    def id(self) -> str:
        """
        Gets the id of this User.

        :return: The id of this User.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """
        Sets the id of this User.

        :param id: The id of this User.
        :type id: str
        """

        self._id = id

    @property
    def full_name(self) -> str:
        """
        Gets the full_name of this User.

        :return: The full_name of this User.
        :rtype: str
        """
        return self._full_name

    @full_name.setter
    def full_name(self, full_name: str):
        """
        Sets the full_name of this User.

        :param full_name: The full_name of this User.
        :type full_name: str
        """

        self._full_name = full_name

    @property
    def email(self) -> str:
        """
        Gets the email of this User.

        :return: The email of this User.
        :rtype: str
        """
        return self._email

    @email.setter
    def email(self, email: str):
        """
        Sets the email of this User.

        :param email: The email of this User.
        :type email: str
        """

        self._email = email

    @property
    def name(self) -> str:
        """
        Gets the name of this User.

        :return: The name of this User.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """
        Sets the name of this User.

        :param name: The name of this User.
        :type name: str
        """

        self._name = name

