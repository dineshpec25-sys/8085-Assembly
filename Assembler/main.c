#include <stdio.h>
#include <string.h>
#include <stdint.h>

int MOV(char *input);

int main()
{
    char line[9];
    FILE *fp;
    fp = fopen("/home/dinesh-p/8085-Assembly/Assembler/test.asm", "r");

    if(fp == NULL)
    {
        printf("File cannot be opened error !!\n");
        return 1;
    }
    uint8_t mc;

    while(fgets(line, 9, fp) != NULL )
    {
        mc = MOV(line);
        printf("%s\n", mc);
    }
    printf("%#x\n", mc);

    fclose(fp);

    return 0;
}