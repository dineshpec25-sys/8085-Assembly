#include <stdio.h>
#include <string.h>
#include <stdint.h>

int MOV(char *input);

int main()
{
    char line[9];
    FILE *fp;
    FILE *memory;
    
    fp = fopen("/home/dinesh-p/8085-Assembly/Assembler/data/test.asm", "r");
    memory = fopen("/home/dinesh-p/8085-Assembly/Assembler/data/memory.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened error !!\n");
        return 1;
    }
    if(memory == NULL)
    {
        printf("File cannot be opened error !!\n");
        return 1;
    }
    uint8_t opcode;
    uint16_t LC = 0x0000;

    while(fgets(line, 9, fp) != NULL)
    {
        opcode = MOV(line);

        fprintf(memory, "%#04x : %x\n", LC, opcode);

        LC++;
    }

    fclose(fp);
    fclose(memory);

    return 0;
}