
log_wave [get_objects -filter {type == in_port || type == out_port || type == inout_port || type == port} /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/*]
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set return_group [add_wave_group return(memory) -into $coutputgroup]
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/AB_d0 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/AB_we0 -into $return_group -color #ffff00 -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/AB_ce0 -into $return_group -color #ffff00 -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/AB_address0 -into $return_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set return_group [add_wave_group return(memory) -into $cinputgroup]
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/B_q1 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/B_ce1 -into $return_group -color #ffff00 -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/B_address1 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/B_q0 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/B_ce0 -into $return_group -color #ffff00 -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/B_address0 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/A_q1 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/A_ce1 -into $return_group -color #ffff00 -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/A_address1 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/A_q0 -into $return_group -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/A_ce0 -into $return_group -color #ffff00 -radix hex
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/A_address0 -into $return_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/ap_start -into $blocksiggroup
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/ap_done -into $blocksiggroup
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/ap_idle -into $blocksiggroup
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_matrixMultiplication_top/AESL_inst_matrixMultiplication/ap_clk -into $clockgroup
save_wave_config matrixMultiplication.wcfg
run all
quit

