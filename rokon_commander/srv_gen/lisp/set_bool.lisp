; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude set_bool-request.msg.html

(cl:defclass <set_bool-request> (roslisp-msg-protocol:ros-message)
  ((activate
    :reader activate
    :initarg :activate
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass set_bool-request (<set_bool-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_bool-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_bool-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_bool-request> is deprecated: use rokon_commander-srv:set_bool-request instead.")))

(cl:ensure-generic-function 'activate-val :lambda-list '(m))
(cl:defmethod activate-val ((m <set_bool-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:activate-val is deprecated.  Use rokon_commander-srv:activate instead.")
  (activate m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_bool-request>) ostream)
  "Serializes a message object of type '<set_bool-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'activate) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_bool-request>) istream)
  "Deserializes a message object of type '<set_bool-request>"
    (cl:setf (cl:slot-value msg 'activate) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_bool-request>)))
  "Returns string type for a service object of type '<set_bool-request>"
  "rokon_commander/set_boolRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_bool-request)))
  "Returns string type for a service object of type 'set_bool-request"
  "rokon_commander/set_boolRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_bool-request>)))
  "Returns md5sum for a message object of type '<set_bool-request>"
  "b15627a984ebdd591b2ee87ce75c4d06")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_bool-request)))
  "Returns md5sum for a message object of type 'set_bool-request"
  "b15627a984ebdd591b2ee87ce75c4d06")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_bool-request>)))
  "Returns full string definition for message of type '<set_bool-request>"
  (cl:format cl:nil "bool activate~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_bool-request)))
  "Returns full string definition for message of type 'set_bool-request"
  (cl:format cl:nil "bool activate~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_bool-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_bool-request>))
  "Converts a ROS message object to a list"
  (cl:list 'set_bool-request
    (cl:cons ':activate (activate msg))
))
;//! \htmlinclude set_bool-response.msg.html

(cl:defclass <set_bool-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass set_bool-response (<set_bool-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_bool-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_bool-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_bool-response> is deprecated: use rokon_commander-srv:set_bool-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_bool-response>) ostream)
  "Serializes a message object of type '<set_bool-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_bool-response>) istream)
  "Deserializes a message object of type '<set_bool-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_bool-response>)))
  "Returns string type for a service object of type '<set_bool-response>"
  "rokon_commander/set_boolResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_bool-response)))
  "Returns string type for a service object of type 'set_bool-response"
  "rokon_commander/set_boolResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_bool-response>)))
  "Returns md5sum for a message object of type '<set_bool-response>"
  "b15627a984ebdd591b2ee87ce75c4d06")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_bool-response)))
  "Returns md5sum for a message object of type 'set_bool-response"
  "b15627a984ebdd591b2ee87ce75c4d06")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_bool-response>)))
  "Returns full string definition for message of type '<set_bool-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_bool-response)))
  "Returns full string definition for message of type 'set_bool-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_bool-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_bool-response>))
  "Converts a ROS message object to a list"
  (cl:list 'set_bool-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'set_bool)))
  'set_bool-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'set_bool)))
  'set_bool-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_bool)))
  "Returns string type for a service object of type '<set_bool>"
  "rokon_commander/set_bool")