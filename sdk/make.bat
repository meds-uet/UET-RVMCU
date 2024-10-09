:: Batch file for windows
rmdir -r build
mkdir build

riscv64-unknown-elf-as -c -o build/startup.o src/startup.s -march=rv32ima -mabi=ilp32

riscv64-unknown-elf-gcc -c -o build/main.o src/main.c -march=rv32im -mabi=ilp32

riscv64-unknown-elf-gcc -O -o build/program.elf build/main.o -T linker.ld -nostdlib -march=rv32i -mabi=ilp32

riscv64-unknown-elf-objcopy -O binary --only-section=.data* --only-section=.text* build/program.elf build/main.bin

python3 maketxt.py build/main.bin > build/imem.txt

riscv64-unknown-elf-objdump -S -s build/program.elf > build/program.dump

copy .\build\imem.txt ..\rtl\memory
cd ..
cd .\rtl\memory\
python3 split_hex.py imem.txt



