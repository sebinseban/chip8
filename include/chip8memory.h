#ifndef CHIP8MEMORY_H
#define CHIP8MEMORY_H

#include "config.h"

struct chip8_memory
{
    unsigned char memory[CHIP8_MEMORY_SIZE];
};

//used for setting the index in the memory array //will set some memory
void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val);
//used for getting the index in the memory array   //will get some memory
unsigned char chip8_memory_get(struct chip8_memory* memory, int index);

#endif