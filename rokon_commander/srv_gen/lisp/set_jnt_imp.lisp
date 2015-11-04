; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude set_jnt_imp-request.msg.html

(cl:defclass <set_jnt_imp-request> (roslisp-msg-protocol:ros-message)
  ((stiffness
    :reader stiffness
    :initarg :stiffness
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (damping
    :reader damping
    :initarg :damping
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass set_jnt_imp-request (<set_jnt_imp-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_jnt_imp-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_jnt_imp-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_jnt_imp-request> is deprecated: use rokon_commander-srv:set_jnt_imp-request instead.")))

(cl:ensure-generic-function 'stiffness-val :lambda-list '(m))
(cl:defmethod stiffness-val ((m <set_jnt_imp-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:stiffness-val is deprecated.  Use rokon_commander-srv:stiffness instead.")
  (stiffness m))

(cl:ensure-generic-function 'damping-val :lambda-list '(m))
(cl:defmethod damping-val ((m <set_jnt_imp-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:damping-val is deprecated.  Use rokon_commander-srv:damping instead.")
  (damping m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_jnt_imp-request>) ostream)
  "Serializes a message object of type '<set_jnt_imp-request>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'stiffness))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'damping))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_jnt_imp-request>) istream)
  "Deserializes a message object of type '<set_jnt_imp-request>"
  (cl:setf (cl:slot-value msg 'stiffness) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'stiffness)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'damping) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'damping)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_jnt_imp-request>)))
  "Returns string type for a service object of type '<set_jnt_imp-request>"
  "rokon_commander/set_jnt_impRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_jnt_imp-request)))
  "Returns string type for a service object of type 'set_jnt_imp-request"
  "rokon_commander/set_jnt_impRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_jnt_imp-request>)))
  "Returns md5sum for a message object of type '<set_jnt_imp-request>"
  "0d99cffe99f4e45e313ffa6bb7c0de4e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_jnt_imp-request)))
  "Returns md5sum for a message object of type 'set_jnt_imp-request"
  "0d99cffe99f4e45e313ffa6bb7c0de4e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_jnt_imp-request>)))
  "Returns full string definition for message of type '<set_jnt_imp-request>"
  (cl:format cl:nil "float32[7] stiffness~%float32[7] damping~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_jnt_imp-request)))
  "Returns full string definition for message of type 'set_jnt_imp-request"
  (cl:format cl:nil "float32[7] stiffness~%float32[7] damping~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_jnt_imp-request>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'stiffness) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'damping) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_jnt_imp-request>))
  "Converts a ROS message object to a list"
  (cl:list 'set_jnt_imp-request
    (cl:cons ':stiffness (stiffness msg))
    (cl:cons ':damping (damping msg))
))
;//! \htmlinclude set_jnt_imp-response.msg.html

(cl:defclass <set_jnt_imp-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass set_jnt_imp-response (<set_jnt_imp-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <set_jnt_imp-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'set_jnt_imp-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<set_jnt_imp-response> is deprecated: use rokon_commander-srv:set_jnt_imp-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <set_jnt_imp-response>) ostream)
  "Serializes a message object of type '<set_jnt_imp-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <set_jnt_imp-response>) istream)
  "Deserializes a message object of type '<set_jnt_imp-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<set_jnt_imp-response>)))
  "Returns string type for a service object of type '<set_jnt_imp-response>"
  "rokon_commander/set_jnt_impResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_jnt_imp-response)))
  "Returns string type for a service object of type 'set_jnt_imp-response"
  "rokon_commander/set_jnt_impResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<set_jnt_imp-response>)))
  "Returns md5sum for a message object of type '<set_jnt_imp-response>"
  "0d99cffe99f4e45e313ffa6bb7c0de4e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'set_jnt_imp-response)))
  "Returns md5sum for a message object of type 'set_jnt_imp-response"
  "0d99cffe99f4e45e313ffa6bb7c0de4e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<set_jnt_imp-response>)))
  "Returns full string definition for message of type '<set_jnt_imp-response>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'set_jnt_imp-response)))
  "Returns full string definition for message of type 'set_jnt_imp-response"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <set_jnt_imp-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <set_jnt_imp-response>))
  "Converts a ROS message object to a list"
  (cl:list 'set_jnt_imp-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'set_jnt_imp)))
  'set_jnt_imp-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'set_jnt_imp)))
  'set_jnt_imp-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'set_jnt_imp)))
  "Returns string type for a service object of type '<set_jnt_imp>"
  "rokon_commander/set_jnt_imp")