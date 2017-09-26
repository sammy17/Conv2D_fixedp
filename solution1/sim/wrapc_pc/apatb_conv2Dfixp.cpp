// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "in_V"
#define AUTOTB_TVIN_in_V  "../tv/cdatafile/c.conv2Dfixp.autotvin_in_V.dat"
// wrapc file define: "out_V"
#define AUTOTB_TVIN_out_V  "../tv/cdatafile/c.conv2Dfixp.autotvin_out_V.dat"
#define AUTOTB_TVOUT_out_V  "../tv/cdatafile/c.conv2Dfixp.autotvout_out_V.dat"
// wrapc file define: "kernel_V"
#define AUTOTB_TVIN_kernel_V  "../tv/cdatafile/c.conv2Dfixp.autotvin_kernel_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "out_V"
#define AUTOTB_TVOUT_PC_out_V  "../tv/rtldatafile/rtl.conv2Dfixp.autotvout_out_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			in_V_depth = 0;
			out_V_depth = 0;
			kernel_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{in_V " << in_V_depth << "}\n";
			total_list << "{out_V " << out_V_depth << "}\n";
			total_list << "{kernel_V " << kernel_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int in_V_depth;
		int out_V_depth;
		int kernel_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void conv2Dfixp (
ap_fixed<16, 4, (ap_q_mode) 5, (ap_o_mode)3, 0> in[784],
ap_fixed<16, 4, (ap_q_mode) 5, (ap_o_mode)3, 0> out[784],
ap_fixed<16, 4, (ap_q_mode) 5, (ap_o_mode)3, 0> kernel[9]);

void AESL_WRAP_conv2Dfixp (
ap_fixed<16, 4, (ap_q_mode) 5, (ap_o_mode)3, 0> in[784],
ap_fixed<16, 4, (ap_q_mode) 5, (ap_o_mode)3, 0> out[784],
ap_fixed<16, 4, (ap_q_mode) 5, (ap_o_mode)3, 0> kernel[9])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "out_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_V, AESL_token); // data

			sc_bv<16> *out_V_pc_buffer = new sc_bv<16>[784];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_V
				{
					// bitslice(15, 0)
					// {
						// celement: out.V(15, 0)
						// {
							sc_lv<16>* out_V_lv0_0_783_1 = new sc_lv<16>[784];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(15, 0)
						{
							// carray: (0) => (783) @ (1)
							for (int i_0 = 0; i_0 <= 783; i_0 += 1)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_0_783_1[hls_map_index].range(15, 0) = sc_bv<16>(out_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(15, 0)
						{
							// carray: (0) => (783) @ (1)
							for (int i_0 = 0; i_0 <= 783; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : (out[i_0]).range()
								// output_type_conversion : (out_V_lv0_0_783_1[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									(out[i_0]).range() = (out_V_lv0_0_783_1[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "in_V"
		char* tvin_in_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_V);

		// "out_V"
		char* tvin_out_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_V);
		char* tvout_out_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_V);

		// "kernel_V"
		char* tvin_kernel_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_kernel_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_in_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_V, tvin_in_V);

		sc_bv<16>* in_V_tvin_wrapc_buffer = new sc_bv<16>[784];

		// RTL Name: in_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(15, 0)
				{
					// carray: (0) => (783) @ (1)
					for (int i_0 = 0; i_0 <= 783; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).range().to_string(SC_BIN).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).range().to_string(SC_BIN).c_str();
							in_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = in_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 784; i++)
		{
			sprintf(tvin_in_V, "%s\n", (in_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_V, tvin_in_V);
		}

		tcl_file.set_num(784, &tcl_file.in_V_depth);
		sprintf(tvin_in_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_V, tvin_in_V);

		// release memory allocation
		delete [] in_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_out_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_out_V, tvin_out_V);

		sc_bv<16>* out_V_tvin_wrapc_buffer = new sc_bv<16>[784];

		// RTL Name: out_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(15, 0)
				{
					// carray: (0) => (783) @ (1)
					for (int i_0 = 0; i_0 <= 783; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).range().to_string(SC_BIN).c_str();
							out_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 784; i++)
		{
			sprintf(tvin_out_V, "%s\n", (out_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_out_V, tvin_out_V);
		}

		tcl_file.set_num(784, &tcl_file.out_V_depth);
		sprintf(tvin_out_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_out_V, tvin_out_V);

		// release memory allocation
		delete [] out_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_kernel_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_kernel_V, tvin_kernel_V);

		sc_bv<16>* kernel_V_tvin_wrapc_buffer = new sc_bv<16>[9];

		// RTL Name: kernel_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: kernel.V(15, 0)
				{
					// carray: (0) => (8) @ (1)
					for (int i_0 = 0; i_0 <= 8; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : kernel[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : kernel[0]
						// regulate_c_name       : kernel_V
						// input_type_conversion : (kernel[i_0]).range().to_string(SC_BIN).c_str()
						if (&(kernel[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> kernel_V_tmp_mem;
							kernel_V_tmp_mem = (kernel[i_0]).range().to_string(SC_BIN).c_str();
							kernel_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = kernel_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 9; i++)
		{
			sprintf(tvin_kernel_V, "%s\n", (kernel_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_kernel_V, tvin_kernel_V);
		}

		tcl_file.set_num(9, &tcl_file.kernel_V_depth);
		sprintf(tvin_kernel_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_kernel_V, tvin_kernel_V);

		// release memory allocation
		delete [] kernel_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		conv2Dfixp(in, out, kernel);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_out_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_V, tvout_out_V);

		sc_bv<16>* out_V_tvout_wrapc_buffer = new sc_bv<16>[784];

		// RTL Name: out_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(15, 0)
				{
					// carray: (0) => (783) @ (1)
					for (int i_0 = 0; i_0 <= 783; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).range().to_string(SC_BIN).c_str();
							out_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 784; i++)
		{
			sprintf(tvout_out_V, "%s\n", (out_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_V, tvout_out_V);
		}

		tcl_file.set_num(784, &tcl_file.out_V_depth);
		sprintf(tvout_out_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_V, tvout_out_V);

		// release memory allocation
		delete [] out_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "in_V"
		delete [] tvin_in_V;
		// release memory allocation: "out_V"
		delete [] tvin_out_V;
		delete [] tvout_out_V;
		// release memory allocation: "kernel_V"
		delete [] tvin_kernel_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}
