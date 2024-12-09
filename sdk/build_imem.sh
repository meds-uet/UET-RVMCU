#!/usr/bin/bash
rm -r build
mkdir build

riscv64-unknown-elf-as -c -o build/startup.o src/startup.s -march=rv32ima_zicsr -mabi=ilp32


riscv64-unknown-elf-gcc -c -O0 -o build/main.o src/main.c -march=rv32ima_zicsr -mabi=ilp32
riscv64-unknown-elf-gcc -c -O0 -o build/uart.o interfaces/uart.c -march=rv32ima_zicsr -mabi=ilp32
riscv64-unknown-elf-gcc -c -O0 -o build/spi.o interfaces/spi.c -march=rv32ima_zicsr -mabi=ilp32
riscv64-unknown-elf-gcc -c -O0 -o build/gpio.o interfaces/gpio.c -march=rv32ima_zicsr -mabi=ilp32

riscv64-unknown-elf-gcc -O0 -o build/program.elf build/main.o build/uart.o build/spi.o build/gpio.o -T linker.ld -nostdlib -march=rv32i -mabi=ilp32

riscv64-unknown-elf-objcopy -O binary --only-section=.data* --only-section=.text* build/program.elf build/main.bin

python3 maketxt.py build/main.bin > build/imem.txt

riscv64-unknown-elf-objdump -S -s build/program.elf > build/program.dump

cp build/imem.txt ../rtl/memory 

cd ..
cd rtl/memory
python3 split_hex.py imem.txt
