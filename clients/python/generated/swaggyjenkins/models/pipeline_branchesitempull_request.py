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


class PipelineBranchesitempullRequest(object):
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
        'links': 'PipelineBranchesitempullRequestlinks',
        'author': 'str',
        'id': 'str',
        'title': 'str',
        'url': 'str',
        '_class': 'str'
    }

    attribute_map = {
        'links': '_links',
        'author': 'author',
        'id': 'id',
        'title': 'title',
        'url': 'url',
        '_class': '_class'
    }

    def __init__(self, links=None, author=None, id=None, title=None, url=None, _class=None):
        """
        PipelineBranchesitempullRequest - a model defined in Swagger
        """

        self._links = None
        self._author = None
        self._id = None
        self._title = None
        self._url = None
        self.__class = None
        self.discriminator = None

        if links is not None:
          self.links = links
        if author is not None:
          self.author = author
        if id is not None:
          self.id = id
        if title is not None:
          self.title = title
        if url is not None:
          self.url = url
        if _class is not None:
          self._class = _class

    @property
    def links(self):
        """
        Gets the links of this PipelineBranchesitempullRequest.

        :return: The links of this PipelineBranchesitempullRequest.
        :rtype: PipelineBranchesitempullRequestlinks
        """
        return self._links

    @links.setter
    def links(self, links):
        """
        Sets the links of this PipelineBranchesitempullRequest.

        :param links: The links of this PipelineBranchesitempullRequest.
        :type: PipelineBranchesitempullRequestlinks
        """

        self._links = links

    @property
    def author(self):
        """
        Gets the author of this PipelineBranchesitempullRequest.

        :return: The author of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._author

    @author.setter
    def author(self, author):
        """
        Sets the author of this PipelineBranchesitempullRequest.

        :param author: The author of this PipelineBranchesitempullRequest.
        :type: str
        """

        self._author = author

    @property
    def id(self):
        """
        Gets the id of this PipelineBranchesitempullRequest.

        :return: The id of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this PipelineBranchesitempullRequest.

        :param id: The id of this PipelineBranchesitempullRequest.
        :type: str
        """

        self._id = id

    @property
    def title(self):
        """
        Gets the title of this PipelineBranchesitempullRequest.

        :return: The title of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title):
        """
        Sets the title of this PipelineBranchesitempullRequest.

        :param title: The title of this PipelineBranchesitempullRequest.
        :type: str
        """

        self._title = title

    @property
    def url(self):
        """
        Gets the url of this PipelineBranchesitempullRequest.

        :return: The url of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """
        Sets the url of this PipelineBranchesitempullRequest.

        :param url: The url of this PipelineBranchesitempullRequest.
        :type: str
        """

        self._url = url

    @property
    def _class(self):
        """
        Gets the _class of this PipelineBranchesitempullRequest.

        :return: The _class of this PipelineBranchesitempullRequest.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this PipelineBranchesitempullRequest.

        :param _class: The _class of this PipelineBranchesitempullRequest.
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
        if not isinstance(other, PipelineBranchesitempullRequest):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
