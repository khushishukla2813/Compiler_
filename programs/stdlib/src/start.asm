[BITS 32]

global _start
extern c_start
extern compiler_exit

section .asm

_start:
    call c_start
    call compiler_exit
    ret
