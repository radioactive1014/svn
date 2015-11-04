FILE(REMOVE_RECURSE
  "srv_gen"
  "srv_gen"
  "src/KUKACommander/srv"
  "CMakeFiles/ROSBUILD_gensrv_cpp"
  "srv_gen/cpp/include/KUKACommander/set_cart_imp.h"
  "srv_gen/cpp/include/KUKACommander/set_cart_wrench.h"
  "srv_gen/cpp/include/KUKACommander/set_jnt_imp.h"
  "srv_gen/cpp/include/KUKACommander/move_to_cart_pos.h"
  "srv_gen/cpp/include/KUKACommander/get_fri_state.h"
  "srv_gen/cpp/include/KUKACommander/get_fri_ctrl.h"
  "srv_gen/cpp/include/KUKACommander/joint_ptp_motion.h"
  "srv_gen/cpp/include/KUKACommander/move_to_jnt_pos.h"
  "srv_gen/cpp/include/KUKACommander/set_jnt_torques.h"
  "srv_gen/cpp/include/KUKACommander/cart_lin_motion.h"
  "srv_gen/cpp/include/KUKACommander/cart_ptp_motion.h"
  "srv_gen/cpp/include/KUKACommander/set_fri_ctrl.h"
  "srv_gen/cpp/include/KUKACommander/get_bool.h"
  "srv_gen/cpp/include/KUKACommander/set_bool.h"
  "srv_gen/cpp/include/KUKACommander/get_quat_from_rpy.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
