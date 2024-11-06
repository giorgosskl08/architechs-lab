// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Tool Version Limit: 2019.12
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1__HH__
#define __matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1__HH__
#include "matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1.h"

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1 matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U;

    SC_CTOR(matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1):  matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U ("matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U") {
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.clk(clk);
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.rst(reset);
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.ce(ce);
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.in0(din0);
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.in1(din1);
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.in2(din2);
        matrixMultiplication_mac_muladd_8ns_8ns_17ns_18_4_1_DSP48_1_U.dout(dout);

    }

};

#endif //
