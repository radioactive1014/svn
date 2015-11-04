; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude check_position-request.msg.html

(cl:defclass <check_position-request> (roslisp-msg-protocol:ros-message)
  ((check
    :reader check
    :initarg :check
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass check_position-request (<check_position-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <check_position-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'check_position-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<check_position-request> is deprecated: use rokon_commander-srv:check_position-request instead.")))

(cl:ensure-generic-function 'check-val :lambda-list '(m))
(cl:defmethod check-val ((m <check_position-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:check-val is deprecated.  Use rokon_commander-srv:check instead.")
  (check m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <check_position-request>) ostream)
  "Serializes a message object of type '<check_position-request>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'check))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <check_position-request>) istream)
  "Deserializes a message object of type '<check_position-request>"
  (cl:setf (cl:slot-value msg 'check) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'check)))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<check_position-request>)))
  "Returns string type for a service object of type '<check_position-request>"
  "rokon_commander/check_positionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'check_position-request)))
  "Returns string type for a service object of type 'check_position-request"
  "rokon_commander/check_positionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<check_position-request>)))
  "Returns md5sum for a message object of type '<check_position-request>"
  "02f0fdb42b1c4bc12d4c1b2c9acdec60")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'check_position-request)))
  "Returns md5sum for a message object of type 'check_position-request"
  "02f0fdb42b1c4bc12d4c1b2c9acdec60")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<check_position-request>)))
  "Returns full string definition for message of type '<check_position-request>"
  (cl:format cl:nil "float64[7] check~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'check_position-request)))
  "Returns full string definition for message of type 'check_position-request"
  (cl:format cl:nil "float64[7] check~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <check_position-request>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'check) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <check_position-request>))
  "Converts a ROS message object to a list"
  (cl:list 'check_position-request
    (cl:cons ':check (check msg))
))
;//! \htmlinclude check_position-response.msg.html

(cl:defclass <check_position-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass check_position-response (<check_position-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <check_position-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'check_position-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<check_position-response> is deprecated: use rokon_commander-srv:check_position-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <check_position-response>) ostream)
  "Serializes a message object of type '<check_position-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <check_position-response>) istream)
  "Deserializes a message object of type '<check_position-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<check_position-response>)))
  "Returns string type for a service object of type '<check_position-response>"
  "rokon_commander/check_positionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'check_position-response)))
  "Returns string type for a service object of type 'check_position-response"
  "rokon_commander/check_positionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<check_position-response>)))
  "Returns md5sum for a message object of type '<check_position-response>"
  "02f0fdb42b1c4bc12d4c1b2c9acdec60")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'check_position-response)))
  "Returns md5sum for a message object of type 'check_position-response"
  "02f0fdb42b1c4bc12d4c1b2c9acdec60")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<check_position-response>)))
  "Returns full string definition for message of type '<check_position-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'check_position-response)))
  "Returns full string definition for message of type 'check_position-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <check_position-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <check_position-response>))
  "Converts a ROS message object to a list"
  (cl:list 'check_position-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'check_position)))
  'check_position-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'check_position)))
  'check_position-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'check_position)))
  "Returns string type for a service object of type '<check_position>"
  "rokon_commander/check_position")