"""autogenerated by genpy from KUKACommander/set_cart_impRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class set_cart_impRequest(genpy.Message):
  _md5sum = "bd4dbca8475cfa8e858db7599bb64f48"
  _type = "KUKACommander/set_cart_impRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Twist stiffness
geometry_msgs/Twist damping

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['stiffness','damping']
  _slot_types = ['geometry_msgs/Twist','geometry_msgs/Twist']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       stiffness,damping

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(set_cart_impRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.stiffness is None:
        self.stiffness = geometry_msgs.msg.Twist()
      if self.damping is None:
        self.damping = geometry_msgs.msg.Twist()
    else:
      self.stiffness = geometry_msgs.msg.Twist()
      self.damping = geometry_msgs.msg.Twist()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_12d.pack(_x.stiffness.linear.x, _x.stiffness.linear.y, _x.stiffness.linear.z, _x.stiffness.angular.x, _x.stiffness.angular.y, _x.stiffness.angular.z, _x.damping.linear.x, _x.damping.linear.y, _x.damping.linear.z, _x.damping.angular.x, _x.damping.angular.y, _x.damping.angular.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.stiffness is None:
        self.stiffness = geometry_msgs.msg.Twist()
      if self.damping is None:
        self.damping = geometry_msgs.msg.Twist()
      end = 0
      _x = self
      start = end
      end += 96
      (_x.stiffness.linear.x, _x.stiffness.linear.y, _x.stiffness.linear.z, _x.stiffness.angular.x, _x.stiffness.angular.y, _x.stiffness.angular.z, _x.damping.linear.x, _x.damping.linear.y, _x.damping.linear.z, _x.damping.angular.x, _x.damping.angular.y, _x.damping.angular.z,) = _struct_12d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_12d.pack(_x.stiffness.linear.x, _x.stiffness.linear.y, _x.stiffness.linear.z, _x.stiffness.angular.x, _x.stiffness.angular.y, _x.stiffness.angular.z, _x.damping.linear.x, _x.damping.linear.y, _x.damping.linear.z, _x.damping.angular.x, _x.damping.angular.y, _x.damping.angular.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.stiffness is None:
        self.stiffness = geometry_msgs.msg.Twist()
      if self.damping is None:
        self.damping = geometry_msgs.msg.Twist()
      end = 0
      _x = self
      start = end
      end += 96
      (_x.stiffness.linear.x, _x.stiffness.linear.y, _x.stiffness.linear.z, _x.stiffness.angular.x, _x.stiffness.angular.y, _x.stiffness.angular.z, _x.damping.linear.x, _x.damping.linear.y, _x.damping.linear.z, _x.damping.angular.x, _x.damping.angular.y, _x.damping.angular.z,) = _struct_12d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_12d = struct.Struct("<12d")
"""autogenerated by genpy from KUKACommander/set_cart_impResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class set_cart_impResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "KUKACommander/set_cart_impResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(set_cart_impResponse, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
class set_cart_imp(object):
  _type          = 'KUKACommander/set_cart_imp'
  _md5sum = 'bd4dbca8475cfa8e858db7599bb64f48'
  _request_class  = set_cart_impRequest
  _response_class = set_cart_impResponse
