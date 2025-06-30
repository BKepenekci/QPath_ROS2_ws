# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TrainResultMsg.idl
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


class Metaclass_TrainResultMsg(type):
    """Metaclass of message 'TrainResultMsg'."""

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
                'live_analysis_interfaces.msg.TrainResultMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__train_result_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__train_result_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__train_result_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__train_result_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__train_result_msg

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


class TrainResultMsg(metaclass=Metaclass_TrainResultMsg):
    """Message class 'TrainResultMsg'."""

    __slots__ = [
        '_header',
        '_id',
        '_model_name',
        '_model_id',
        '_total_time',
        '_total_train_imgs',
        '_total_eval_imgs',
        '_m_ap',
        '_duration',
        '_model_path',
        '_training_completed',
        '_epoc',
        '_current_epoc',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'string',
        'model_name': 'string',
        'model_id': 'string',
        'total_time': 'float',
        'total_train_imgs': 'int32',
        'total_eval_imgs': 'int32',
        'm_ap': 'float',
        'duration': 'float',
        'model_path': 'string',
        'training_completed': 'boolean',
        'epoc': 'int32',
        'current_epoc': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.model_name = kwargs.get('model_name', str())
        self.model_id = kwargs.get('model_id', str())
        self.total_time = kwargs.get('total_time', float())
        self.total_train_imgs = kwargs.get('total_train_imgs', int())
        self.total_eval_imgs = kwargs.get('total_eval_imgs', int())
        self.m_ap = kwargs.get('m_ap', float())
        self.duration = kwargs.get('duration', float())
        self.model_path = kwargs.get('model_path', str())
        self.training_completed = kwargs.get('training_completed', bool())
        self.epoc = kwargs.get('epoc', int())
        self.current_epoc = kwargs.get('current_epoc', int())

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
        if self.model_name != other.model_name:
            return False
        if self.model_id != other.model_id:
            return False
        if self.total_time != other.total_time:
            return False
        if self.total_train_imgs != other.total_train_imgs:
            return False
        if self.total_eval_imgs != other.total_eval_imgs:
            return False
        if self.m_ap != other.m_ap:
            return False
        if self.duration != other.duration:
            return False
        if self.model_path != other.model_path:
            return False
        if self.training_completed != other.training_completed:
            return False
        if self.epoc != other.epoc:
            return False
        if self.current_epoc != other.current_epoc:
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

    @builtins.property
    def total_train_imgs(self):
        """Message field 'total_train_imgs'."""
        return self._total_train_imgs

    @total_train_imgs.setter
    def total_train_imgs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_train_imgs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_train_imgs' field must be an integer in [-2147483648, 2147483647]"
        self._total_train_imgs = value

    @builtins.property
    def total_eval_imgs(self):
        """Message field 'total_eval_imgs'."""
        return self._total_eval_imgs

    @total_eval_imgs.setter
    def total_eval_imgs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_eval_imgs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_eval_imgs' field must be an integer in [-2147483648, 2147483647]"
        self._total_eval_imgs = value

    @builtins.property
    def m_ap(self):
        """Message field 'm_ap'."""
        return self._m_ap

    @m_ap.setter
    def m_ap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm_ap' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm_ap' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m_ap = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration = value

    @builtins.property
    def model_path(self):
        """Message field 'model_path'."""
        return self._model_path

    @model_path.setter
    def model_path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'model_path' field must be of type 'str'"
        self._model_path = value

    @builtins.property
    def training_completed(self):
        """Message field 'training_completed'."""
        return self._training_completed

    @training_completed.setter
    def training_completed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'training_completed' field must be of type 'bool'"
        self._training_completed = value

    @builtins.property
    def epoc(self):
        """Message field 'epoc'."""
        return self._epoc

    @epoc.setter
    def epoc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'epoc' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epoc' field must be an integer in [-2147483648, 2147483647]"
        self._epoc = value

    @builtins.property
    def current_epoc(self):
        """Message field 'current_epoc'."""
        return self._current_epoc

    @current_epoc.setter
    def current_epoc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_epoc' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_epoc' field must be an integer in [-2147483648, 2147483647]"
        self._current_epoc = value
