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
src='https://github.com/user-attachments/assets/6edfd5fa-91e6-48a0-bb72-453718e6c7c1'>
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
src='https://github.com/user-attachments/assets/38ef5a68-d8a2-4c83-9fc4-078f41eb56d4'>
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

To get started with the UETRV PicoCore project, follow these steps:

1. **Clone the Repository**:
   ```sh
   git clone [https://github.com/linuxfoundation/uertrv_picocore.git](https://github.com/meds-uet/UET-RVMCU.git)
   cd UET-RVMCU
   ```

## Contributing
We welcome contributions from the open-source community! To contribute:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Submit a pull request with a detailed description of your changes.

## License
This project is licensed under the Apache License 2.0. See the LICENSE file for more details.

## Contact
For questions, suggestions, or feedback, please reach out to us via GitHub Issues.
