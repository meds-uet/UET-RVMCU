:: rm - r build ::for linux

@echo off
setlocal enabledelayedexpansion

REM Directory paths
set INTERFACE_DIR=interfaces
set SRC_DIR=src
set BUILD_DIR=build
set RTL_DIR=..\rtl\memory

REM Compiler options
set COMPILER=riscv64-unknown-elf-gcc
set ASSEMBLER=riscv64-unknown-elf-as
set OBJCOPY=riscv64-unknown-elf-objcopy
set OBJDUMP=riscv64-unknown-elf-objdump
set CFLAGS=-c -march=rv32im -mabi=ilp32
set LINKER_SCRIPT=linker.ld

REM Create the build directory if it doesn't exist
if not exist "%BUILD_DIR%" (
    mkdir "%BUILD_DIR%"
)

REM Compile the startup file
if exist "%SRC_DIR%\startup.s" (
    echo Compiling %SRC_DIR%\startup.s...
    "%ASSEMBLER%" -c -o "%BUILD_DIR%\startup.o" "%SRC_DIR%\startup.s" -march=rv32ima -mabi=ilp32
) else (
    echo startup.s not found in %SRC_DIR%.
)

REM Loop through all .c files in the interfaces directory
for %%f in (%INTERFACE_DIR%\*.c) do (
    set FILENAME=%%~nf
    echo Compiling %%f...
    "%COMPILER%" !CFLAGS! -o "%BUILD_DIR%\!FILENAME!.o" "%%f"
)

REM Compile main.c from the src directory
if exist "%SRC_DIR%\main.c" (
    echo Compiling %SRC_DIR%\main.c...
    "%COMPILER%" !CFLAGS! -o "%BUILD_DIR%\main.o" "%SRC_DIR%\main.c"
) else (
    echo main.c not found in %SRC_DIR%.
)

REM Link the object files into an ELF executable
echo Linking object files to create ELF...
::set OBJ_FILES=%BUILD_DIR%\startup.o
for %%o in (%BUILD_DIR%\*.o) do (
    if not "%%~nxo"=="startup.o" (
        set OBJ_FILES=!OBJ_FILES! %%o
    )
)


"%COMPILER%" -O -o "%BUILD_DIR%\program.elf" !OBJ_FILES! -T "%LINKER_SCRIPT%" -nostdlib -march=rv32i -mabi=ilp32
echo Compilation and linking completed!

REM Create binary and text files from ELF
echo Creating binary and text files from ELF...
"%OBJCOPY%" -O binary --only-section=.data* --only-section=.text* build/program.elf build/main.bin
python3 maketxt.py build/main.bin > build/imem.txt
"%OBJDUMP%" -S -s build/program.elf > build/program.dump

REM Copy and process the imem.txt file
echo Copying imem.txt to rtl\memory...
copy "%BUILD_DIR%\imem.txt" "%RTL_DIR%\"
cd "%RTL_DIR%"
python3 split_hex.py imem.txt

echo Process completed!
endlocal