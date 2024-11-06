set SynModuleInfo {
  {SRCNAME matrixMultiplication MODELNAME matrixMultiplication RTLNAME matrixMultiplication IS_TOP 1
    SUBMODULES {
      {MODELNAME matrixMultiplication_mul_8ns_8ns_16_1_1 RTLNAME matrixMultiplication_mul_8ns_8ns_16_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME matrixMultiplication_mac_muladd_8ns_8ns_16ns_17_4_1 RTLNAME matrixMultiplication_mac_muladd_8ns_8ns_16ns_17_4_1 BINDTYPE op TYPE all IMPL dsp48 LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1 RTLNAME matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1 BINDTYPE op TYPE all IMPL dsp48 LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME matrixMultiplication_flow_control_loop_pipe RTLNAME matrixMultiplication_flow_control_loop_pipe BINDTYPE interface TYPE internal_upc_flow_control INSTNAME matrixMultiplication_flow_control_loop_pipe_U}
    }
  }
}
