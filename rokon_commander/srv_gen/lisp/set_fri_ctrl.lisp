; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude set_fri_ctrl-request.msg.html

(cl:defclass <set_fri_ctrl-request> (roslisp-msg-protocol:ros-message)
  ((control
    :reader control
    :initarg :control
    :type cl:integer
    :initform 0)
   (state
    :reader state
    :initarg :state
    :type cl:integer
    :initform 0))
)

(cl:defclass set_fri_ctrl-request (<set_fri_ctrl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_fri_ctrl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_fri_ctrl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_fri_ctrl-request> is deprecated: use rokon_commander-srv:set_fri_ctrl-request instead.")))

(cl:ensure-generic-function 'control-val :lambda-list '(m))
(cl:defmethod control-val ((m <set_fri_ctrl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:control-val is deprecated.  Use rokon_commander-srv:control instead.")
  (control m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <set_fri_ctrl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:state-val is deprecated.  Use rokon_commander-srv:state instead.")
  (state m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_fri_ctrl-request>) ostream)
  "Serializes a message object of type '<set_fri_ctrl-request>"
  (cl:let* ((signed (cl:slot-value msg 'control)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_fri_ctrl-request>) istream)
  "Deserializes a message object of type '<set_fri_ctrl-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'control) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_fri_ctrl-request>)))
  "Returns string type for a service object of type '<set_fri_ctrl-request>"
  "rokon_commander/set_fri_ctrlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_fri_ctrl-request)))
  "Returns string type for a service object of type 'set_fri_ctrl-request"
  "rokon_commander/set_fri_ctrlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_fri_ctrl-request>)))
  "Returns md5sum for a message object of type '<set_fri_ctrl-request>"
  "28a38212731352dea0370030fb0ae681")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_fri_ctrl-request)))
  "Returns md5sum for a message object of type 'set_fri_ctrl-request"
  "28a38212731352dea0370030fb0ae681")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_fri_ctrl-request>)))
  "Returns full string definition for message of type '<set_fri_ctrl-request>"
  (cl:format cl:nil "int32 control~%int32 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_fri_ctrl-request)))
  "Returns full string definition for message of type 'set_fri_ctrl-request"
  (cl:format cl:nil "int32 control~%int32 state~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_fri_ctrl-request>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_fri_ctrl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'set_fri_ctrl-request
    (cl:cons ':control (control msg))
    (cl:cons ':state (state msg))
))
;//! \htmlinclude set_fri_ctrl-response.msg.html

(cl:defclass <set_fri_ctrl-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass set_fri_ctrl-response (<set_fri_ctrl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_fri_ctrl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_fri_ctrl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_fri_ctrl-response> is deprecated: use rokon_commander-srv:set_fri_ctrl-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_fri_ctrl-response>) ostream)
  "Serializes a message object of type '<set_fri_ctrl-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_fri_ctrl-response>) istream)
  "Deserializes a message object of type '<set_fri_ctrl-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_fri_ctrl-response>)))
  "Returns string type for a service object of type '<set_fri_ctrl-response>"
  "rokon_commander/set_fri_ctrlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_fri_ctrl-response)))
  "Returns string type for a service object of type 'set_fri_ctrl-response"
  "rokon_commander/set_fri_ctrlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_fri_ctrl-response>)))
  "Returns md5sum for a message object of type '<set_fri_ctrl-response>"
  "28a38212731352dea0370030fb0ae681")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_fri_ctrl-response)))
  "Returns md5sum for a message object of type 'set_fri_ctrl-response"
  "28a38212731352dea0370030fb0ae681")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_fri_ctrl-response>)))
  "Returns full string definition for message of type '<set_fri_ctrl-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_fri_ctrl-response)))
  "Returns full string definition for message of type 'set_fri_ctrl-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_fri_ctrl-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_fri_ctrl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'set_fri_ctrl-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'set_fri_ctrl)))
  'set_fri_ctrl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'set_fri_ctrl)))
  'set_fri_ctrl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_fri_ctrl)))
  "Returns string type for a service object of type '<set_fri_ctrl>"
  "rokon_commander/set_fri_ctrl")