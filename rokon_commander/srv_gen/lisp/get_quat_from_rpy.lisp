; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude get_quat_from_rpy-request.msg.html

(cl:defclass <get_quat_from_rpy-request> (roslisp-msg-protocol:ros-message)
  ((r
    :reader r
    :initarg :r
    :type cl:float
    :initform 0.0)
   (p
    :reader p
    :initarg :p
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0))
)

(cl:defclass get_quat_from_rpy-request (<get_quat_from_rpy-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <get_quat_from_rpy-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'get_quat_from_rpy-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<get_quat_from_rpy-request> is deprecated: use rokon_commander-srv:get_quat_from_rpy-request instead.")))

(cl:ensure-generic-function 'r-val :lambda-list '(m))
(cl:defmethod r-val ((m <get_quat_from_rpy-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:r-val is deprecated.  Use rokon_commander-srv:r instead.")
  (r m))

(cl:ensure-generic-function 'p-val :lambda-list '(m))
(cl:defmethod p-val ((m <get_quat_from_rpy-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:p-val is deprecated.  Use rokon_commander-srv:p instead.")
  (p m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <get_quat_from_rpy-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:y-val is deprecated.  Use rokon_commander-srv:y instead.")
  (y m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <get_quat_from_rpy-request>) ostream)
  "Serializes a message object of type '<get_quat_from_rpy-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'r))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'p))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <get_quat_from_rpy-request>) istream)
  "Deserializes a message object of type '<get_quat_from_rpy-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'r) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'p) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<get_quat_from_rpy-request>)))
  "Returns string type for a service object of type '<get_quat_from_rpy-request>"
  "rokon_commander/get_quat_from_rpyRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_quat_from_rpy-request)))
  "Returns string type for a service object of type 'get_quat_from_rpy-request"
  "rokon_commander/get_quat_from_rpyRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<get_quat_from_rpy-request>)))
  "Returns md5sum for a message object of type '<get_quat_from_rpy-request>"
  "22f0489bd951954682c7b0d3a160592e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'get_quat_from_rpy-request)))
  "Returns md5sum for a message object of type 'get_quat_from_rpy-request"
  "22f0489bd951954682c7b0d3a160592e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<get_quat_from_rpy-request>)))
  "Returns full string definition for message of type '<get_quat_from_rpy-request>"
  (cl:format cl:nil "float64 r~%float64 p~%float64 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'get_quat_from_rpy-request)))
  "Returns full string definition for message of type 'get_quat_from_rpy-request"
  (cl:format cl:nil "float64 r~%float64 p~%float64 y~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <get_quat_from_rpy-request>))
  (cl:+ 0
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <get_quat_from_rpy-request>))
  "Converts a ROS message object to a list"
  (cl:list 'get_quat_from_rpy-request
    (cl:cons ':r (r msg))
    (cl:cons ':p (p msg))
    (cl:cons ':y (y msg))
))
;//! \htmlinclude get_quat_from_rpy-response.msg.html

(cl:defclass <get_quat_from_rpy-response> (roslisp-msg-protocol:ros-message)
  ((quaternion
    :reader quaternion
    :initarg :quaternion
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion)))
)

(cl:defclass get_quat_from_rpy-response (<get_quat_from_rpy-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <get_quat_from_rpy-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'get_quat_from_rpy-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<get_quat_from_rpy-response> is deprecated: use rokon_commander-srv:get_quat_from_rpy-response instead.")))

(cl:ensure-generic-function 'quaternion-val :lambda-list '(m))
(cl:defmethod quaternion-val ((m <get_quat_from_rpy-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:quaternion-val is deprecated.  Use rokon_commander-srv:quaternion instead.")
  (quaternion m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <get_quat_from_rpy-response>) ostream)
  "Serializes a message object of type '<get_quat_from_rpy-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'quaternion) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <get_quat_from_rpy-response>) istream)
  "Deserializes a message object of type '<get_quat_from_rpy-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'quaternion) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<get_quat_from_rpy-response>)))
  "Returns string type for a service object of type '<get_quat_from_rpy-response>"
  "rokon_commander/get_quat_from_rpyResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_quat_from_rpy-response)))
  "Returns string type for a service object of type 'get_quat_from_rpy-response"
  "rokon_commander/get_quat_from_rpyResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<get_quat_from_rpy-response>)))
  "Returns md5sum for a message object of type '<get_quat_from_rpy-response>"
  "22f0489bd951954682c7b0d3a160592e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'get_quat_from_rpy-response)))
  "Returns md5sum for a message object of type 'get_quat_from_rpy-response"
  "22f0489bd951954682c7b0d3a160592e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<get_quat_from_rpy-response>)))
  "Returns full string definition for message of type '<get_quat_from_rpy-response>"
  (cl:format cl:nil "geometry_msgs/Quaternion quaternion~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'get_quat_from_rpy-response)))
  "Returns full string definition for message of type 'get_quat_from_rpy-response"
  (cl:format cl:nil "geometry_msgs/Quaternion quaternion~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <get_quat_from_rpy-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'quaternion))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <get_quat_from_rpy-response>))
  "Converts a ROS message object to a list"
  (cl:list 'get_quat_from_rpy-response
    (cl:cons ':quaternion (quaternion msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'get_quat_from_rpy)))
  'get_quat_from_rpy-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'get_quat_from_rpy)))
  'get_quat_from_rpy-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_quat_from_rpy)))
  "Returns string type for a service object of type '<get_quat_from_rpy>"
  "rokon_commander/get_quat_from_rpy")