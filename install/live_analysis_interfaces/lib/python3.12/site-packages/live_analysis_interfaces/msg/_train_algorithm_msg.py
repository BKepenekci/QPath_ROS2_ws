# generated from rosidl_generator_py/resource/_idl.py.em
# with input from live_analysis_interfaces:msg/TrainAlgorithmMsg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrainAlgorithmMsg(type):
    """Metaclass of message 'TrainAlgorithmMsg'."""

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
                'live_analysis_interfaces.msg.TrainAlgorithmMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__train_algorithm_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__train_algorithm_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__train_algorithm_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__train_algorithm_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__train_algorithm_msg

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


class TrainAlgorithmMsg(metaclass=Metaclass_TrainAlgorithmMsg):
    """Message class 'TrainAlgorithmMsg'."""

    __slots__ = [
        '_header',
        '_id',
        '_model_name',
        '_model_id',
        '_train_images',
        '_eval_images',
        '_train_set_annotations',
        '_eval_set_annotations',
        '_epoc',
        '_batchsize',
        '_algorithm_id',
        '_algorithm_name',
        '_gpu',
        '_model_path',
        '_files_completed',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'string',
        'model_name': 'string',
        'model_id': 'string',
        'train_images': 'sequence<sensor_msgs/Image>',
        'eval_images': 'sequence<sensor_msgs/Image>',
        'train_set_annotations': 'sequence<string>',
        'eval_set_annotations': 'sequence<string>',
        'epoc': 'int32',
        'batchsize': 'int32',
        'algorithm_id': 'string',
        'algorithm_name': 'string',
        'gpu': 'string',
        'model_path': 'string',
        'files_completed': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.train_images = kwargs.get('train_images', [])
        self.eval_images = kwargs.get('eval_images', [])
        self.train_set_annotations = kwargs.get('train_set_annotations', [])
        self.eval_set_annotations = kwargs.get('eval_set_annotations', [])
        self.epoc = kwargs.get('epoc', int())
        self.batchsize = kwargs.get('batchsize', int())
        self.algorithm_id = kwargs.get('algorithm_id', str())
        self.algorithm_name = kwargs.get('algorithm_name', str())
        self.gpu = kwargs.get('gpu', str())
        self.model_path = kwargs.get('model_path', str())
        self.files_completed = kwargs.get('files_completed', bool())

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
        if self.train_images != other.train_images:
            return False
        if self.eval_images != other.eval_images:
            return False
        if self.train_set_annotations != other.train_set_annotations:
            return False
        if self.eval_set_annotations != other.eval_set_annotations:
            return False
        if self.epoc != other.epoc:
            return False
        if self.batchsize != other.batchsize:
            return False
        if self.algorithm_id != other.algorithm_id:
            return False
        if self.algorithm_name != other.algorithm_name:
            return False
        if self.gpu != other.gpu:
            return False
        if self.model_path != other.model_path:
            return False
        if self.files_completed != other.files_completed:
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
    def train_images(self):
        """Message field 'train_images'."""
        return self._train_images

    @train_images.setter
    def train_images(self, value):
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
                "The 'train_images' field must be a set or sequence and each value of type 'Image'"
        self._train_images = value

    @builtins.property
    def eval_images(self):
        """Message field 'eval_images'."""
        return self._eval_images

    @eval_images.setter
    def eval_images(self, value):
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
                "The 'eval_images' field must be a set or sequence and each value of type 'Image'"
        self._eval_images = value

    @builtins.property
    def train_set_annotations(self):
        """Message field 'train_set_annotations'."""
        return self._train_set_annotations

    @train_set_annotations.setter
    def train_set_annotations(self, value):
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
                "The 'train_set_annotations' field must be a set or sequence and each value of type 'str'"
        self._train_set_annotations = value

    @builtins.property
    def eval_set_annotations(self):
        """Message field 'eval_set_annotations'."""
        return self._eval_set_annotations

    @eval_set_annotations.setter
    def eval_set_annotations(self, value):
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
                "The 'eval_set_annotations' field must be a set or sequence and each value of type 'str'"
        self._eval_set_annotations = value

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
    def batchsize(self):
        """Message field 'batchsize'."""
        return self._batchsize

    @batchsize.setter
    def batchsize(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'batchsize' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'batchsize' field must be an integer in [-2147483648, 2147483647]"
        self._batchsize = value

    @builtins.property
    def algorithm_id(self):
        """Message field 'algorithm_id'."""
        return self._algorithm_id

    @algorithm_id.setter
    def algorithm_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'algorithm_id' field must be of type 'str'"
        self._algorithm_id = value

    @builtins.property
    def algorithm_name(self):
        """Message field 'algorithm_name'."""
        return self._algorithm_name

    @algorithm_name.setter
    def algorithm_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'algorithm_name' field must be of type 'str'"
        self._algorithm_name = value

    @builtins.property
    def gpu(self):
        """Message field 'gpu'."""
        return self._gpu

    @gpu.setter
    def gpu(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'gpu' field must be of type 'str'"
        self._gpu = value

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
    def files_completed(self):
        """Message field 'files_completed'."""
        return self._files_completed

    @files_completed.setter
    def files_completed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'files_completed' field must be of type 'bool'"
        self._files_completed = value
