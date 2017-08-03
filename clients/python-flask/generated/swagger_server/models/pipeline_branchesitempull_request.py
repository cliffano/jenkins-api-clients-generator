# coding: utf-8

from __future__ import absolute_import
from swagger_server.models.pipeline_branchesitempull_requestlinks import PipelineBranchesitempullRequestlinks
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class PipelineBranchesitempullRequest(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, links: PipelineBranchesitempullRequestlinks=None, author: str=None, id: str=None, title: str=None, url: str=None, _class: str=None):
        """
        PipelineBranchesitempullRequest - a model defined in Swagger

        :param links: The links of this PipelineBranchesitempullRequest.
        :type links: PipelineBranchesitempullRequestlinks
        :param author: The author of this PipelineBranchesitempullRequest.
        :type author: str
        :param id: The id of this PipelineBranchesitempullRequest.
        :type id: str
        :param title: The title of this PipelineBranchesitempullRequest.
        :type title: str
        :param url: The url of this PipelineBranchesitempullRequest.
        :type url: str
        :param _class: The _class of this PipelineBranchesitempullRequest.
        :type _class: str
        """
        self.swagger_types = {
            'links': PipelineBranchesitempullRequestlinks,
            'author': str,
            'id': str,
            'title': str,
            'url': str,
            '_class': str
        }

        self.attribute_map = {
            'links': '_links',
            'author': 'author',
            'id': 'id',
            'title': 'title',
            'url': 'url',
            '_class': '_class'
        }

        self._links = links
        self._author = author
        self._id = id
        self._title = title
        self._url = url
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'PipelineBranchesitempullRequest':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The PipelineBranchesitempullRequest of this PipelineBranchesitempullRequest.
        :rtype: PipelineBranchesitempullRequest
        """
        return deserialize_model(dikt, cls)

    @property
    def links(self) -> PipelineBranchesitempullRequestlinks:
        """
        Gets the links of this PipelineBranchesitempullRequest.

        :return: The links of this PipelineBranchesitempullRequest.
        :rtype: PipelineBranchesitempullRequestlinks
        """
        return self._links

    @links.setter
    def links(self, links: PipelineBranchesitempullRequestlinks):
        """
        Sets the links of this PipelineBranchesitempullRequest.

        :param links: The links of this PipelineBranchesitempullRequest.
        :type links: PipelineBranchesitempullRequestlinks
        """

        self._links = links

    @property
    def author(self) -> str:
        """
        Gets the author of this PipelineBranchesitempullRequest.

        :return: The author of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._author

    @author.setter
    def author(self, author: str):
        """
        Sets the author of this PipelineBranchesitempullRequest.

        :param author: The author of this PipelineBranchesitempullRequest.
        :type author: str
        """

        self._author = author

    @property
    def id(self) -> str:
        """
        Gets the id of this PipelineBranchesitempullRequest.

        :return: The id of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """
        Sets the id of this PipelineBranchesitempullRequest.

        :param id: The id of this PipelineBranchesitempullRequest.
        :type id: str
        """

        self._id = id

    @property
    def title(self) -> str:
        """
        Gets the title of this PipelineBranchesitempullRequest.

        :return: The title of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title: str):
        """
        Sets the title of this PipelineBranchesitempullRequest.

        :param title: The title of this PipelineBranchesitempullRequest.
        :type title: str
        """

        self._title = title

    @property
    def url(self) -> str:
        """
        Gets the url of this PipelineBranchesitempullRequest.

        :return: The url of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url: str):
        """
        Sets the url of this PipelineBranchesitempullRequest.

        :param url: The url of this PipelineBranchesitempullRequest.
        :type url: str
        """

        self._url = url

    @property
    def _class(self) -> str:
        """
        Gets the _class of this PipelineBranchesitempullRequest.

        :return: The _class of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this PipelineBranchesitempullRequest.

        :param _class: The _class of this PipelineBranchesitempullRequest.
        :type _class: str
        """

        self.__class = _class

