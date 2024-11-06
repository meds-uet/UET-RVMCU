# Simple Makefile for ModelSim

# Variables
VLOG = vlog
VSIM = vsim
SIM_FILES = \
  fpnew_pkg.sv\
  fpu_parameters.sv\
  common_cells/src/cf_math_pkg.sv\
  fp_wrapper.sv\
  opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_dp.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_frbus.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_src_type.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_ctrl.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_ff1.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_pack_single.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_prepare.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_round_single.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_special.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_srt_single.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_top.v\
  opene906/E906_RTL_FACTORY/gen_rtl/clk/rtl/gated_clk_cell.v\
  fpu_div_sqrt_mvp/hdl/control_mvp.sv\
  fpu_div_sqrt_mvp/hdl/defs_div_sqrt_mvp.sv\
  fpu_div_sqrt_mvp/hdl/div_sqrt_mvp_wrapper.sv\
  fpu_div_sqrt_mvp/hdl/div_sqrt_top_mvp.sv\
  fpu_div_sqrt_mvp/hdl/iteration_div_sqrt_mvp.sv\
  fpu_div_sqrt_mvp/hdl/norm_div_sqrt_mvp.sv\
  fpu_div_sqrt_mvp/hdl/nrbd_nrsc_mvp.sv\
  fpu_div_sqrt_mvp/hdl/preprocess_mvp.sv\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_ctrl.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_double.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_ff1.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_pack.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_prepare.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_round.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_scalar_dp.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_srt.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_srt_radix16_bound_table.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_srt_radix16_with_sqrt.v\
  openc910/C910_RTL_FACTORY/gen_rtl/vfdsu/rtl/ct_vfdsu_top.v\
  fpnew_top.sv\
  fp_test_bench.sv \
  fpnew_divsqrt_th_64_multi.sv\
  fpnew_classifier.sv \
  fpnew_fma.sv \
  fpnew_cast_multi.sv \
  fpnew_divsqrt_multi.sv \
  fpnew_divsqrt_th_32.sv  \
  common_cells/src/lzc.sv\
  fpnew_fma_multi.sv \
  fpnew_noncomp.sv \
  fpnew_opgroup_fmt_slice.sv \
  fpnew_opgroup_multifmt_slice.sv \
  fpnew_rounding.sv \
  common_cells/src/rr_arb_tree.sv\
  fpnew_opgroup_block.sv \

# Default target
all: compile run

# Compile all Verilog/SystemVerilog files
compile:
	@echo "Compiling Verilog/SystemVerilog files..."
	$(VLOG) -work work $(SIM_FILES)

# Run the simulation
run:
	@echo "Running simulation..."
	$(VSIM) -c -do "run -all; quit" fp_test_bench

# Clean target to remove compiled files
clean:
	@echo "Cleaning up..."
	rm -rf work
	rm -rf transcript

.PHONY: all compile run clean
