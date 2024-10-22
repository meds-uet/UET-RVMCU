OUTPUT_ARCH( "riscv" )
ENTRY( reset_handler )
STARTUP (build/startup.o)

MEMORY
{ 
  IDMEM (rwx)  : ORIGIN = 0x00000000, LENGTH = 2M
  PERI  (rwx)  : ORIGIN = 0x00200000, LENGTH = 2M
}


SECTIONS
{
  __stack_size = DEFINED(__stack_size) ? __stack_size : 400;

  . = ALIGN(4);

  .text :
  {
    KEEP (*(SORT_NONE(.vector_table)))
  } >IDMEM

  .text :
  { *(.text .text.*)
    *(.rodata .rodata.*)  
    *(.srodata .srodata.*)    
  } >IDMEM


  PROVIDE (__etext = .);
  PROVIDE (_etext = .);
  PROVIDE (etext = .);

  _sidata = .;
  .data : AT( _sidata )
  {
    _sdata = .;
    *(.rdata) 
    *(.data .data.*)
    *(.sdata .sdata.*)
    . = ALIGN(4);
    _edata = .;
  } >IDMEM

  PROVIDE( _edata = . );
  PROVIDE( edata = . );
  PROVIDE( _fbss = . );
  PROVIDE( __bss_start = . );

  .bss :
  {
    _sbss = .;
    *(.sbss*)
    *(.bss .bss.*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;
  } >IDMEM

  . = ALIGN(8);
  PROVIDE( _end = . );
  PROVIDE( end = . );

  .stack ORIGIN(IDMEM) + LENGTH(IDMEM) - __stack_size :
  {
    PROVIDE( _heap_end = . ); 
    . = __stack_size;  
    PROVIDE( _sp = . ); 
  } >IDMEM
}
