# coding: utf-8

from __future__ import absolute_import
from swagger_server.models.favorite_impllinks import FavoriteImpllinks
from swagger_server.models.pipeline_impl import PipelineImpl
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class FavoriteImpl(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, links: FavoriteImpllinks=None, item: PipelineImpl=None):
        """
        FavoriteImpl - a model defined in Swagger

        :param _class: The _class of this FavoriteImpl.
        :type _class: str
        :param links: The links of this FavoriteImpl.
        :type links: FavoriteImpllinks
        :param item: The item of this FavoriteImpl.
        :type item: PipelineImpl
        """
        self.swagger_types = {
            '_class': str,
            'links': FavoriteImpllinks,
            'item': PipelineImpl
        }

        self.attribute_map = {
            '_class': '_class',
            'links': '_links',
            'item': 'item'
        }

        self.__class = _class
        self._links = links
        self._item = item

    @classmethod
    def from_dict(cls, dikt) -> 'FavoriteImpl':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The FavoriteImpl of this FavoriteImpl.
        :rtype: FavoriteImpl
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this FavoriteImpl.

        :return: The _class of this FavoriteImpl.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this FavoriteImpl.

        :param _class: The _class of this FavoriteImpl.
        :type _class: str
        """

        self.__class = _class

    @property
    def links(self) -> FavoriteImpllinks:
        """
        Gets the links of this FavoriteImpl.

        :return: The links of this FavoriteImpl.
        :rtype: FavoriteImpllinks
        """
        return self._links

    @links.setter
    def links(self, links: FavoriteImpllinks):
        """
        Sets the links of this FavoriteImpl.

        :param links: The links of this FavoriteImpl.
        :type links: FavoriteImpllinks
        """

        self._links = links

    @property
    def item(self) -> PipelineImpl:
        """
        Gets the item of this FavoriteImpl.

        :return: The item of this FavoriteImpl.
        :rtype: PipelineImpl
        """
        return self._item

    @item.setter
    def item(self, item: PipelineImpl):
        """
        Sets the item of this FavoriteImpl.

        :param item: The item of this FavoriteImpl.
        :type item: PipelineImpl
        """

        self._item = item

