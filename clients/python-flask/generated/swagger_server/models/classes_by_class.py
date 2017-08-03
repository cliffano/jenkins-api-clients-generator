# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class ClassesByClass(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, classes: List[str]=None, _class: str=None):
        """
        ClassesByClass - a model defined in Swagger

        :param classes: The classes of this ClassesByClass.
        :type classes: List[str]
        :param _class: The _class of this ClassesByClass.
        :type _class: str
        """
        self.swagger_types = {
            'classes': List[str],
            '_class': str
        }

        self.attribute_map = {
            'classes': 'classes',
            '_class': '_class'
        }

        self._classes = classes
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'ClassesByClass':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ClassesByClass of this ClassesByClass.
        :rtype: ClassesByClass
        """
        return deserialize_model(dikt, cls)

    @property
    def classes(self) -> List[str]:
        """
        Gets the classes of this ClassesByClass.

        :return: The classes of this ClassesByClass.
        :rtype: List[str]
        """
        return self._classes

    @classes.setter
    def classes(self, classes: List[str]):
        """
        Sets the classes of this ClassesByClass.

        :param classes: The classes of this ClassesByClass.
        :type classes: List[str]
        """

        self._classes = classes

    @property
    def _class(self) -> str:
        """
        Gets the _class of this ClassesByClass.

        :return: The _class of this ClassesByClass.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this ClassesByClass.

        :param _class: The _class of this ClassesByClass.
        :type _class: str
        """

        self.__class = _class

