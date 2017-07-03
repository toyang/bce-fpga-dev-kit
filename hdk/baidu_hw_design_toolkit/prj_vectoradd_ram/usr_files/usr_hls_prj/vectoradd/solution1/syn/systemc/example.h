// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _example_HH_
#define _example_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "example_fadd_32nsbkb.h"
#include "example_buff_a.h"
#include "example_a_V_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_A_V_ADDR_WIDTH = 64,
         unsigned int C_M_AXI_A_V_ID_WIDTH = 1,
         unsigned int C_M_AXI_A_V_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_A_V_DATA_WIDTH = 256,
         unsigned int C_M_AXI_A_V_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_A_V_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_A_V_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_A_V_BUSER_WIDTH = 1>
struct example : public sc_module {
    // Port declarations 59
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > m_axi_a_V_AWVALID;
    sc_in< sc_logic > m_axi_a_V_AWREADY;
    sc_out< sc_uint<C_M_AXI_A_V_ADDR_WIDTH> > m_axi_a_V_AWADDR;
    sc_out< sc_uint<C_M_AXI_A_V_ID_WIDTH> > m_axi_a_V_AWID;
    sc_out< sc_lv<8> > m_axi_a_V_AWLEN;
    sc_out< sc_lv<3> > m_axi_a_V_AWSIZE;
    sc_out< sc_lv<2> > m_axi_a_V_AWBURST;
    sc_out< sc_lv<2> > m_axi_a_V_AWLOCK;
    sc_out< sc_lv<4> > m_axi_a_V_AWCACHE;
    sc_out< sc_lv<3> > m_axi_a_V_AWPROT;
    sc_out< sc_lv<4> > m_axi_a_V_AWQOS;
    sc_out< sc_lv<4> > m_axi_a_V_AWREGION;
    sc_out< sc_uint<C_M_AXI_A_V_AWUSER_WIDTH> > m_axi_a_V_AWUSER;
    sc_out< sc_logic > m_axi_a_V_WVALID;
    sc_in< sc_logic > m_axi_a_V_WREADY;
    sc_out< sc_uint<C_M_AXI_A_V_DATA_WIDTH> > m_axi_a_V_WDATA;
    sc_out< sc_uint<C_M_AXI_A_V_DATA_WIDTH/8> > m_axi_a_V_WSTRB;
    sc_out< sc_logic > m_axi_a_V_WLAST;
    sc_out< sc_uint<C_M_AXI_A_V_ID_WIDTH> > m_axi_a_V_WID;
    sc_out< sc_uint<C_M_AXI_A_V_WUSER_WIDTH> > m_axi_a_V_WUSER;
    sc_out< sc_logic > m_axi_a_V_ARVALID;
    sc_in< sc_logic > m_axi_a_V_ARREADY;
    sc_out< sc_uint<C_M_AXI_A_V_ADDR_WIDTH> > m_axi_a_V_ARADDR;
    sc_out< sc_uint<C_M_AXI_A_V_ID_WIDTH> > m_axi_a_V_ARID;
    sc_out< sc_lv<8> > m_axi_a_V_ARLEN;
    sc_out< sc_lv<3> > m_axi_a_V_ARSIZE;
    sc_out< sc_lv<2> > m_axi_a_V_ARBURST;
    sc_out< sc_lv<2> > m_axi_a_V_ARLOCK;
    sc_out< sc_lv<4> > m_axi_a_V_ARCACHE;
    sc_out< sc_lv<3> > m_axi_a_V_ARPROT;
    sc_out< sc_lv<4> > m_axi_a_V_ARQOS;
    sc_out< sc_lv<4> > m_axi_a_V_ARREGION;
    sc_out< sc_uint<C_M_AXI_A_V_ARUSER_WIDTH> > m_axi_a_V_ARUSER;
    sc_in< sc_logic > m_axi_a_V_RVALID;
    sc_out< sc_logic > m_axi_a_V_RREADY;
    sc_in< sc_uint<C_M_AXI_A_V_DATA_WIDTH> > m_axi_a_V_RDATA;
    sc_in< sc_logic > m_axi_a_V_RLAST;
    sc_in< sc_uint<C_M_AXI_A_V_ID_WIDTH> > m_axi_a_V_RID;
    sc_in< sc_uint<C_M_AXI_A_V_RUSER_WIDTH> > m_axi_a_V_RUSER;
    sc_in< sc_lv<2> > m_axi_a_V_RRESP;
    sc_in< sc_logic > m_axi_a_V_BVALID;
    sc_out< sc_logic > m_axi_a_V_BREADY;
    sc_in< sc_lv<2> > m_axi_a_V_BRESP;
    sc_in< sc_uint<C_M_AXI_A_V_ID_WIDTH> > m_axi_a_V_BID;
    sc_in< sc_uint<C_M_AXI_A_V_BUSER_WIDTH> > m_axi_a_V_BUSER;
    sc_in< sc_lv<16> > n_V;
    sc_in< sc_logic > n_V_ap_vld;
    sc_in< sc_lv<32> > a_addr;
    sc_in< sc_logic > a_addr_ap_vld;
    sc_in< sc_lv<32> > b_addr;
    sc_in< sc_logic > b_addr_ap_vld;
    sc_in< sc_lv<32> > c_addr;
    sc_in< sc_logic > c_addr_ap_vld;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const5;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<3> > ap_var_for_const2;
    sc_signal< sc_lv<2> > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const4;
    sc_signal< sc_lv<32> > ap_var_for_const6;


