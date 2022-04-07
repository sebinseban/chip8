#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8memory.h"
//this is the chip8 structure, anything to do with chip8 internals will go here (memory, registers,keyboard,screen pixels)
struct chip8
{
    struct chip8_memory memory;
};


#endif