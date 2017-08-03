# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class EmptyChangeLogSet(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, kind: str=None):
        """
        EmptyChangeLogSet - a model defined in Swagger

        :param _class: The _class of this EmptyChangeLogSet.
        :type _class: str
        :param kind: The kind of this EmptyChangeLogSet.
        :type kind: str
        """
        self.swagger_types = {
            '_class': str,
            'kind': str
        }

        self.attribute_map = {
            '_class': '_class',
            'kind': 'kind'
        }

        self.__class = _class
        self._kind = kind

    @classmethod
    def from_dict(cls, dikt) -> 'EmptyChangeLogSet':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The EmptyChangeLogSet of this EmptyChangeLogSet.
        :rtype: EmptyChangeLogSet
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this EmptyChangeLogSet.

        :return: The _class of this EmptyChangeLogSet.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this EmptyChangeLogSet.

        :param _class: The _class of this EmptyChangeLogSet.
        :type _class: str
        """

        self.__class = _class

    @property
    def kind(self) -> str:
        """
        Gets the kind of this EmptyChangeLogSet.

        :return: The kind of this EmptyChangeLogSet.
        :rtype: str
        """
        return self._kind

    @kind.setter
    def kind(self, kind: str):
        """
        Sets the kind of this EmptyChangeLogSet.

        :param kind: The kind of this EmptyChangeLogSet.
        :type kind: str
        """

        self._kind = kind