    // Module declarations
    example(sc_module_name name);
    SC_HAS_PROCESS(example);

    ~example();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    example_a_V_m_axi<256,64,5,16,16,16,16,C_M_AXI_A_V_ID_WIDTH,C_M_AXI_A_V_ADDR_WIDTH,C_M_AXI_A_V_DATA_WIDTH,C_M_AXI_A_V_AWUSER_WIDTH,C_M_AXI_A_V_ARUSER_WIDTH,C_M_AXI_A_V_WUSER_WIDTH,C_M_AXI_A_V_RUSER_WIDTH,C_M_AXI_A_V_BUSER_WIDTH,C_M_AXI_A_V_TARGET_ADDR,C_M_AXI_A_V_USER_VALUE,C_M_AXI_A_V_PROT_VALUE,C_M_AXI_A_V_CACHE_VALUE>* example_a_V_m_axi_U;
    example_buff_a* buff_a_U;
    example_buff_a* buff_b_U;
    example_buff_a* buff_V_U;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U1;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U2;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U3;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U4;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U5;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U6;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U7;
    example_fadd_32nsbkb<1,8,32,32,32>* example_fadd_32nsbkb_U8;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<28> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > n_V_preg;
    sc_signal< sc_lv<16> > n_V_in_sig;
    sc_signal< sc_logic > n_V_ap_vld_preg;
    sc_signal< sc_logic > n_V_ap_vld_in_sig;
    sc_signal< sc_lv<32> > a_addr_preg;
    sc_signal< sc_lv<32> > a_addr_in_sig;
    sc_signal< sc_logic > a_addr_ap_vld_preg;
    sc_signal< sc_logic > a_addr_ap_vld_in_sig;
    sc_signal< sc_lv<32> > b_addr_preg;
    sc_signal< sc_lv<32> > b_addr_in_sig;
    sc_signal< sc_logic > b_addr_ap_vld_preg;
    sc_signal< sc_logic > b_addr_ap_vld_in_sig;
    sc_signal< sc_lv<32> > c_addr_preg;
    sc_signal< sc_lv<32> > c_addr_in_sig;
    sc_signal< sc_logic > c_addr_ap_vld_preg;
    sc_signal< sc_logic > c_addr_ap_vld_in_sig;
    sc_signal< sc_logic > a_V_blk_n_AR;
    sc_signal< sc_lv<1> > ap_CS_fsm_state4;
    sc_signal< sc_logic > a_V_blk_n_R;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<1> > exitcond3_reg_877;
    sc_signal< sc_lv<1> > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<1> > exitcond_reg_892;
    sc_signal< sc_logic > a_V_blk_n_AW;
    sc_signal< sc_lv<1> > ap_CS_fsm_state36;
    sc_signal< sc_logic > a_V_blk_n_W;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter2;
    sc_signal< sc_lv<1> > exitcond4_reg_1130;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp3_iter1_exitcond4_reg_1130;
    sc_signal< sc_logic > a_V_blk_n_B;
    sc_signal< sc_lv<1> > ap_CS_fsm_state44;
    sc_signal< sc_logic > n_V_blk_n;
    sc_signal< sc_logic > a_addr_blk_n;
    sc_signal< sc_logic > b_addr_blk_n;
    sc_signal< sc_logic > c_addr_blk_n;
    sc_signal< sc_logic > a_V_AWVALID;
    sc_signal< sc_logic > a_V_AWREADY;
    sc_signal< sc_logic > a_V_WVALID;
    sc_signal< sc_logic > a_V_WREADY;
    sc_signal< sc_logic > a_V_ARVALID;
    sc_signal< sc_logic > a_V_ARREADY;
    sc_signal< sc_lv<64> > a_V_ARADDR;
    sc_signal< sc_lv<32> > a_V_ARLEN;
    sc_signal< sc_logic > a_V_RVALID;
    sc_signal< sc_logic > a_V_RREADY;
    sc_signal< sc_lv<256> > a_V_RDATA;
    sc_signal< sc_logic > a_V_RLAST;
    sc_signal< sc_lv<1> > a_V_RID;
    sc_signal< sc_lv<1> > a_V_RUSER;
    sc_signal< sc_lv<2> > a_V_RRESP;
    sc_signal< sc_logic > a_V_BVALID;
    sc_signal< sc_logic > a_V_BREADY;
    sc_signal< sc_lv<2> > a_V_BRESP;
    sc_signal< sc_lv<1> > a_V_BID;
    sc_signal< sc_lv<1> > a_V_BUSER;
    sc_signal< sc_lv<9> > indvar_reg_279;
    sc_signal< sc_lv<9> > ap_pipeline_reg_pp0_iter1_indvar_reg_279;
    sc_signal< sc_lv<9> > indvar1_reg_291;
    sc_signal< sc_lv<9> > ap_pipeline_reg_pp1_iter1_indvar1_reg_291;
    sc_signal< sc_lv<9> > i_reg_303;
    sc_signal< sc_lv<9> > indvar2_reg_314;
    sc_signal< sc_lv<256> > reg_357;
    sc_signal< bool > ap_condition_320;
    sc_signal< sc_lv<8> > tmp_reg_819;
    sc_signal< sc_lv<8> > r_V_fu_373_p1;
    sc_signal< sc_lv<8> > r_V_reg_824;
    sc_signal< sc_lv<1> > i_op_assign_fu_377_p2;
    sc_signal< sc_lv<1> > i_op_assign_reg_829;
    sc_signal< sc_lv<9> > r_V_cast_fu_386_p1;
    sc_signal< sc_lv<9> > r_V_cast_reg_834;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_lv<9> > segment_V_fu_392_p2;
    sc_signal< sc_lv<9> > segment_V_reg_839;
    sc_signal< sc_lv<9> > r_V_1_fu_398_p2;
    sc_signal< sc_lv<9> > r_V_1_reg_844;
    sc_signal< sc_lv<9> > s_1_fu_409_p2;
    sc_signal< sc_lv<9> > s_1_reg_852;
    sc_signal< sc_lv<1> > ap_CS_fsm_state3;
    sc_signal< sc_lv<9> > segment_len_V_fu_420_p3;
    sc_signal< sc_lv<9> > segment_len_V_reg_857;
    sc_signal< sc_lv<1> > exitcond1_fu_404_p2;
    sc_signal< sc_logic > ap_sig_ioackin_a_V_ARREADY;
    sc_signal< sc_lv<32> > tmp_3_add_i32_shr_fu_438_p1;
    sc_signal< sc_lv<32> > tmp_3_add_i32_shr_reg_872;
    sc_signal< sc_lv<1> > exitcond3_fu_442_p2;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_exitcond3_reg_877;
    sc_signal< sc_lv<9> > indvar_next_fu_447_p2;
    sc_signal< sc_lv<9> > indvar_next_reg_881;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > exitcond_fu_469_p2;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp1_iter1_exitcond_reg_892;
    sc_signal< sc_lv<9> > indvar_next1_fu_474_p2;
    sc_signal< sc_lv<9> > indvar_next1_reg_896;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<1> > exitcond2_fu_485_p2;
    sc_signal< sc_lv<1> > exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp2_stage0;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter1_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter2_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter3_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter4_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter5_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter6_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter7_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter8_exitcond2_reg_901;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp2_iter9_exitcond2_reg_901;
    sc_signal< sc_lv<9> > i_1_fu_490_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<64> > tmp_6_fu_496_p1;
    sc_signal< sc_lv<64> > tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter1_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter2_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter3_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter4_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter5_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter6_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter7_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter8_tmp_6_reg_910;
    sc_signal< sc_lv<64> > ap_pipeline_reg_pp2_iter9_tmp_6_reg_910;
    sc_signal< sc_lv<32> > tmp_3_fu_502_p1;
    sc_signal< sc_lv<32> > tmp_3_reg_925;
    sc_signal< sc_lv<32> > tmp_14_fu_506_p1;
    sc_signal< sc_lv<32> > tmp_14_reg_930;
    sc_signal< sc_lv<32> > p_Result_s_reg_935;
    sc_signal< sc_lv<32> > p_Result_1_1_reg_940;
    sc_signal< sc_lv<32> > p_Result_2_reg_945;
    sc_signal< sc_lv<32> > p_Result_1_2_reg_950;
    sc_signal< sc_lv<32> > p_Result_3_reg_955;
    sc_signal< sc_lv<32> > p_Result_1_3_reg_960;
    sc_signal< sc_lv<32> > p_Result_4_reg_965;
    sc_signal< sc_lv<32> > p_Result_1_4_reg_970;
    sc_signal< sc_lv<32> > p_Result_5_reg_975;
    sc_signal< sc_lv<32> > p_Result_1_5_reg_980;
    sc_signal< sc_lv<32> > p_Result_6_reg_985;
    sc_signal< sc_lv<32> > p_Result_1_6_reg_990;
    sc_signal< sc_lv<32> > p_Result_7_reg_995;
    sc_signal< sc_lv<32> > p_Result_1_7_reg_1000;
    sc_signal< sc_lv<32> > grp_fu_325_p2;
    sc_signal< sc_lv<32> > tmp_11_reg_1085;
    sc_signal< sc_lv<32> > grp_fu_329_p2;
    sc_signal< sc_lv<32> > tmp_14_1_reg_1090;
    sc_signal< sc_lv<32> > grp_fu_333_p2;
    sc_signal< sc_lv<32> > tmp_14_2_reg_1095;
    sc_signal< sc_lv<32> > grp_fu_337_p2;
    sc_signal< sc_lv<32> > tmp_14_3_reg_1100;
    sc_signal< sc_lv<32> > grp_fu_341_p2;
    sc_signal< sc_lv<32> > tmp_14_4_reg_1105;
    sc_signal< sc_lv<32> > grp_fu_345_p2;
    sc_signal< sc_lv<32> > tmp_14_5_reg_1110;
    sc_signal< sc_lv<32> > grp_fu_349_p2;
    sc_signal< sc_lv<32> > tmp_14_6_reg_1115;
    sc_signal< sc_lv<32> > grp_fu_353_p2;
    sc_signal< sc_lv<32> > tmp_14_7_reg_1120;
    sc_signal< sc_logic > ap_sig_ioackin_a_V_AWREADY;
    sc_signal< sc_lv<1> > exitcond4_fu_770_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp3_stage0;
    sc_signal< sc_logic > ap_sig_ioackin_a_V_WREADY;
    sc_signal< sc_lv<9> > indvar_next2_fu_775_p2;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<256> > buff_V_q0;
    sc_signal< sc_lv<256> > buff_V_load_reg_1144;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< sc_lv<32> > curr_addr_a_1_fu_786_p2;
    sc_signal< sc_lv<32> > curr_addr_a_1_reg_1149;
    sc_signal< sc_lv<1> > ap_CS_fsm_state40;
    sc_signal< sc_lv<32> > curr_addr_b_1_fu_792_p2;
    sc_signal< sc_lv<32> > curr_addr_b_1_reg_1154;
    sc_signal< sc_lv<32> > curr_addr_c_1_fu_798_p2;
    sc_signal< sc_lv<32> > curr_addr_c_1_reg_1159;
    sc_signal< sc_lv<1> > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter10;
    sc_signal< sc_lv<8> > buff_a_address0;
    sc_signal< sc_logic > buff_a_ce0;
    sc_signal< sc_logic > buff_a_we0;
    sc_signal< sc_lv<256> > buff_a_q0;
    sc_signal< sc_lv<8> > buff_b_address0;
    sc_signal< sc_logic > buff_b_ce0;
    sc_signal< sc_logic > buff_b_we0;
    sc_signal< sc_lv<256> > buff_b_q0;
    sc_signal< sc_lv<8> > buff_V_address0;
    sc_signal< sc_logic > buff_V_ce0;
    sc_signal< sc_logic > buff_V_we0;
    sc_signal< sc_lv<256> > buff_V_d0;
    sc_signal< sc_lv<9> > s_reg_238;
    sc_signal< sc_lv<32> > curr_addr_a_reg_249;
    sc_signal< sc_lv<32> > curr_addr_b_reg_259;
    sc_signal< sc_lv<32> > curr_addr_c_reg_269;
    sc_signal< sc_lv<9> > indvar_phi_fu_283_p4;
    sc_signal< sc_lv<9> > indvar1_phi_fu_295_p4;
    sc_signal< sc_lv<64> > tmp_1_fu_453_p1;
    sc_signal< sc_lv<64> > tmp_4_fu_480_p1;
    sc_signal< sc_lv<64> > tmp_12_fu_781_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_427_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_458_p1;
    sc_signal< sc_lv<64> > tmp_7_fu_759_p1;
    sc_signal< sc_logic > ap_reg_ioackin_a_V_ARREADY;
    sc_signal< sc_logic > ap_reg_ioackin_a_V_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_a_V_WREADY;
    sc_signal< sc_lv<32> > grp_fu_325_p0;
    sc_signal< sc_lv<32> > grp_fu_325_p1;
    sc_signal< sc_lv<32> > grp_fu_329_p0;
    sc_signal< sc_lv<32> > grp_fu_329_p1;
    sc_signal< sc_lv<32> > grp_fu_333_p0;
    sc_signal< sc_lv<32> > grp_fu_333_p1;
    sc_signal< sc_lv<32> > grp_fu_337_p0;
    sc_signal< sc_lv<32> > grp_fu_337_p1;
    sc_signal< sc_lv<32> > grp_fu_341_p0;
    sc_signal< sc_lv<32> > grp_fu_341_p1;
    sc_signal< sc_lv<32> > grp_fu_345_p0;
    sc_signal< sc_lv<32> > grp_fu_345_p1;
    sc_signal< sc_lv<32> > grp_fu_349_p0;
    sc_signal< sc_lv<32> > grp_fu_349_p1;
    sc_signal< sc_lv<32> > grp_fu_353_p0;
    sc_signal< sc_lv<32> > grp_fu_353_p1;
    sc_signal< sc_lv<9> > tmp_2_cast_fu_389_p1;
    sc_signal< sc_lv<9> > tmp_cast_fu_383_p1;
    sc_signal< sc_lv<1> > tmp_9_fu_415_p2;
    sc_signal< sc_lv<32> > p_Repl2_7_fu_735_p1;
    sc_signal< sc_lv<32> > p_Repl2_6_fu_732_p1;
    sc_signal< sc_lv<32> > p_Repl2_5_fu_729_p1;
    sc_signal< sc_lv<32> > p_Repl2_4_fu_726_p1;
    sc_signal< sc_lv<32> > p_Repl2_3_fu_723_p1;
    sc_signal< sc_lv<32> > p_Repl2_2_fu_720_p1;
    sc_signal< sc_lv<32> > p_Repl2_1_fu_717_p1;
    sc_signal< sc_lv<32> > p_Repl2_s_fu_714_p1;
    sc_signal< sc_lv<28> > ap_NS_fsm;
    sc_signal< bool > ap_condition_643;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<28> ap_ST_fsm_state1;
    static const sc_lv<28> ap_ST_fsm_state2;
    static const sc_lv<28> ap_ST_fsm_state3;
    static const sc_lv<28> ap_ST_fsm_state4;
    static const sc_lv<28> ap_ST_fsm_state5;
    static const sc_lv<28> ap_ST_fsm_state6;
    static const sc_lv<28> ap_ST_fsm_state7;
    static const sc_lv<28> ap_ST_fsm_state8;
    static const sc_lv<28> ap_ST_fsm_state9;
    static const sc_lv<28> ap_ST_fsm_state10;
    static const sc_lv<28> ap_ST_fsm_pp0_stage0;
    static const sc_lv<28> ap_ST_fsm_state14;
    static const sc_lv<28> ap_ST_fsm_state15;
    static const sc_lv<28> ap_ST_fsm_state16;
    static const sc_lv<28> ap_ST_fsm_state17;
    static const sc_lv<28> ap_ST_fsm_state18;
    static const sc_lv<28> ap_ST_fsm_state19;
    static const sc_lv<28> ap_ST_fsm_state20;
    static const sc_lv<28> ap_ST_fsm_pp1_stage0;
    static const sc_lv<28> ap_ST_fsm_state24;
    static const sc_lv<28> ap_ST_fsm_pp2_stage0;
    static const sc_lv<28> ap_ST_fsm_state36;
    static const sc_lv<28> ap_ST_fsm_pp3_stage0;
    static const sc_lv<28> ap_ST_fsm_state40;
    static const sc_lv<28> ap_ST_fsm_state41;
    static const sc_lv<28> ap_ST_fsm_state42;
    static const sc_lv<28> ap_ST_fsm_state43;
    static const sc_lv<28> ap_ST_fsm_state44;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1B;
    static const int C_M_AXI_DATA_WIDTH;
    static const int C_M_AXI_A_V_TARGET_ADDR;
    static const int C_M_AXI_A_V_USER_VALUE;
    static const int C_M_AXI_A_V_PROT_VALUE;
    static const int C_M_AXI_A_V_CACHE_VALUE;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<9> ap_const_lv9_1FF;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_BF;
    static const sc_lv<32> ap_const_lv32_C0;
    static const sc_lv<32> ap_const_lv32_DF;
    static const sc_lv<32> ap_const_lv32_E0;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<32> ap_const_lv32_100;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const6();
    void thread_ap_clk_no_reset_();
    void thread_a_V_ARADDR();
    void thread_a_V_ARLEN();
    void thread_a_V_ARVALID();
    void thread_a_V_AWVALID();
    void thread_a_V_BREADY();
    void thread_a_V_RREADY();
    void thread_a_V_WVALID();
    void thread_a_V_blk_n_AR();
    void thread_a_V_blk_n_AW();
    void thread_a_V_blk_n_B();
    void thread_a_V_blk_n_R();
    void thread_a_V_blk_n_W();
    void thread_a_addr_ap_vld_in_sig();
    void thread_a_addr_blk_n();
    void thread_a_addr_in_sig();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state44();
    void thread_ap_condition_320();
    void thread_ap_condition_643();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_ioackin_a_V_ARREADY();
    void thread_ap_sig_ioackin_a_V_AWREADY();
    void thread_ap_sig_ioackin_a_V_WREADY();
    void thread_b_addr_ap_vld_in_sig();
    void thread_b_addr_blk_n();
    void thread_b_addr_in_sig();
    void thread_buff_V_address0();
    void thread_buff_V_ce0();
    void thread_buff_V_d0();
    void thread_buff_V_we0();
    void thread_buff_a_address0();
    void thread_buff_a_ce0();
    void thread_buff_a_we0();
    void thread_buff_b_address0();
    void thread_buff_b_ce0();
    void thread_buff_b_we0();
    void thread_c_addr_ap_vld_in_sig();
    void thread_c_addr_blk_n();
    void thread_c_addr_in_sig();
    void thread_curr_addr_a_1_fu_786_p2();
    void thread_curr_addr_b_1_fu_792_p2();
    void thread_curr_addr_c_1_fu_798_p2();
    void thread_exitcond1_fu_404_p2();
    void thread_exitcond2_fu_485_p2();
    void thread_exitcond3_fu_442_p2();
    void thread_exitcond4_fu_770_p2();
    void thread_exitcond_fu_469_p2();
    void thread_grp_fu_325_p0();
    void thread_grp_fu_325_p1();
    void thread_grp_fu_329_p0();
    void thread_grp_fu_329_p1();
    void thread_grp_fu_333_p0();
    void thread_grp_fu_333_p1();
    void thread_grp_fu_337_p0();
    void thread_grp_fu_337_p1();
    void thread_grp_fu_341_p0();
    void thread_grp_fu_341_p1();
    void thread_grp_fu_345_p0();
    void thread_grp_fu_345_p1();
    void thread_grp_fu_349_p0();
    void thread_grp_fu_349_p1();
    void thread_grp_fu_353_p0();
    void thread_grp_fu_353_p1();
    void thread_i_1_fu_490_p2();
    void thread_i_op_assign_fu_377_p2();
    void thread_indvar1_phi_fu_295_p4();
    void thread_indvar_next1_fu_474_p2();
    void thread_indvar_next2_fu_775_p2();
    void thread_indvar_next_fu_447_p2();
    void thread_indvar_phi_fu_283_p4();
    void thread_n_V_ap_vld_in_sig();
    void thread_n_V_blk_n();
    void thread_n_V_in_sig();
    void thread_p_Repl2_1_fu_717_p1();
    void thread_p_Repl2_2_fu_720_p1();
    void thread_p_Repl2_3_fu_723_p1();
    void thread_p_Repl2_4_fu_726_p1();
    void thread_p_Repl2_5_fu_729_p1();
    void thread_p_Repl2_6_fu_732_p1();
    void thread_p_Repl2_7_fu_735_p1();
    void thread_p_Repl2_s_fu_714_p1();
    void thread_r_V_1_fu_398_p2();
    void thread_r_V_cast_fu_386_p1();
    void thread_r_V_fu_373_p1();
    void thread_s_1_fu_409_p2();
    void thread_segment_V_fu_392_p2();
    void thread_segment_len_V_fu_420_p3();
    void thread_tmp_12_fu_781_p1();
    void thread_tmp_14_fu_506_p1();
    void thread_tmp_1_fu_453_p1();
    void thread_tmp_2_cast_fu_389_p1();
    void thread_tmp_3_add_i32_shr_fu_438_p1();
    void thread_tmp_3_fu_502_p1();
    void thread_tmp_4_fu_480_p1();
    void thread_tmp_5_fu_458_p1();
    void thread_tmp_6_fu_496_p1();
    void thread_tmp_7_fu_759_p1();
    void thread_tmp_9_fu_415_p2();
    void thread_tmp_cast_fu_383_p1();
    void thread_tmp_s_fu_427_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif