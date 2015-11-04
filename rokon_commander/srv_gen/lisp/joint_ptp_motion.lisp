; Auto-generated. Do not edit!


(cl:in-package rokon_commander-srv)


;//! \htmlinclude joint_ptp_motion-request.msg.html

(cl:defclass <joint_ptp_motion-request> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (speed
    :reader speed
    :initarg :speed
    :type cl:fixnum
    :initform 0))
)

(cl:defclass joint_ptp_motion-request (<joint_ptp_motion-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <joint_ptp_motion-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'joint_ptp_motion-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<joint_ptp_motion-request> is deprecated: use rokon_commander-srv:joint_ptp_motion-request instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <joint_ptp_motion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:position-val is deprecated.  Use rokon_commander-srv:position instead.")
  (position m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <joint_ptp_motion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:speed-val is deprecated.  Use rokon_commander-srv:speed instead.")
  (speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <joint_ptp_motion-request>) ostream)
  "Serializes a message object of type '<joint_ptp_motion-request>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'position))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'speed)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <joint_ptp_motion-request>) istream)
  "Deserializes a message object of type '<joint_ptp_motion-request>"
  (cl:setf (cl:slot-value msg 'position) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'position)))
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
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'speed)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<joint_ptp_motion-request>)))
  "Returns string type for a service object of type '<joint_ptp_motion-request>"
  "rokon_commander/joint_ptp_motionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'joint_ptp_motion-request)))
  "Returns string type for a service object of type 'joint_ptp_motion-request"
  "rokon_commander/joint_ptp_motionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<joint_ptp_motion-request>)))
  "Returns md5sum for a message object of type '<joint_ptp_motion-request>"
  "8fb151c8b876c4960080e4453e230950")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'joint_ptp_motion-request)))
  "Returns md5sum for a message object of type 'joint_ptp_motion-request"
  "8fb151c8b876c4960080e4453e230950")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<joint_ptp_motion-request>)))
  "Returns full string definition for message of type '<joint_ptp_motion-request>"
  (cl:format cl:nil "float64[7] position~%uint8 speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'joint_ptp_motion-request)))
  "Returns full string definition for message of type 'joint_ptp_motion-request"
  (cl:format cl:nil "float64[7] position~%uint8 speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <joint_ptp_motion-request>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'position) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <joint_ptp_motion-request>))
  "Converts a ROS message object to a list"
  (cl:list 'joint_ptp_motion-request
    (cl:cons ':position (position msg))
    (cl:cons ':speed (speed msg))
))
;//! \htmlinclude joint_ptp_motion-response.msg.html

(cl:defclass <joint_ptp_motion-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass joint_ptp_motion-response (<joint_ptp_motion-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <joint_ptp_motion-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'joint_ptp_motion-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rokon_commander-srv:<joint_ptp_motion-response> is deprecated: use rokon_commander-srv:joint_ptp_motion-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <joint_ptp_motion-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rokon_commander-srv:success-val is deprecated.  Use rokon_commander-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <joint_ptp_motion-response>) ostream)
  "Serializes a message object of type '<joint_ptp_motion-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <joint_ptp_motion-response>) istream)
  "Deserializes a message object of type '<joint_ptp_motion-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<joint_ptp_motion-response>)))
  "Returns string type for a service object of type '<joint_ptp_motion-response>"
  "rokon_commander/joint_ptp_motionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'joint_ptp_motion-response)))
  "Returns string type for a service object of type 'joint_ptp_motion-response"
  "rokon_commander/joint_ptp_motionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<joint_ptp_motion-response>)))
  "Returns md5sum for a message object of type '<joint_ptp_motion-response>"
  "8fb151c8b876c4960080e4453e230950")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'joint_ptp_motion-response)))
  "Returns md5sum for a message object of type 'joint_ptp_motion-response"
  "8fb151c8b876c4960080e4453e230950")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<joint_ptp_motion-response>)))
  "Returns full string definition for message of type '<joint_ptp_motion-response>"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'joint_ptp_motion-response)))
  "Returns full string definition for message of type 'joint_ptp_motion-response"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <joint_ptp_motion-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <joint_ptp_motion-response>))
  "Converts a ROS message object to a list"
  (cl:list 'joint_ptp_motion-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'joint_ptp_motion)))
  'joint_ptp_motion-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'joint_ptp_motion)))
  'joint_ptp_motion-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'joint_ptp_motion)))
  "Returns string type for a service object of type '<joint_ptp_motion>"
  "rokon_commander/joint_ptp_motion")