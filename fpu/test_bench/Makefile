# Simple Makefile for ModelSim

# Variables
VLOG = vlog
VSIM = vsim
SIM_FILES = \
  fpnew_pkg.sv\
  fpu_parameters.sv\
  common_cells/src/cf_math_pkg.sv\
  fp_wrapper.sv\
  fpnew_top.sv\
  fp_test_bench.sv \
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
	$(VSIM) -c -do "run -all; quit" fp_test_bench

# Clean target to remove compiled files
clean:
	@echo "Cleaning up..."
	rm -rf work
	rm -rf transcript

.PHONY: all compile run clean
