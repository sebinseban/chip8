#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8memory.h"
#include "chip8registers.h"
//this is the chip8 structure, anything to do with chip8 internals will go here (memory, registers,keyboard,screen pixels)
struct chip8
{
    struct chip8_memory memory;
    struct chip8_registers registers;
};


#endif