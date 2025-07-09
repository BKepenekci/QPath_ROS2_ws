# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TrainingResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrainingResult(type):
    """Metaclass of message 'TrainingResult'."""

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
                'live_analysis_interfaces.msg.TrainingResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__training_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__training_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__training_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__training_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__training_result

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


class TrainingResult(metaclass=Metaclass_TrainingResult):
    """Message class 'TrainingResult'."""

    __slots__ = [
        '_header',
        '_user_id',
        '_algorithm_id',
        '_model_id',
        '_total_time',
        '_total_patches',
        '_loss',
        '_duration',
        '_epochs',
        '_current_epoch',
        '_msg_txt',
        '_training_completed',
        '_stopped',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'user_id': 'string',
        'algorithm_id': 'string',
        'model_id': 'string',
        'total_time': 'float',
        'total_patches': 'int32',
        'loss': 'float',
        'duration': 'float',
        'epochs': 'int32',
        'current_epoch': 'int32',
        'msg_txt': 'string',
        'training_completed': 'boolean',
        'stopped': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.user_id = kwargs.get('user_id', str())
        self.algorithm_id = kwargs.get('algorithm_id', str())
        self.model_id = kwargs.get('model_id', str())
        self.total_time = kwargs.get('total_time', float())
        self.total_patches = kwargs.get('total_patches', int())
        self.loss = kwargs.get('loss', float())
        self.duration = kwargs.get('duration', float())
        self.epochs = kwargs.get('epochs', int())
        self.current_epoch = kwargs.get('current_epoch', int())
        self.msg_txt = kwargs.get('msg_txt', str())
        self.training_completed = kwargs.get('training_completed', bool())
        self.stopped = kwargs.get('stopped', bool())

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
        if self.algorithm_id != other.algorithm_id:
            return False
        if self.model_id != other.model_id:
            return False
        if self.total_time != other.total_time:
            return False
        if self.total_patches != other.total_patches:
            return False
        if self.loss != other.loss:
            return False
        if self.duration != other.duration:
            return False
        if self.epochs != other.epochs:
            return False
        if self.current_epoch != other.current_epoch:
            return False
        if self.msg_txt != other.msg_txt:
            return False
        if self.training_completed != other.training_completed:
            return False
        if self.stopped != other.stopped:
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
    def algorithm_id(self):
        """Message field 'algorithm_id'."""
        return self._algorithm_id

    @algorithm_id.setter
    def algorithm_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'algorithm_id' field must be of type 'str'"
        self._algorithm_id = value

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
    def total_time(self):
        """Message field 'total_time'."""
        return self._total_time

    @total_time.setter
    def total_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_time' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'total_time' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._total_time = value

    @builtins.property
    def total_patches(self):
        """Message field 'total_patches'."""
        return self._total_patches

    @total_patches.setter
    def total_patches(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_patches' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_patches' field must be an integer in [-2147483648, 2147483647]"
        self._total_patches = value

    @builtins.property
    def loss(self):
        """Message field 'loss'."""
        return self._loss

    @loss.setter
    def loss(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loss' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'loss' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._loss = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'duration' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._duration = value

    @builtins.property
    def epochs(self):
        """Message field 'epochs'."""
        return self._epochs

    @epochs.setter
    def epochs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epochs' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'epochs' field must be an integer in [-2147483648, 2147483647]"
        self._epochs = value

    @builtins.property
    def current_epoch(self):
        """Message field 'current_epoch'."""
        return self._current_epoch

    @current_epoch.setter
    def current_epoch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_epoch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_epoch' field must be an integer in [-2147483648, 2147483647]"
        self._current_epoch = value

    @builtins.property
    def msg_txt(self):
        """Message field 'msg_txt'."""
        return self._msg_txt

    @msg_txt.setter
    def msg_txt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg_txt' field must be of type 'str'"
        self._msg_txt = value

    @builtins.property
    def training_completed(self):
        """Message field 'training_completed'."""
        return self._training_completed

    @training_completed.setter
    def training_completed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'training_completed' field must be of type 'bool'"
        self._training_completed = value

    @builtins.property
    def stopped(self):
        """Message field 'stopped'."""
        return self._stopped

    @stopped.setter
    def stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stopped' field must be of type 'bool'"
        self._stopped = value
