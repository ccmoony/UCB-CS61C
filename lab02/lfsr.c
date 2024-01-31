#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned bit0=(*reg & (unsigned)1);
    unsigned bit2=(*reg & ((unsigned)1 << 2))>>2;
    unsigned bit3=(*reg & ((unsigned)1 << 3))>>3;
    unsigned bit5=(*reg & ((unsigned)1 << 5))>>5;
    unsigned v=bit0^bit2^bit3^bit5;
    *reg=(*reg)>>1;
    *reg=((~((unsigned)1<<15)&(*reg)))^((unsigned)v<<15); //use the function in exercise1
}

