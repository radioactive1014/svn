; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude cart_lin_motion-request.msg.html

(cl:defclass <cart_lin_motion-request> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (speed
    :reader speed
    :initarg :speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass cart_lin_motion-request (<cart_lin_motion-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cart_lin_motion-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cart_lin_motion-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<cart_lin_motion-request> is deprecated: use rokon_commander-srv:cart_lin_motion-request instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <cart_lin_motion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:position-val is deprecated.  Use rokon_commander-srv:position instead.")
  (position m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <cart_lin_motion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:speed-val is deprecated.  Use rokon_commander-srv:speed instead.")
  (speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cart_lin_motion-request>) ostream)
  "Serializes a message object of type '<cart_lin_motion-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'position) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cart_lin_motion-request>) istream)
  "Deserializes a message object of type '<cart_lin_motion-request>"
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
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cart_lin_motion-request>)))
  "Returns string type for a service object of type '<cart_lin_motion-request>"
  "rokon_commander/cart_lin_motionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cart_lin_motion-request)))
  "Returns string type for a service object of type 'cart_lin_motion-request"
  "rokon_commander/cart_lin_motionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cart_lin_motion-request>)))
  "Returns md5sum for a message object of type '<cart_lin_motion-request>"
  "c166c946cf08d3e3a652b057dce18240")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cart_lin_motion-request)))
  "Returns md5sum for a message object of type 'cart_lin_motion-request"
  "c166c946cf08d3e3a652b057dce18240")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cart_lin_motion-request>)))
  "Returns full string definition for message of type '<cart_lin_motion-request>"
  (cl:format cl:nil "geometry_msgs/Pose position~%float64 speed~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cart_lin_motion-request)))
  "Returns full string definition for message of type 'cart_lin_motion-request"
  (cl:format cl:nil "geometry_msgs/Pose position~%float64 speed~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cart_lin_motion-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'position))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cart_lin_motion-request>))
  "Converts a ROS message object to a list"
  (cl:list 'cart_lin_motion-request
    (cl:cons ':position (position msg))
    (cl:cons ':speed (speed msg))
))
;//! \htmlinclude cart_lin_motion-response.msg.html

(cl:defclass <cart_lin_motion-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass cart_lin_motion-response (<cart_lin_motion-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <cart_lin_motion-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'cart_lin_motion-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<cart_lin_motion-response> is deprecated: use rokon_commander-srv:cart_lin_motion-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <cart_lin_motion-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:success-val is deprecated.  Use rokon_commander-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <cart_lin_motion-response>) ostream)
  "Serializes a message object of type '<cart_lin_motion-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <cart_lin_motion-response>) istream)
  "Deserializes a message object of type '<cart_lin_motion-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<cart_lin_motion-response>)))
  "Returns string type for a service object of type '<cart_lin_motion-response>"
  "rokon_commander/cart_lin_motionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cart_lin_motion-response)))
  "Returns string type for a service object of type 'cart_lin_motion-response"
  "rokon_commander/cart_lin_motionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<cart_lin_motion-response>)))
  "Returns md5sum for a message object of type '<cart_lin_motion-response>"
  "c166c946cf08d3e3a652b057dce18240")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'cart_lin_motion-response)))
  "Returns md5sum for a message object of type 'cart_lin_motion-response"
  "c166c946cf08d3e3a652b057dce18240")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<cart_lin_motion-response>)))
  "Returns full string definition for message of type '<cart_lin_motion-response>"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'cart_lin_motion-response)))
  "Returns full string definition for message of type 'cart_lin_motion-response"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <cart_lin_motion-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <cart_lin_motion-response>))
  "Converts a ROS message object to a list"
  (cl:list 'cart_lin_motion-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'cart_lin_motion)))
  'cart_lin_motion-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'cart_lin_motion)))
  'cart_lin_motion-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'cart_lin_motion)))
  "Returns string type for a service object of type '<cart_lin_motion>"
  "rokon_commander/cart_lin_motion")