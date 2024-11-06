############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Lab1
set_top matrixMultiplication
add_files MATRIX_MULT.c
add_files -tb tb_MATRIX_MULT.c
open_solution "solution1" -flow_target vivado
set_part {xcu200-fsgd2104-2-e}
create_clock -period 10 -name default
source "./Lab1/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
