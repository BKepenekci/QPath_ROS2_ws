# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TestResultMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'img_result_confidance'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestResultMsg(type):
    """Metaclass of message 'TestResultMsg'."""

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
                'live_analysis_interfaces.msg.TestResultMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_result_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_result_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_result_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_result_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_result_msg

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


class TestResultMsg(metaclass=Metaclass_TestResultMsg):
    """Message class 'TestResultMsg'."""

    __slots__ = [
        '_header',
        '_id',
        '_total_imgs',
        '_img_result_strs',
        '_img_result_confidance',
        '_heat_maps',
        '_result_imgs',
        '_total_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'string',
        'total_imgs': 'int32',
        'img_result_strs': 'sequence<string>',
        'img_result_confidance': 'sequence<float>',
        'heat_maps': 'sequence<sensor_msgs/Image>',
        'result_imgs': 'sequence<sensor_msgs/Image>',
        'total_time': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.total_imgs = kwargs.get('total_imgs', int())
        self.img_result_strs = kwargs.get('img_result_strs', [])
        self.img_result_confidance = array.array('f', kwargs.get('img_result_confidance', []))
        self.heat_maps = kwargs.get('heat_maps', [])
        self.result_imgs = kwargs.get('result_imgs', [])
        self.total_time = kwargs.get('total_time', float())

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
        if self.total_imgs != other.total_imgs:
            return False
        if self.img_result_strs != other.img_result_strs:
            return False
        if self.img_result_confidance != other.img_result_confidance:
            return False
        if self.heat_maps != other.heat_maps:
            return False
        if self.result_imgs != other.result_imgs:
            return False
        if self.total_time != other.total_time:
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
    def total_imgs(self):
        """Message field 'total_imgs'."""
        return self._total_imgs

    @total_imgs.setter
    def total_imgs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_imgs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_imgs' field must be an integer in [-2147483648, 2147483647]"
        self._total_imgs = value

    @builtins.property
    def img_result_strs(self):
        """Message field 'img_result_strs'."""
        return self._img_result_strs

    @img_result_strs.setter
    def img_result_strs(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'img_result_strs' field must be a set or sequence and each value of type 'str'"
        self._img_result_strs = value

    @builtins.property
    def img_result_confidance(self):
        """Message field 'img_result_confidance'."""
        return self._img_result_confidance

    @img_result_confidance.setter
    def img_result_confidance(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'img_result_confidance' array.array() must have the type code of 'f'"
                self._img_result_confidance = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'img_result_confidance' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._img_result_confidance = array.array('f', value)

    @builtins.property
    def heat_maps(self):
        """Message field 'heat_maps'."""
        return self._heat_maps

    @heat_maps.setter
    def heat_maps(self, value):
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
                "The 'heat_maps' field must be a set or sequence and each value of type 'Image'"
        self._heat_maps = value

    @builtins.property
    def result_imgs(self):
        """Message field 'result_imgs'."""
        return self._result_imgs

    @result_imgs.setter
    def result_imgs(self, value):
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
                "The 'result_imgs' field must be a set or sequence and each value of type 'Image'"
        self._result_imgs = value

    @builtins.property
    def total_time(self):
        """Message field 'total_time'."""
        return self._total_time

    @total_time.setter
    def total_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_time = value
