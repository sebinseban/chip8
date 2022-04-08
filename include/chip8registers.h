#ifndef CHIP8REGISTERS_H
#define CHIP8REGISTERS_H

#include "config.h"
struct chip8_registers
{
    unsigned char V[CHIP8_REGISTERS_SIZE];
    unsigned short I;
    unsigned short PC;
    unsigned char SP;
    unsigned char delay_timer;
    unsigned char sound_timer;
};





#endif