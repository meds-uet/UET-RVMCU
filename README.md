# UET-RVMCU

## Overview

The UET-RVMCU project is funded under [LFX Mentorship Program Spring 2024]([url](https://mentorship.lfx.linuxfoundation.org/project/a658f72f-c2e9-44a5-8f2f-76da3892644a)). This project aims to enhance the capabilities of the existing [UETRV_Pcore RISC-V core]([url](https://github.com/ee-uet/UETRV-PCore)), transforming it into a versatile and feature-rich open-source microcontroller. The core (UETRV_Pcore) is RV32IMA Linux-compatible and Privilege Architecture 1.10 compliant. Our vision includes integrating essential extensions such as bitmanip, floating point, debug, trace, and GPIO peripherals. This initiative aligns with the broader goal of providing a comprehensive RISC-V MCU solution accessible to the open-source community.

## Key Features taken from UETRV_Pcore

- **RV32IMA Compatibility**: Ensuring the core supports the RV32I base integer instruction set with the M (multiply), A (atomic), and I (integer) extensions. 

## Project Tasks

### Bitmanip Extension Integration

The Bitmanip extension offers advanced bitwise manipulation instructions, enhancing performance for tasks requiring intensive bit-level operations.

**Goals**:
- Integrate the Bitmanip extension into UET_RVMCU.
- Optimize the extension's usage for various applications.
- Ensure compatibility with existing codebases.

### Floating Point Extension Integration

Incorporating the Floating Point extension will enable hardware-accelerated floating-point computations, essential for applications requiring high precision and performance.

**Goals**:
- Integrate the Floating Point extension into the core.
- Optimize floating-point operations for performance.
- Ensure compliance with the RISC-V standard.

### Debug, Trace, and GPIO Peripherals

Enhancing the microcontroller's capabilities through debug and trace functionalities improves development and debugging processes. Additionally, GPIO peripherals will facilitate easy interfacing with external devices.

**Goals**:
- Integrate comprehensive debug functionalities.
- Implement trace capabilities to track and analyze core execution.
- Integrate GPIO peripherals to expand interfacing options.

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
