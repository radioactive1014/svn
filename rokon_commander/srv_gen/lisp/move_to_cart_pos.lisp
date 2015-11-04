; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude move_to_cart_pos-request.msg.html

(cl:defclass <move_to_cart_pos-request> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (time
    :reader time
    :initarg :time
    :type cl:float
    :initform 0.0))
)

(cl:defclass move_to_cart_pos-request (<move_to_cart_pos-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <move_to_cart_pos-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'move_to_cart_pos-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<move_to_cart_pos-request> is deprecated: use rokon_commander-srv:move_to_cart_pos-request instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <move_to_cart_pos-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:position-val is deprecated.  Use rokon_commander-srv:position instead.")
  (position m))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <move_to_cart_pos-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:time-val is deprecated.  Use rokon_commander-srv:time instead.")
  (time m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <move_to_cart_pos-request>) ostream)
  "Serializes a message object of type '<move_to_cart_pos-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'position) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <move_to_cart_pos-request>) istream)
  "Deserializes a message object of type '<move_to_cart_pos-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'position) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<move_to_cart_pos-request>)))
  "Returns string type for a service object of type '<move_to_cart_pos-request>"
  "rokon_commander/move_to_cart_posRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'move_to_cart_pos-request)))
  "Returns string type for a service object of type 'move_to_cart_pos-request"
  "rokon_commander/move_to_cart_posRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<move_to_cart_pos-request>)))
  "Returns md5sum for a message object of type '<move_to_cart_pos-request>"
  "a112c6298852ba0c08f7b83729504253")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'move_to_cart_pos-request)))
  "Returns md5sum for a message object of type 'move_to_cart_pos-request"
  "a112c6298852ba0c08f7b83729504253")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<move_to_cart_pos-request>)))
  "Returns full string definition for message of type '<move_to_cart_pos-request>"
  (cl:format cl:nil "geometry_msgs/Pose position~%float64 time~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'move_to_cart_pos-request)))
  "Returns full string definition for message of type 'move_to_cart_pos-request"
  (cl:format cl:nil "geometry_msgs/Pose position~%float64 time~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <move_to_cart_pos-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'position))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <move_to_cart_pos-request>))
  "Converts a ROS message object to a list"
  (cl:list 'move_to_cart_pos-request
    (cl:cons ':position (position msg))
    (cl:cons ':time (time msg))
))
;//! \htmlinclude move_to_cart_pos-response.msg.html

(cl:defclass <move_to_cart_pos-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass move_to_cart_pos-response (<move_to_cart_pos-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <move_to_cart_pos-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'move_to_cart_pos-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<move_to_cart_pos-response> is deprecated: use rokon_commander-srv:move_to_cart_pos-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <move_to_cart_pos-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:success-val is deprecated.  Use rokon_commander-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <move_to_cart_pos-response>) ostream)
  "Serializes a message object of type '<move_to_cart_pos-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <move_to_cart_pos-response>) istream)
  "Deserializes a message object of type '<move_to_cart_pos-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<move_to_cart_pos-response>)))
  "Returns string type for a service object of type '<move_to_cart_pos-response>"
  "rokon_commander/move_to_cart_posResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'move_to_cart_pos-response)))
  "Returns string type for a service object of type 'move_to_cart_pos-response"
  "rokon_commander/move_to_cart_posResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<move_to_cart_pos-response>)))
  "Returns md5sum for a message object of type '<move_to_cart_pos-response>"
  "a112c6298852ba0c08f7b83729504253")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'move_to_cart_pos-response)))
  "Returns md5sum for a message object of type 'move_to_cart_pos-response"
  "a112c6298852ba0c08f7b83729504253")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<move_to_cart_pos-response>)))
  "Returns full string definition for message of type '<move_to_cart_pos-response>"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'move_to_cart_pos-response)))
  "Returns full string definition for message of type 'move_to_cart_pos-response"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <move_to_cart_pos-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <move_to_cart_pos-response>))
  "Converts a ROS message object to a list"
  (cl:list 'move_to_cart_pos-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'move_to_cart_pos)))
  'move_to_cart_pos-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'move_to_cart_pos)))
  'move_to_cart_pos-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'move_to_cart_pos)))
  "Returns string type for a service object of type '<move_to_cart_pos>"
  "rokon_commander/move_to_cart_pos")