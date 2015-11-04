; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude set_cart_wrench-request.msg.html

(cl:defclass <set_cart_wrench-request> (roslisp-msg-protocol:ros-message)
  ((wrench
    :reader wrench
    :initarg :wrench
    :type geometry_msgs-msg:Wrench
    :initform (cl:make-instance 'geometry_msgs-msg:Wrench)))
)

(cl:defclass set_cart_wrench-request (<set_cart_wrench-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_cart_wrench-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_cart_wrench-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_cart_wrench-request> is deprecated: use rokon_commander-srv:set_cart_wrench-request instead.")))

(cl:ensure-generic-function 'wrench-val :lambda-list '(m))
(cl:defmethod wrench-val ((m <set_cart_wrench-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:wrench-val is deprecated.  Use rokon_commander-srv:wrench instead.")
  (wrench m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_cart_wrench-request>) ostream)
  "Serializes a message object of type '<set_cart_wrench-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'wrench) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_cart_wrench-request>) istream)
  "Deserializes a message object of type '<set_cart_wrench-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'wrench) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_cart_wrench-request>)))
  "Returns string type for a service object of type '<set_cart_wrench-request>"
  "rokon_commander/set_cart_wrenchRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_cart_wrench-request)))
  "Returns string type for a service object of type 'set_cart_wrench-request"
  "rokon_commander/set_cart_wrenchRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_cart_wrench-request>)))
  "Returns md5sum for a message object of type '<set_cart_wrench-request>"
  "806b3735eae05d4a43eff001f34992e5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_cart_wrench-request)))
  "Returns md5sum for a message object of type 'set_cart_wrench-request"
  "806b3735eae05d4a43eff001f34992e5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_cart_wrench-request>)))
  "Returns full string definition for message of type '<set_cart_wrench-request>"
  (cl:format cl:nil "geometry_msgs/Wrench wrench~%~%================================================================================~%MSG: geometry_msgs/Wrench~%# This represents force in free space, separated into~%# its linear and angular parts.~%Vector3  force~%Vector3  torque~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_cart_wrench-request)))
  "Returns full string definition for message of type 'set_cart_wrench-request"
  (cl:format cl:nil "geometry_msgs/Wrench wrench~%~%================================================================================~%MSG: geometry_msgs/Wrench~%# This represents force in free space, separated into~%# its linear and angular parts.~%Vector3  force~%Vector3  torque~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_cart_wrench-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'wrench))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_cart_wrench-request>))
  "Converts a ROS message object to a list"
  (cl:list 'set_cart_wrench-request
    (cl:cons ':wrench (wrench msg))
))
;//! \htmlinclude set_cart_wrench-response.msg.html

(cl:defclass <set_cart_wrench-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass set_cart_wrench-response (<set_cart_wrench-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_cart_wrench-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_cart_wrench-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_cart_wrench-response> is deprecated: use rokon_commander-srv:set_cart_wrench-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_cart_wrench-response>) ostream)
  "Serializes a message object of type '<set_cart_wrench-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_cart_wrench-response>) istream)
  "Deserializes a message object of type '<set_cart_wrench-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_cart_wrench-response>)))
  "Returns string type for a service object of type '<set_cart_wrench-response>"
  "rokon_commander/set_cart_wrenchResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_cart_wrench-response)))
  "Returns string type for a service object of type 'set_cart_wrench-response"
  "rokon_commander/set_cart_wrenchResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_cart_wrench-response>)))
  "Returns md5sum for a message object of type '<set_cart_wrench-response>"
  "806b3735eae05d4a43eff001f34992e5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_cart_wrench-response)))
  "Returns md5sum for a message object of type 'set_cart_wrench-response"
  "806b3735eae05d4a43eff001f34992e5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_cart_wrench-response>)))
  "Returns full string definition for message of type '<set_cart_wrench-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_cart_wrench-response)))
  "Returns full string definition for message of type 'set_cart_wrench-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_cart_wrench-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_cart_wrench-response>))
  "Converts a ROS message object to a list"
  (cl:list 'set_cart_wrench-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'set_cart_wrench)))
  'set_cart_wrench-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'set_cart_wrench)))
  'set_cart_wrench-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_cart_wrench)))
  "Returns string type for a service object of type '<set_cart_wrench>"
  "rokon_commander/set_cart_wrench")