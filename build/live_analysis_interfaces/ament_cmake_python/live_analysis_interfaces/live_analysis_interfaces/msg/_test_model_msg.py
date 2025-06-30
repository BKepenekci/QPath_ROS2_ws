# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TestModelMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestModelMsg(type):
    """Metaclass of message 'TestModelMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('live_analysis_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'live_analysis_interfaces.msg.TestModelMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_model_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_model_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_model_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_model_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_model_msg

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestModelMsg(metaclass=Metaclass_TestModelMsg):
    """Message class 'TestModelMsg'."""

    __slots__ = [
        '_header',
        '_id',
        '_model_id',
        '_model_name',
        '_with_bounding_box',
        '_gpu',
        '_area_th',
        '_confidance_th',
        '_images',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'string',
        'model_id': 'string',
        'model_name': 'string',
        'with_bounding_box': 'boolean',
        'gpu': 'uint32',
        'area_th': 'float',
        'confidance_th': 'float',
        'images': 'sequence<sensor_msgs/Image>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', str())
        self.model_id = kwargs.get('model_id', str())
        self.model_name = kwargs.get('model_name', str())
        self.with_bounding_box = kwargs.get('with_bounding_box', bool())
        self.gpu = kwargs.get('gpu', int())
        self.area_th = kwargs.get('area_th', float())
        self.confidance_th = kwargs.get('confidance_th', float())
        self.images = kwargs.get('images', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.id != other.id:
            return False
        if self.model_id != other.model_id:
            return False
        if self.model_name != other.model_name:
            return False
        if self.with_bounding_box != other.with_bounding_box:
            return False
        if self.gpu != other.gpu:
            return False
        if self.area_th != other.area_th:
            return False
        if self.confidance_th != other.confidance_th:
            return False
        if self.images != other.images:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def model_id(self):
        """Message field 'model_id'."""
        return self._model_id

    @model_id.setter
    def model_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'model_id' field must be of type 'str'"
        self._model_id = value

    @builtins.property
    def model_name(self):
        """Message field 'model_name'."""
        return self._model_name

    @model_name.setter
    def model_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'model_name' field must be of type 'str'"
        self._model_name = value

    @builtins.property
    def with_bounding_box(self):
        """Message field 'with_bounding_box'."""
        return self._with_bounding_box

    @with_bounding_box.setter
    def with_bounding_box(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'with_bounding_box' field must be of type 'bool'"
        self._with_bounding_box = value

    @builtins.property
    def gpu(self):
        """Message field 'gpu'."""
        return self._gpu

    @gpu.setter
    def gpu(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gpu' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gpu' field must be an unsigned integer in [0, 4294967295]"
        self._gpu = value

    @builtins.property
    def area_th(self):
        """Message field 'area_th'."""
        return self._area_th

    @area_th.setter
    def area_th(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'area_th' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_th' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_th = value

    @builtins.property
    def confidance_th(self):
        """Message field 'confidance_th'."""
        return self._confidance_th

    @confidance_th.setter
    def confidance_th(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confidance_th' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidance_th' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidance_th = value

    @builtins.property
    def images(self):
        """Message field 'images'."""
        return self._images

    @images.setter
    def images(self, value):
        if self._check_fields:
            from sensor_msgs.msg import Image
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Image) for v in value) and
                 True), \
                "The 'images' field must be a set or sequence and each value of type 'Image'"
        self._images = value
