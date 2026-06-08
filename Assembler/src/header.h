#include <stdio.h>
#include <string.h>
#include <stdint.h>

uint8_t parsing(char *input);

// 1-Byte Instructions
uint8_t MOV(char *instruction, char *des, char *s);

uint8_t HLT();

uint8_t ADD(char *ins, char*s);
uint8_t SUB(char *ins, char*s);
uint8_t INR(char *ins, char*s);
uint8_t DCR(char *ins, char*s);

// 2-Byte Instructions
