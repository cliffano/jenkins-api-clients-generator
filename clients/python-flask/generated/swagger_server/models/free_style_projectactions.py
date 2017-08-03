# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class FreeStyleProjectactions(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None):
        """
        FreeStyleProjectactions - a model defined in Swagger

        :param _class: The _class of this FreeStyleProjectactions.
        :type _class: str
        """
        self.swagger_types = {
            '_class': str
        }

        self.attribute_map = {
            '_class': '_class'
        }

        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'FreeStyleProjectactions':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The FreeStyleProjectactions of this FreeStyleProjectactions.
        :rtype: FreeStyleProjectactions
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this FreeStyleProjectactions.

        :return: The _class of this FreeStyleProjectactions.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this FreeStyleProjectactions.

        :param _class: The _class of this FreeStyleProjectactions.
        :type _class: str
        """

        self.__class = _class

