# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class HudsonassignedLabels(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None):
        """
        HudsonassignedLabels - a model defined in Swagger

        :param _class: The _class of this HudsonassignedLabels.
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
    def from_dict(cls, dikt) -> 'HudsonassignedLabels':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The HudsonassignedLabels of this HudsonassignedLabels.
        :rtype: HudsonassignedLabels
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this HudsonassignedLabels.

        :return: The _class of this HudsonassignedLabels.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this HudsonassignedLabels.

        :param _class: The _class of this HudsonassignedLabels.
        :type _class: str
        """

        self.__class = _class
