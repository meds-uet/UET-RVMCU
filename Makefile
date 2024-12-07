#*********************************************************************
#  * Filename :    Makefile
#  * Date     :    02-5-2023
#  * Author   :    @abdulwadoodd
#  *
#  * Description:  Makefile for simulating and testing UETRV_PCORE
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

# Default memory files
MEM_BANK_0 = ../rtl/memory/MEM_BANK_0.txt
MEM_BANK_1 = ../rtl/memory/MEM_BANK_1.txt
MEM_BANK_2 = ../rtl/memory/MEM_BANK_2.txt
MEM_BANK_3 = ../rtl/memory/MEM_BANK_3.txt

# Default target: run the Vivado script
fpga: clean build_imem bitstream



update_memory:
	@echo "Updating FPGA memory..."
	cd $(FPGA_DIR) &&  vivado -mode batch -source $(MEM_TCL_SCRIPT) -tclargs \
		--mem_bank_0=$(MEM_BANK_0) \
		--mem_bank_1=$(MEM_BANK_1) \
		--mem_bank_2=$(MEM_BANK_2) \
		--mem_bank_3=$(MEM_BANK_3)

# Usage example
# make update_memory MEM_BANK_0=mem_bank_0_alt.txt MEM_BANK_1=mem_bank_1_alt.txt


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

sim-verilate-linux: verilate
	@echo
	@echo "Extracting Linux Image..."
	@echo
	rm -f ./sdk/example-linux/imem.txt
	unzip ./sdk/example-linux/imem.zip -d ./sdk/example-linux/
	@echo
	@echo
	@echo "Output is captured in uart_logdata.log"
	@echo "Press ctrl+c to exit to the simulation"
	@echo
	@echo "Initiating Linux Bootup in Verilator Simulation..."
	@echo
	$(ver-library)/Vpcore_tb +imem=$(imem_linux) +max_cycles=300000000 +vcd=$(vcd)

clean-all:
	rm -rf ver_work/ *.log *.vcd \
	verif/*work/

