; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude get_fri_state-request.msg.html

(cl:defclass <get_fri_state-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass get_fri_state-request (<get_fri_state-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <get_fri_state-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'get_fri_state-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<get_fri_state-request> is deprecated: use rokon_commander-srv:get_fri_state-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <get_fri_state-request>) ostream)
  "Serializes a message object of type '<get_fri_state-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <get_fri_state-request>) istream)
  "Deserializes a message object of type '<get_fri_state-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<get_fri_state-request>)))
  "Returns string type for a service object of type '<get_fri_state-request>"
  "rokon_commander/get_fri_stateRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_fri_state-request)))
  "Returns string type for a service object of type 'get_fri_state-request"
  "rokon_commander/get_fri_stateRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<get_fri_state-request>)))
  "Returns md5sum for a message object of type '<get_fri_state-request>"
  "7a2f37ef2ba405f0c7a15cc72663d6f0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'get_fri_state-request)))
  "Returns md5sum for a message object of type 'get_fri_state-request"
  "7a2f37ef2ba405f0c7a15cc72663d6f0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<get_fri_state-request>)))
  "Returns full string definition for message of type '<get_fri_state-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'get_fri_state-request)))
  "Returns full string definition for message of type 'get_fri_state-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <get_fri_state-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <get_fri_state-request>))
  "Converts a ROS message object to a list"
  (cl:list 'get_fri_state-request
))
;//! \htmlinclude get_fri_state-response.msg.html

(cl:defclass <get_fri_state-response> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type cl:integer
    :initform 0))
)

(cl:defclass get_fri_state-response (<get_fri_state-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <get_fri_state-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'get_fri_state-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<get_fri_state-response> is deprecated: use rokon_commander-srv:get_fri_state-response instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <get_fri_state-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:state-val is deprecated.  Use rokon_commander-srv:state instead.")
  (state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <get_fri_state-response>) ostream)
  "Serializes a message object of type '<get_fri_state-response>"
  (cl:let* ((signed (cl:slot-value msg 'state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <get_fri_state-response>) istream)
  "Deserializes a message object of type '<get_fri_state-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<get_fri_state-response>)))
  "Returns string type for a service object of type '<get_fri_state-response>"
  "rokon_commander/get_fri_stateResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_fri_state-response)))
  "Returns string type for a service object of type 'get_fri_state-response"
  "rokon_commander/get_fri_stateResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<get_fri_state-response>)))
  "Returns md5sum for a message object of type '<get_fri_state-response>"
  "7a2f37ef2ba405f0c7a15cc72663d6f0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'get_fri_state-response)))
  "Returns md5sum for a message object of type 'get_fri_state-response"
  "7a2f37ef2ba405f0c7a15cc72663d6f0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<get_fri_state-response>)))
  "Returns full string definition for message of type '<get_fri_state-response>"
  (cl:format cl:nil "int32 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'get_fri_state-response)))
  "Returns full string definition for message of type 'get_fri_state-response"
  (cl:format cl:nil "int32 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <get_fri_state-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <get_fri_state-response>))
  "Converts a ROS message object to a list"
  (cl:list 'get_fri_state-response
    (cl:cons ':state (state msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'get_fri_state)))
  'get_fri_state-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'get_fri_state)))
  'get_fri_state-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_fri_state)))
  "Returns string type for a service object of type '<get_fri_state>"
  "rokon_commander/get_fri_state")