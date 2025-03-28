#ifndef CONFIG_H
#define CONFIG_H

#define KERNEL_CODE_SELECTOR 0x08
#define KERNEL_DATA_SELECTOR 0x10


#define COMPILER_TOTAL_INTERRUPTS 512

// 100MB heap size
#define COMPILER_HEAP_SIZE_BYTES 104857600
#define COMPILER_HEAP_BLOCK_SIZE 4096
#define COMPILER_HEAP_ADDRESS 0x01000000 
#define COMPILER_HEAP_TABLE_ADDRESS 0x00007E00

#define COMPILER_SECTOR_SIZE 512

#define COMPILER_MAX_FILESYSTEMS 12
#define COMPILER_MAX_FILE_DESCRIPTORS 512

#define COMPILER_MAX_PATH 108

#define COMPILER_TOTAL_GDT_SEGMENTS 6

#define COMPILER_PROGRAM_VIRTUAL_ADDRESS 0x400000
#define COMPILER_USER_PROGRAM_STACK_SIZE 1024 * 16
#define COMPILER_PROGRAM_VIRTUAL_STACK_ADDRESS_START 0x3FF000
#define COMPILER_PROGRAM_VIRTUAL_STACK_ADDRESS_END COMPILER_PROGRAM_VIRTUAL_STACK_ADDRESS_START - COMPILER_USER_PROGRAM_STACK_SIZE

#define COMPILER_MAX_PROGRAM_ALLOCATIONS 1024
#define COMPILER_MAX_PROCESSES 12

#define USER_DATA_SEGMENT 0x23
#define USER_CODE_SEGMENT 0x1b

#define COMPILER_MAX_ISR80H_COMMANDS 1024

#define COMPILER_KEYBOARD_BUFFER_SIZE 1024

#endif
