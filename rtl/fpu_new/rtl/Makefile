# Simple Makefile for ModelSim

# Variables
VLOG = vlog
VSIM = vsim
SIM_FILES = \
  fpnew_pkg.sv\
  fpu_parameters.sv\
  fpnew_divsqrt_th_32.sv\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_ctrl.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_ff1.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_pack_single.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_prepare.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_round_single.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_special.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_srt_single.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_top.v\
  opene906/E906_RTL_FACTORY/gen_rtl/clk/rtl/gated_clk_cell.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_dp.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_frbus.v\
  opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_src_type.v\
  common_cells/src/cf_math_pkg.sv\
  fp_wrapper.sv\
  fpnew_top.sv\
  tb_fp_wrapper.sv\
  fpnew_classifier.sv \
  fpnew_fma.sv \
  fpnew_cast_multi.sv \
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
	$(VSIM) -c -do "run -all; quit" tb_fp_wrapper

# Clean target to remove compiled files
clean:
	@echo "Cleaning up..."
	rm -rf work
	rm -rf transcript

.PHONY: all compile run clean
