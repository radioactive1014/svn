; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude set_cart_imp-request.msg.html

(cl:defclass <set_cart_imp-request> (roslisp-msg-protocol:ros-message)
  ((stiffness
    :reader stiffness
    :initarg :stiffness
    :type geometry_msgs-msg:Twist
    :initform (cl:make-instance 'geometry_msgs-msg:Twist))
   (damping
    :reader damping
    :initarg :damping
    :type geometry_msgs-msg:Twist
    :initform (cl:make-instance 'geometry_msgs-msg:Twist)))
)

(cl:defclass set_cart_imp-request (<set_cart_imp-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_cart_imp-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_cart_imp-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_cart_imp-request> is deprecated: use rokon_commander-srv:set_cart_imp-request instead.")))

(cl:ensure-generic-function 'stiffness-val :lambda-list '(m))
(cl:defmethod stiffness-val ((m <set_cart_imp-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:stiffness-val is deprecated.  Use rokon_commander-srv:stiffness instead.")
  (stiffness m))

(cl:ensure-generic-function 'damping-val :lambda-list '(m))
(cl:defmethod damping-val ((m <set_cart_imp-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:damping-val is deprecated.  Use rokon_commander-srv:damping instead.")
  (damping m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_cart_imp-request>) ostream)
  "Serializes a message object of type '<set_cart_imp-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'stiffness) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'damping) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_cart_imp-request>) istream)
  "Deserializes a message object of type '<set_cart_imp-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'stiffness) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'damping) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_cart_imp-request>)))
  "Returns string type for a service object of type '<set_cart_imp-request>"
  "rokon_commander/set_cart_impRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_cart_imp-request)))
  "Returns string type for a service object of type 'set_cart_imp-request"
  "rokon_commander/set_cart_impRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_cart_imp-request>)))
  "Returns md5sum for a message object of type '<set_cart_imp-request>"
  "bd4dbca8475cfa8e858db7599bb64f48")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_cart_imp-request)))
  "Returns md5sum for a message object of type 'set_cart_imp-request"
  "bd4dbca8475cfa8e858db7599bb64f48")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_cart_imp-request>)))
  "Returns full string definition for message of type '<set_cart_imp-request>"
  (cl:format cl:nil "geometry_msgs/Twist stiffness~%geometry_msgs/Twist damping~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_cart_imp-request)))
  "Returns full string definition for message of type 'set_cart_imp-request"
  (cl:format cl:nil "geometry_msgs/Twist stiffness~%geometry_msgs/Twist damping~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_cart_imp-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'stiffness))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'damping))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_cart_imp-request>))
  "Converts a ROS message object to a list"
  (cl:list 'set_cart_imp-request
    (cl:cons ':stiffness (stiffness msg))
    (cl:cons ':damping (damping msg))
))
;//! \htmlinclude set_cart_imp-response.msg.html

(cl:defclass <set_cart_imp-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass set_cart_imp-response (<set_cart_imp-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_cart_imp-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_cart_imp-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_cart_imp-response> is deprecated: use rokon_commander-srv:set_cart_imp-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_cart_imp-response>) ostream)
  "Serializes a message object of type '<set_cart_imp-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_cart_imp-response>) istream)
  "Deserializes a message object of type '<set_cart_imp-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_cart_imp-response>)))
  "Returns string type for a service object of type '<set_cart_imp-response>"
  "rokon_commander/set_cart_impResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_cart_imp-response)))
  "Returns string type for a service object of type 'set_cart_imp-response"
  "rokon_commander/set_cart_impResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_cart_imp-response>)))
  "Returns md5sum for a message object of type '<set_cart_imp-response>"
  "bd4dbca8475cfa8e858db7599bb64f48")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_cart_imp-response)))
  "Returns md5sum for a message object of type 'set_cart_imp-response"
  "bd4dbca8475cfa8e858db7599bb64f48")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_cart_imp-response>)))
  "Returns full string definition for message of type '<set_cart_imp-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_cart_imp-response)))
  "Returns full string definition for message of type 'set_cart_imp-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_cart_imp-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_cart_imp-response>))
  "Converts a ROS message object to a list"
  (cl:list 'set_cart_imp-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'set_cart_imp)))
  'set_cart_imp-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'set_cart_imp)))
  'set_cart_imp-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_cart_imp)))
  "Returns string type for a service object of type '<set_cart_imp>"
  "rokon_commander/set_cart_imp")