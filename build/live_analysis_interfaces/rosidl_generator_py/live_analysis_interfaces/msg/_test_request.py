# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TestRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestRequest(type):
    """Metaclass of message 'TestRequest'."""

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
                'live_analysis_interfaces.msg.TestRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_request

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


class TestRequest(metaclass=Metaclass_TestRequest):
    """Message class 'TestRequest'."""

    __slots__ = [
        '_header',
        '_id',
        '_user_id',
        '_model_id',
        '_with_bounding_box',
        '_gpu',
        '_area_th',
        '_confidance_th',
        '_image_paths',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'string',
        'user_id': 'string',
        'model_id': 'string',
        'with_bounding_box': 'boolean',
        'gpu': 'uint32',
        'area_th': 'float',
        'confidance_th': 'float',
        'image_paths': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', str())
        self.user_id = kwargs.get('user_id', str())
        self.model_id = kwargs.get('model_id', str())
        self.with_bounding_box = kwargs.get('with_bounding_box', bool())
        self.gpu = kwargs.get('gpu', int())
        self.area_th = kwargs.get('area_th', float())
        self.confidance_th = kwargs.get('confidance_th', float())
        self.image_paths = kwargs.get('image_paths', [])

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
        if self.id != other.id:
            return False
        if self.user_id != other.user_id:
            return False
        if self.model_id != other.model_id:
            return False
        if self.with_bounding_box != other.with_bounding_box:
            return False
        if self.gpu != other.gpu:
            return False
        if self.area_th != other.area_th:
            return False
        if self.confidance_th != other.confidance_th:
            return False
        if self.image_paths != other.image_paths:
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

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
    def with_bounding_box(self):
        """Message field 'with_bounding_box'."""
        return self._with_bounding_box

    @with_bounding_box.setter
    def with_bounding_box(self, value):
        if __debug__:
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
        if __debug__:
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
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area_th' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'area_th' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._area_th = value

    @builtins.property
    def confidance_th(self):
        """Message field 'confidance_th'."""
        return self._confidance_th

    @confidance_th.setter
    def confidance_th(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidance_th' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'confidance_th' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._confidance_th = value

    @builtins.property
    def image_paths(self):
        """Message field 'image_paths'."""
        return self._image_paths

    @image_paths.setter
    def image_paths(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'image_paths' field must be a set or sequence and each value of type 'str'"
        self._image_paths = value
