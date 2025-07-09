# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TestResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'bboxes'
# Member 'confidences'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestResult(type):
    """Metaclass of message 'TestResult'."""

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
                'live_analysis_interfaces.msg.TestResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_result

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


class TestResult(metaclass=Metaclass_TestResult):
    """Message class 'TestResult'."""

    __slots__ = [
        '_header',
        '_user_id',
        '_model_id',
        '_ok',
        '_heatmap',
        '_mask',
        '_bboxes',
        '_confidences',
        '_ok_list',
        '_image_path',
        '_percent_done',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'user_id': 'string',
        'model_id': 'string',
        'ok': 'boolean',
        'heatmap': 'sensor_msgs/Image',
        'mask': 'sensor_msgs/Image',
        'bboxes': 'sequence<int32>',
        'confidences': 'sequence<float>',
        'ok_list': 'sequence<boolean>',
        'image_path': 'string',
        'percent_done': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.user_id = kwargs.get('user_id', str())
        self.model_id = kwargs.get('model_id', str())
        self.ok = kwargs.get('ok', bool())
        from sensor_msgs.msg import Image
        self.heatmap = kwargs.get('heatmap', Image())
        from sensor_msgs.msg import Image
        self.mask = kwargs.get('mask', Image())
        self.bboxes = array.array('i', kwargs.get('bboxes', []))
        self.confidences = array.array('f', kwargs.get('confidences', []))
        self.ok_list = kwargs.get('ok_list', [])
        self.image_path = kwargs.get('image_path', str())
        self.percent_done = kwargs.get('percent_done', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.user_id != other.user_id:
            return False
        if self.model_id != other.model_id:
            return False
        if self.ok != other.ok:
            return False
        if self.heatmap != other.heatmap:
            return False
        if self.mask != other.mask:
            return False
        if self.bboxes != other.bboxes:
            return False
        if self.confidences != other.confidences:
            return False
        if self.ok_list != other.ok_list:
            return False
        if self.image_path != other.image_path:
            return False
        if self.percent_done != other.percent_done:
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
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def user_id(self):
        """Message field 'user_id'."""
        return self._user_id

    @user_id.setter
    def user_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user_id' field must be of type 'str'"
        self._user_id = value

    @builtins.property
    def model_id(self):
        """Message field 'model_id'."""
        return self._model_id

    @model_id.setter
    def model_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_id' field must be of type 'str'"
        self._model_id = value

    @builtins.property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value

    @builtins.property
    def heatmap(self):
        """Message field 'heatmap'."""
        return self._heatmap

    @heatmap.setter
    def heatmap(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'heatmap' field must be a sub message of type 'Image'"
        self._heatmap = value

    @builtins.property
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'mask' field must be a sub message of type 'Image'"
        self._mask = value

    @builtins.property
    def bboxes(self):
        """Message field 'bboxes'."""
        return self._bboxes

    @bboxes.setter
    def bboxes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'bboxes' array.array() must have the type code of 'i'"
            self._bboxes = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bboxes' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bboxes = array.array('i', value)

    @builtins.property
    def confidences(self):
        """Message field 'confidences'."""
        return self._confidences

    @confidences.setter
    def confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'confidences' array.array() must have the type code of 'f'"
            self._confidences = value
            return
        if __debug__:
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
                 all(val >= -3.402823e+38 and val <= 3.402823e+38 for val in value)), \
                "The 'confidences' field must be a set or sequence and each value of type 'float' and each float in [-340282299999999994960115009090224128000.000000, 340282299999999994960115009090224128000.000000]"
        self._confidences = array.array('f', value)

    @builtins.property
    def ok_list(self):
        """Message field 'ok_list'."""
        return self._ok_list

    @ok_list.setter
    def ok_list(self, value):
        if __debug__:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'ok_list' field must be a set or sequence and each value of type 'bool'"
        self._ok_list = value

    @builtins.property
    def image_path(self):
        """Message field 'image_path'."""
        return self._image_path

    @image_path.setter
    def image_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'image_path' field must be of type 'str'"
        self._image_path = value

    @builtins.property
    def percent_done(self):
        """Message field 'percent_done'."""
        return self._percent_done

    @percent_done.setter
    def percent_done(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'percent_done' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'percent_done' field must be an integer in [-2147483648, 2147483647]"
        self._percent_done = value
