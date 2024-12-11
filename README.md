# UET-RVMCU
## Overview

The UET-RVMCU project is funded under [LFX Mentorship Program Spring 2024]([url](https://mentorship.lfx.linuxfoundation.org/project/a658f72f-c2e9-44a5-8f2f-76da3892644a)). This project aims to enhance the capabilities of the existing [UETRV_Pcore RISC-V core]([url](https://github.com/ee-uet/UETRV-PCore)), transforming it into a versatile and feature-rich open-source microcontroller. The core (UETRV_Pcore) is RV32IMA Linux-compatible and Privilege Architecture 1.10 compliant. Our vision is to provide a comprehensive RISC-V MCU solution accessible to the open-source community.

<p align="center">
<img width=200 height=200
src='https://github.com/user-attachments/assets/aa4b2a58-3c5e-4148-b6b4-2713afd6102c'>
</p>

## Description
UETRV-PCore with a few modifications has been used as the Processor Core.

<p align="center">
<img width=300 height=300
src='https://github.com/user-attachments/assets/c9f7bb0d-fefb-481e-9e27-e6fd678aeddf'>
</p>

### Key Features taken from UETRV_PCore

- **RV32IMA Compatibility**: Ensuring the core supports the RV32I base integer instruction set with the M (multiply), A (atomic), and I (integer) extensions. 

#### Modifications to UETRV_PCore
- Pipeline converted from 5-stages to 3-stages
- Only M-mode supported
- MMU and Virtual Memory removed
- Block Memory integrated

### GPIO Peripherals

GPIO peripherals will facilitate easy interfacing with external devices.

**Features**:
- GPIO port A, B and C, each having 8 pins.
- Configurable level interrupts
- GP-Special, 16 LEDs and 16 switches, of NexysA-7 board interfaced, with configurable interrupts.

<p align="center">
<img height=200
src='https://github.com/user-attachments/assets/5c384013-56bb-4446-922b-e94a96538387'>
</p>

### Memory
Memory has been updated to four memory banks to support byte addressable accesses.

<p align="center">
<img width=1000 height=500
src='https://github.com/user-attachments/assets/98517ddc-fccc-4607-961d-312f5f29dc9e'>
</p>

### Bitmanip Extension Integration

The Bitmanip extension offers advanced bitwise manipulation instructions, enhancing performance for tasks requiring intensive bit-level operations.

**Features**:
- Zba
- Zbb
- Zbc
- Zbs

### Floating Point Extension Integration

Incorporating the Floating Point extension will enable hardware-accelerated floating-point computations, essential for applications requiring high precision and performance.

**Goals**:
- Integrate the Floating Point extension into the core.
- Optimize floating-point operations for performance.
- Ensure compliance with the RISC-V standard.

### Debug, Trace Extension

Enhancing the microcontroller's capabilities through debug and trace functionalities improves development and debugging processes. 

**Goals**:
- Integrate comprehensive debug functionalities.
- Implement trace capabilities to track and analyze core execution.


## Getting Started

# UETRVMCU Core: FPGA and Verilator Guide

## Overview

This guide provides step-by-step instructions for running the UETRVMCU core on an FPGA and simulating it using Verilator. The Makefile simplifies building, simulating, and programming the FPGA.

## Prerequisites

1. **Hardware**
   - Supported FPGA board: `NexysA7` or `Nexys4`.

2. **Software**
   - [Vivado](https://www.xilinx.com/products/design-tools/vivado.html)
   - [Verilator](https://verilator.org/)
   - Bash shell for running scripts
   - GNU Make utility

3. **Directory Structure**
   Our project directory is organized as follows:
/bench 
└── pcore_tb.sv 
/rtl 
├── core/ 
├── defines/ 
├── interconnect/ 
├── memory/ 
├── peripherals/ 
/fpga 
└── project/ 
/sdk 
└── build_imem.sh
└── interfaces
└── src
mem.tcl
run.tcl

---

## Running the Core on FPGA

### 1. Clean the Project Directory
Run the following command to remove previous build files:
```bash
make clean
```
### 2. Build Instruction Memory
To generate the instruction memory:
```bash
make build_imem
```
### 3. Generate the Bitstream
Specify the target FPGA board (`NexysA7` or `Nexys4`) and run:
```bash
make bitstream BOARD=NexysA7
```
### 4. Update the FPGA Memory
Once the bitstream is generated, ensure the FPGA is connected to your computer and run
```bash
make update_bit
```

### S. Do Everything in a single command
You can do all the above steps in a single command by running
```bash
make fpga BOARD=NexysA7
```


## Simulating with Verilator
### 1. Build the Verilator Model
To compile the Verilog source files for simulation:

```bash
make verilate
```
### 2. Run the Simulation
Simulate the core with specific parameters. For example:

```bash
make sim-verilate-uart
```
This generates an output log (uart_logdata.log) and optional waveform files (* .vcd) if enabled. Waveforms (* .vcd) can be enabled by setting vcd=1:
```bash
make sim-verilate-uart vcd=1
```

## Makefile Targets

| Command                  | Description                                                                                 |
|--------------------------|---------------------------------------------------------------------------------------------|
| `make clean`             | Cleans the project directory by removing all generated files.                               |
| `make build_imem`        | Generates the instruction memory required for the core.                                     |
| `make bitstream BOARD=<BoardName>` | Builds the FPGA project for the specified board (e.g., `NexysA7`, `Nexys4`).               |
| `make update_bit`        | Updates the memory on the FPGA using Vivado batch mode.                                     |
| `make verilate`          | Builds the Verilator model of the UETRVMCU core for simulation.                             |
| `make sim-verilate-uart` | Simulates the core with Verilator and logs UART output in `uart_logdata.log`.               |
| `make clean-all`         | Removes all Verilator-related files, logs, and waveform files from the directory.           |

## Troubleshooting

### Invalid Board Name Error
If you see an error like: `Error: Please specify a valid BOARD (Nexys4 or NexysA7)`. Ensure you specify the `BOARD` variable when running the Makefile. For example:
```bash
make fpga BOARD=NexysA7
```
## Missing Dependencies

Ensure the following dependencies are installed and correctly configured:

1. **Hardware**
   - Supported FPGA board: `NexysA7` or `Nexys4`.

2. **Software**
   - [Vivado](https://www.xilinx.com/products/design-tools/vivado.html)
   - [Verilator](https://verilator.org/)
   - Bash shell for running scripts
   - GNU Make utility

## Contributing
We welcome contributions from the open-source community! To contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Submit a pull request with a detailed description of your changes.

## Notes
Ensure that Vivado and Verilator paths are correctly set in your environment variables. The `build_imem.sh` script and `.tcl` scripts should be adapted as per project-specific requirements.

## License
This project is licensed under the Apache License 2.0. See the LICENSE file for more details.

## Contact
For questions, suggestions, or feedback, please reach out to us via GitHub Issues, or for further assistance, contact the author: Umer Shahid (@umershahidengr)
