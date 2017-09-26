// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv2Dfixp_HH_
#define _conv2Dfixp_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "conv2Dfixp_mac_mubkb.h"

namespace ap_rtl {

struct conv2Dfixp : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > in_V_address0;
    sc_out< sc_logic > in_V_ce0;
    sc_in< sc_lv<16> > in_V_q0;
    sc_out< sc_lv<10> > out_V_address0;
    sc_out< sc_logic > out_V_ce0;
    sc_out< sc_logic > out_V_we0;
    sc_out< sc_lv<16> > out_V_d0;
    sc_in< sc_lv<16> > out_V_q0;
    sc_out< sc_lv<4> > kernel_V_address0;
    sc_out< sc_logic > kernel_V_ce0;
    sc_in< sc_lv<16> > kernel_V_q0;


    // Module declarations
    conv2Dfixp(sc_module_name name);
    SC_HAS_PROCESS(conv2Dfixp);

    ~conv2Dfixp();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    conv2Dfixp_mac_mubkb<1,1,16,16,28,28>* conv2Dfixp_mac_mubkb_U1;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > i_cast_fu_141_p1;
    sc_signal< sc_lv<6> > i_cast_reg_454;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > i_1_fu_151_p2;
    sc_signal< sc_lv<5> > i_1_reg_462;
    sc_signal< sc_lv<11> > tmp_1_fu_181_p2;
    sc_signal< sc_lv<11> > tmp_1_reg_467;
    sc_signal< sc_lv<1> > exitcond1_fu_145_p2;
    sc_signal< sc_lv<6> > j_cast_fu_187_p1;
    sc_signal< sc_lv<6> > j_cast_reg_472;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > j_1_fu_197_p2;
    sc_signal< sc_lv<5> > j_1_reg_480;
    sc_signal< sc_lv<10> > out_V_addr_reg_485;
    sc_signal< sc_lv<1> > exitcond2_fu_191_p2;
    sc_signal< sc_lv<2> > m_1_fu_227_p2;
    sc_signal< sc_lv<2> > m_1_reg_493;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > tmp1_fu_233_p2;
    sc_signal< sc_lv<2> > tmp1_reg_498;
    sc_signal< sc_lv<1> > exitcond3_fu_221_p2;
    sc_signal< sc_lv<9> > tmp_7_cast_fu_291_p1;
    sc_signal< sc_lv<9> > tmp_7_cast_reg_503;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<5> > tmp_3_fu_311_p2;
    sc_signal< sc_lv<5> > tmp_3_reg_508;
    sc_signal< sc_lv<1> > tmp3_fu_317_p2;
    sc_signal< sc_lv<1> > tmp3_reg_513;
    sc_signal< sc_lv<2> > n_1_fu_329_p2;
    sc_signal< sc_lv<2> > n_1_reg_521;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > tmp2_fu_335_p2;
    sc_signal< sc_lv<2> > tmp2_reg_526;
    sc_signal< sc_lv<1> > exitcond_fu_323_p2;
    sc_signal< sc_lv<1> > or_cond2_fu_381_p2;
    sc_signal< sc_lv<1> > or_cond2_reg_531;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > in_V_load_reg_545;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<16> > kernel_V_load_reg_550;
    sc_signal< sc_lv<16> > p_Val2_s_reg_555;
    sc_signal< sc_lv<5> > i_reg_95;
    sc_signal< sc_lv<5> > j_reg_106;
    sc_signal< sc_lv<2> > m_reg_117;
    sc_signal< sc_lv<2> > n_reg_129;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > tmp_5_fu_216_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_399_p1;
    sc_signal< sc_lv<64> > tmp_11_fu_417_p1;
    sc_signal< sc_lv<10> > p_shl_fu_157_p3;
    sc_signal< sc_lv<7> > p_shl9_fu_169_p3;
    sc_signal< sc_lv<11> > p_shl_cast_fu_165_p1;
    sc_signal< sc_lv<11> > p_shl9_cast_fu_177_p1;
    sc_signal< sc_lv<11> > tmp_3_cast_fu_203_p1;
    sc_signal< sc_lv<11> > tmp_4_fu_207_p2;
    sc_signal< sc_lv<32> > tmp_4_cast_fu_212_p1;
    sc_signal< sc_lv<6> > tmp1_cast_fu_245_p1;
    sc_signal< sc_lv<6> > ii_fu_248_p2;
    sc_signal< sc_lv<1> > tmp_fu_253_p3;
    sc_signal< sc_lv<8> > p_shl1_fu_277_p3;
    sc_signal< sc_lv<8> > tmp_6_cast_fu_273_p1;
    sc_signal< sc_lv<8> > tmp_7_fu_285_p2;
    sc_signal< sc_lv<2> > mm_fu_239_p2;
    sc_signal< sc_lv<4> > p_shl2_fu_299_p3;
    sc_signal< sc_lv<5> > p_shl2_cast_fu_307_p1;
    sc_signal< sc_lv<5> > tmp_9_cast5_fu_295_p1;
    sc_signal< sc_lv<1> > tmp_2_fu_267_p2;
    sc_signal< sc_lv<1> > rev_fu_261_p2;
    sc_signal< sc_lv<6> > tmp2_cast_fu_347_p1;
    sc_signal< sc_lv<6> > jj_fu_350_p2;
    sc_signal< sc_lv<1> > tmp_6_fu_355_p3;
    sc_signal< sc_lv<1> > tmp_8_fu_369_p2;
    sc_signal< sc_lv<1> > rev4_fu_363_p2;
    sc_signal< sc_lv<1> > tmp4_fu_375_p2;
    sc_signal< sc_lv<9> > tmp_14_cast_fu_386_p1;
    sc_signal< sc_lv<9> > tmp_9_fu_390_p2;
    sc_signal< sc_lv<32> > tmp_15_cast_fu_395_p1;
    sc_signal< sc_lv<2> > nn_fu_341_p2;
    sc_signal< sc_lv<5> > tmp_17_cast_fu_404_p1;
    sc_signal< sc_lv<5> > tmp_10_fu_408_p2;
    sc_signal< sc_lv<32> > tmp_18_cast_fu_413_p1;
    sc_signal< sc_lv<28> > grp_fu_445_p3;
    sc_signal< sc_lv<28> > grp_fu_445_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<5> ap_const_lv5_1C;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<6> ap_const_lv6_1C;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_1B;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_145_p2();
    void thread_exitcond2_fu_191_p2();
    void thread_exitcond3_fu_221_p2();
    void thread_exitcond_fu_323_p2();
    void thread_grp_fu_445_p2();
    void thread_i_1_fu_151_p2();
    void thread_i_cast_fu_141_p1();
    void thread_ii_fu_248_p2();
    void thread_in_V_address0();
    void thread_in_V_ce0();
    void thread_j_1_fu_197_p2();
    void thread_j_cast_fu_187_p1();
    void thread_jj_fu_350_p2();
    void thread_kernel_V_address0();
    void thread_kernel_V_ce0();
    void thread_m_1_fu_227_p2();
    void thread_mm_fu_239_p2();
    void thread_n_1_fu_329_p2();
    void thread_nn_fu_341_p2();
    void thread_or_cond2_fu_381_p2();
    void thread_out_V_address0();
    void thread_out_V_ce0();
    void thread_out_V_d0();
    void thread_out_V_we0();
    void thread_p_shl1_fu_277_p3();
    void thread_p_shl2_cast_fu_307_p1();
    void thread_p_shl2_fu_299_p3();
    void thread_p_shl9_cast_fu_177_p1();
    void thread_p_shl9_fu_169_p3();
    void thread_p_shl_cast_fu_165_p1();
    void thread_p_shl_fu_157_p3();
    void thread_rev4_fu_363_p2();
    void thread_rev_fu_261_p2();
    void thread_tmp1_cast_fu_245_p1();
    void thread_tmp1_fu_233_p2();
    void thread_tmp2_cast_fu_347_p1();
    void thread_tmp2_fu_335_p2();
    void thread_tmp3_fu_317_p2();
    void thread_tmp4_fu_375_p2();
    void thread_tmp_10_fu_408_p2();
    void thread_tmp_11_fu_417_p1();
    void thread_tmp_14_cast_fu_386_p1();
    void thread_tmp_15_cast_fu_395_p1();
    void thread_tmp_17_cast_fu_404_p1();
    void thread_tmp_18_cast_fu_413_p1();
    void thread_tmp_1_fu_181_p2();
    void thread_tmp_2_fu_267_p2();
    void thread_tmp_3_cast_fu_203_p1();
    void thread_tmp_3_fu_311_p2();
    void thread_tmp_4_cast_fu_212_p1();
    void thread_tmp_4_fu_207_p2();
    void thread_tmp_5_fu_216_p1();
    void thread_tmp_6_cast_fu_273_p1();
    void thread_tmp_6_fu_355_p3();
    void thread_tmp_7_cast_fu_291_p1();
    void thread_tmp_7_fu_285_p2();
    void thread_tmp_8_fu_369_p2();
    void thread_tmp_9_cast5_fu_295_p1();
    void thread_tmp_9_fu_390_p2();
    void thread_tmp_fu_253_p3();
    void thread_tmp_s_fu_399_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif