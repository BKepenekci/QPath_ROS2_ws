# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TrainRequestClient.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'rectangles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrainRequestClient(type):
    """Metaclass of message 'TrainRequestClient'."""

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
                'live_analysis_interfaces.msg.TrainRequestClient')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__train_request_client
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__train_request_client
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__train_request_client
            cls._TYPE_SUPPORT = module.type_support_msg__msg__train_request_client
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__train_request_client

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


class TrainRequestClient(metaclass=Metaclass_TrainRequestClient):
    """Message class 'TrainRequestClient'."""

    __slots__ = [
        '_header',
        '_user_id',
        '_algorithm_id',
        '_model_id',
        '_epochs',
        '_min_accuracy',
        '_batch_size',
        '_use_detection',
        '_use_label',
        '_data_class',
        '_train_images',
        '_eval_images',
        '_class_labels',
        '_rectangles',
        '_files_completed',
        '_seq_no',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'user_id': 'string',
        'algorithm_id': 'string',
        'model_id': 'string',
        'epochs': 'int32',
        'min_accuracy': 'float',
        'batch_size': 'int32',
        'use_detection': 'boolean',
        'use_label': 'boolean',
        'data_class': 'string',
        'train_images': 'sequence<sensor_msgs/Image>',
        'eval_images': 'sequence<sensor_msgs/Image>',
        'class_labels': 'sequence<string>',
        'rectangles': 'sequence<float>',
        'files_completed': 'boolean',
        'seq_no': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.epochs = kwargs.get('epochs', int())
        self.min_accuracy = kwargs.get('min_accuracy', float())
        self.batch_size = kwargs.get('batch_size', int())
        self.use_detection = kwargs.get('use_detection', bool())
        self.use_label = kwargs.get('use_label', bool())
        self.data_class = kwargs.get('data_class', str())
        self.train_images = kwargs.get('train_images', [])
        self.eval_images = kwargs.get('eval_images', [])
        self.class_labels = kwargs.get('class_labels', [])
        self.rectangles = array.array('f', kwargs.get('rectangles', []))
        self.files_completed = kwargs.get('files_completed', bool())
        self.seq_no = kwargs.get('seq_no', int())

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
        if self.epochs != other.epochs:
            return False
        if self.min_accuracy != other.min_accuracy:
            return False
        if self.batch_size != other.batch_size:
            return False
        if self.use_detection != other.use_detection:
            return False
        if self.use_label != other.use_label:
            return False
        if self.data_class != other.data_class:
            return False
        if self.train_images != other.train_images:
            return False
        if self.eval_images != other.eval_images:
            return False
        if self.class_labels != other.class_labels:
            return False
        if self.rectangles != other.rectangles:
            return False
        if self.files_completed != other.files_completed:
            return False
        if self.seq_no != other.seq_no:
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
    def min_accuracy(self):
        """Message field 'min_accuracy'."""
        return self._min_accuracy

    @min_accuracy.setter
    def min_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_accuracy' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'min_accuracy' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._min_accuracy = value

    @builtins.property
    def batch_size(self):
        """Message field 'batch_size'."""
        return self._batch_size

    @batch_size.setter
    def batch_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'batch_size' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'batch_size' field must be an integer in [-2147483648, 2147483647]"
        self._batch_size = value

    @builtins.property
    def use_detection(self):
        """Message field 'use_detection'."""
        return self._use_detection

    @use_detection.setter
    def use_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_detection' field must be of type 'bool'"
        self._use_detection = value

    @builtins.property
    def use_label(self):
        """Message field 'use_label'."""
        return self._use_label

    @use_label.setter
    def use_label(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_label' field must be of type 'bool'"
        self._use_label = value

    @builtins.property
    def data_class(self):
        """Message field 'data_class'."""
        return self._data_class

    @data_class.setter
    def data_class(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data_class' field must be of type 'str'"
        self._data_class = value

    @builtins.property
    def train_images(self):
        """Message field 'train_images'."""
        return self._train_images

    @train_images.setter
    def train_images(self, value):
        if __debug__:
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
                "The 'train_images' field must be a set or sequence and each value of type 'Image'"
        self._train_images = value

    @builtins.property
    def eval_images(self):
        """Message field 'eval_images'."""
        return self._eval_images

    @eval_images.setter
    def eval_images(self, value):
        if __debug__:
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
                "The 'eval_images' field must be a set or sequence and each value of type 'Image'"
        self._eval_images = value

    @builtins.property
    def class_labels(self):
        """Message field 'class_labels'."""
        return self._class_labels

    @class_labels.setter
    def class_labels(self, value):
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
                "The 'class_labels' field must be a set or sequence and each value of type 'str'"
        self._class_labels = value

    @builtins.property
    def rectangles(self):
        """Message field 'rectangles'."""
        return self._rectangles

    @rectangles.setter
    def rectangles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'rectangles' array.array() must have the type code of 'f'"
            self._rectangles = value
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
                "The 'rectangles' field must be a set or sequence and each value of type 'float' and each float in [-340282299999999994960115009090224128000.000000, 340282299999999994960115009090224128000.000000]"
        self._rectangles = array.array('f', value)

    @builtins.property
    def files_completed(self):
        """Message field 'files_completed'."""
        return self._files_completed

    @files_completed.setter
    def files_completed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'files_completed' field must be of type 'bool'"
        self._files_completed = value

    @builtins.property
    def seq_no(self):
        """Message field 'seq_no'."""
        return self._seq_no

    @seq_no.setter
    def seq_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seq_no' field must be an integer in [-2147483648, 2147483647]"
        self._seq_no = value
