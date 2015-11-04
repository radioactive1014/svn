; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude get_fri_ctrl-request.msg.html

(cl:defclass <get_fri_ctrl-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass get_fri_ctrl-request (<get_fri_ctrl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <get_fri_ctrl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'get_fri_ctrl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<get_fri_ctrl-request> is deprecated: use rokon_commander-srv:get_fri_ctrl-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <get_fri_ctrl-request>) ostream)
  "Serializes a message object of type '<get_fri_ctrl-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <get_fri_ctrl-request>) istream)
  "Deserializes a message object of type '<get_fri_ctrl-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<get_fri_ctrl-request>)))
  "Returns string type for a service object of type '<get_fri_ctrl-request>"
  "rokon_commander/get_fri_ctrlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_fri_ctrl-request)))
  "Returns string type for a service object of type 'get_fri_ctrl-request"
  "rokon_commander/get_fri_ctrlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<get_fri_ctrl-request>)))
  "Returns md5sum for a message object of type '<get_fri_ctrl-request>"
  "752a7f29a25507b46ad2ec5188eb7e10")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'get_fri_ctrl-request)))
  "Returns md5sum for a message object of type 'get_fri_ctrl-request"
  "752a7f29a25507b46ad2ec5188eb7e10")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<get_fri_ctrl-request>)))
  "Returns full string definition for message of type '<get_fri_ctrl-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'get_fri_ctrl-request)))
  "Returns full string definition for message of type 'get_fri_ctrl-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <get_fri_ctrl-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <get_fri_ctrl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'get_fri_ctrl-request
))
;//! \htmlinclude get_fri_ctrl-response.msg.html

(cl:defclass <get_fri_ctrl-response> (roslisp-msg-protocol:ros-message)
  ((control
    :reader control
    :initarg :control
    :type cl:integer
    :initform 0))
)

(cl:defclass get_fri_ctrl-response (<get_fri_ctrl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <get_fri_ctrl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'get_fri_ctrl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<get_fri_ctrl-response> is deprecated: use rokon_commander-srv:get_fri_ctrl-response instead.")))

(cl:ensure-generic-function 'control-val :lambda-list '(m))
(cl:defmethod control-val ((m <get_fri_ctrl-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:control-val is deprecated.  Use rokon_commander-srv:control instead.")
  (control m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <get_fri_ctrl-response>) ostream)
  "Serializes a message object of type '<get_fri_ctrl-response>"
  (cl:let* ((signed (cl:slot-value msg 'control)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <get_fri_ctrl-response>) istream)
  "Deserializes a message object of type '<get_fri_ctrl-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'control) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<get_fri_ctrl-response>)))
  "Returns string type for a service object of type '<get_fri_ctrl-response>"
  "rokon_commander/get_fri_ctrlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_fri_ctrl-response)))
  "Returns string type for a service object of type 'get_fri_ctrl-response"
  "rokon_commander/get_fri_ctrlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<get_fri_ctrl-response>)))
  "Returns md5sum for a message object of type '<get_fri_ctrl-response>"
  "752a7f29a25507b46ad2ec5188eb7e10")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'get_fri_ctrl-response)))
  "Returns md5sum for a message object of type 'get_fri_ctrl-response"
  "752a7f29a25507b46ad2ec5188eb7e10")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<get_fri_ctrl-response>)))
  "Returns full string definition for message of type '<get_fri_ctrl-response>"
  (cl:format cl:nil "int32 control~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'get_fri_ctrl-response)))
  "Returns full string definition for message of type 'get_fri_ctrl-response"
  (cl:format cl:nil "int32 control~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <get_fri_ctrl-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <get_fri_ctrl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'get_fri_ctrl-response
    (cl:cons ':control (control msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'get_fri_ctrl)))
  'get_fri_ctrl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'get_fri_ctrl)))
  'get_fri_ctrl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'get_fri_ctrl)))
  "Returns string type for a service object of type '<get_fri_ctrl>"
  "rokon_commander/get_fri_ctrl")