; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude set_jnt_torques-request.msg.html

(cl:defclass <set_jnt_torques-request> (roslisp-msg-protocol:ros-message)
  ((torques
    :reader torques
    :initarg :torques
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass set_jnt_torques-request (<set_jnt_torques-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_jnt_torques-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_jnt_torques-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_jnt_torques-request> is deprecated: use rokon_commander-srv:set_jnt_torques-request instead.")))

(cl:ensure-generic-function 'torques-val :lambda-list '(m))
(cl:defmethod torques-val ((m <set_jnt_torques-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:torques-val is deprecated.  Use rokon_commander-srv:torques instead.")
  (torques m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_jnt_torques-request>) ostream)
  "Serializes a message object of type '<set_jnt_torques-request>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'torques))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_jnt_torques-request>) istream)
  "Deserializes a message object of type '<set_jnt_torques-request>"
  (cl:setf (cl:slot-value msg 'torques) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'torques)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_jnt_torques-request>)))
  "Returns string type for a service object of type '<set_jnt_torques-request>"
  "rokon_commander/set_jnt_torquesRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_jnt_torques-request)))
  "Returns string type for a service object of type 'set_jnt_torques-request"
  "rokon_commander/set_jnt_torquesRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_jnt_torques-request>)))
  "Returns md5sum for a message object of type '<set_jnt_torques-request>"
  "c2feced015a891aeb6180725860b2934")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_jnt_torques-request)))
  "Returns md5sum for a message object of type 'set_jnt_torques-request"
  "c2feced015a891aeb6180725860b2934")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_jnt_torques-request>)))
  "Returns full string definition for message of type '<set_jnt_torques-request>"
  (cl:format cl:nil "float64[7] torques~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_jnt_torques-request)))
  "Returns full string definition for message of type 'set_jnt_torques-request"
  (cl:format cl:nil "float64[7] torques~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_jnt_torques-request>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'torques) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_jnt_torques-request>))
  "Converts a ROS message object to a list"
  (cl:list 'set_jnt_torques-request
    (cl:cons ':torques (torques msg))
))
;//! \htmlinclude set_jnt_torques-response.msg.html

(cl:defclass <set_jnt_torques-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass set_jnt_torques-response (<set_jnt_torques-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_jnt_torques-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_jnt_torques-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_jnt_torques-response> is deprecated: use rokon_commander-srv:set_jnt_torques-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_jnt_torques-response>) ostream)
  "Serializes a message object of type '<set_jnt_torques-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_jnt_torques-response>) istream)
  "Deserializes a message object of type '<set_jnt_torques-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_jnt_torques-response>)))
  "Returns string type for a service object of type '<set_jnt_torques-response>"
  "rokon_commander/set_jnt_torquesResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_jnt_torques-response)))
  "Returns string type for a service object of type 'set_jnt_torques-response"
  "rokon_commander/set_jnt_torquesResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_jnt_torques-response>)))
  "Returns md5sum for a message object of type '<set_jnt_torques-response>"
  "c2feced015a891aeb6180725860b2934")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_jnt_torques-response)))
  "Returns md5sum for a message object of type 'set_jnt_torques-response"
  "c2feced015a891aeb6180725860b2934")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_jnt_torques-response>)))
  "Returns full string definition for message of type '<set_jnt_torques-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_jnt_torques-response)))
  "Returns full string definition for message of type 'set_jnt_torques-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_jnt_torques-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_jnt_torques-response>))
  "Converts a ROS message object to a list"
  (cl:list 'set_jnt_torques-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'set_jnt_torques)))
  'set_jnt_torques-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'set_jnt_torques)))
  'set_jnt_torques-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_jnt_torques)))
  "Returns string type for a service object of type '<set_jnt_torques>"
  "rokon_commander/set_jnt_torques")