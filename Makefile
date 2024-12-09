#*********************************************************************
#  * Filename :    Makefile
#  * Date     :    09-12-2024
#  * Author   :    Umer Shahid (@umershahidengr)
#  *
#  * Description:  Makefile for simulating and testing UET_RVMCU
#  *********************************************************************


verilator   ?= verilator
ver-library ?= ver_work
defines     ?= COMPLIANCE

# default command line arguments
max_cycles ?= 100
vcd        ?= 0

# Variables
VIVADO = vivado -mode batch -source
TCL_SCRIPT = ../run.tcl
BOARD ?= NexysA7
SDK_DIR = sdk
BUILD_IMEM_SCRIPT = build_imem.sh
FPGA_DIR = fpga

MEM_TCL_SCRIPT = ../mem.tcl
BITSTREAM = project/mcu_nexys.runs/impl_1/soc_top.bit


# Default target: run the Vivado script
fpga: clean build_imem bitstream update_bit



update_bit:
	@echo "Updating FPGA memory..."
	cd $(FPGA_DIR) &&  vivado -mode batch -source $(MEM_TCL_SCRIPT) 

# Usage example
# make update_bit


build_imem:
	@echo "Running build_imem.sh..."
	cd $(SDK_DIR) && bash $(BUILD_IMEM_SCRIPT)
# Run the Vivado script for the selected board
bitstream:
	@if [ "$(BOARD)" = "Nexys4" ] || [ "$(BOARD)" = "NexysA7" ]; then \
		echo "Building FPGA project for board: $(BOARD)"; \
		cd $(FPGA_DIR) &&  $(VIVADO) $(TCL_SCRIPT) -notrace -tclargs $(BOARD); \
	else \
		echo "Error: Please specify a valid BOARD (Nexys4 or NexysA7)"; \
		exit 1; \
	fi	
# Clean the project directory
clean:
	cd $(FPGA_DIR) && rm -rf project/ .Xil/ *.jou *.log

# Usage instructions
help:
	@echo "Usage:"
	@echo "  make all BOARD=<BoardName>   # Run for a specific board (e.g., NexysA7, Nexys-4)"
	@echo "  make clean                  # Clean the generated files"



src := bench/pcore_tb.sv							\
	   $(wildcard rtl/*.sv)							\
	   $(wildcard rtl/core/*.sv)						\
	   $(wildcard rtl/core/*/*.sv)						\
	   $(wildcard rtl/interconnect/*.sv)					\
	   $(wildcard rtl/memory/*.sv)						\
       	   $(wildcard rtl/peripherals/*/*.sv)

incdir 	:= 	rtl/defines/
list_incdir := $(foreach dir, ${incdir}, +incdir+$(dir))

verilate_command := $(verilator) +define+$(defines) 				\
					--cc $(src) $(list_incdir)		\
					--top-module pcore_tb			\
					-Wno-TIMESCALEMOD 			\
					-Wno-MULTIDRIVEN 			\
					-Wno-CASEOVERLAP 			\
        				-Wno-WIDTH  				\
					-Wno-UNOPTFLAT 				\
					-Wno-IMPLICIT 				\
					-Wno-PINMISSING 			\
					-Wno-PINMISSING 			\
					-Wno-CASEWITHX				\
					 -Wno-UNSIGNED				\
					--Mdir $(ver-library)			\
					--exe bench/pcore_tb.cpp		\
					--trace-structs --trace

verilate:
	@echo "Building verilator model"
	$(verilate_command)
	cd $(ver-library) && $(MAKE) -f Vpcore_tb.mk

sim-verilate-uart: verilate
	@echo
	@echo
	@echo "Output is captured in uart_logdata.log"
	@echo
	$(ver-library)/Vpcore_tb +imem=$(imem_uart) +max_cycles=$(max_cycles) +vcd=$(vcd)


clean-all:
	rm -rf ver_work/ *.log *.vcd \
	verif/*work/

