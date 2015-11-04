FILE(REMOVE_RECURSE
  "srv_gen"
  "srv_gen"
  "src/KUKACommander/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "src/KUKACommander/srv/__init__.py"
  "src/KUKACommander/srv/_set_cart_imp.py"
  "src/KUKACommander/srv/_set_cart_wrench.py"
  "src/KUKACommander/srv/_set_jnt_imp.py"
  "src/KUKACommander/srv/_move_to_cart_pos.py"
  "src/KUKACommander/srv/_get_fri_state.py"
  "src/KUKACommander/srv/_get_fri_ctrl.py"
  "src/KUKACommander/srv/_joint_ptp_motion.py"
  "src/KUKACommander/srv/_move_to_jnt_pos.py"
  "src/KUKACommander/srv/_set_jnt_torques.py"
  "src/KUKACommander/srv/_cart_lin_motion.py"
  "src/KUKACommander/srv/_cart_ptp_motion.py"
  "src/KUKACommander/srv/_set_fri_ctrl.py"
  "src/KUKACommander/srv/_get_bool.py"
  "src/KUKACommander/srv/_set_bool.py"
  "src/KUKACommander/srv/_get_quat_from_rpy.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
