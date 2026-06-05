#include </home/dinesh-p/8085-Assembly/Assembler/src/header.h>

int main()
{
    char line[9];
    FILE *fp;
    FILE *memory;
    FILE *hex_file;
    fp = fopen("/home/dinesh-p/8085-Assembly/Assembler/data/test.asm", "r");
    memory = fopen("/home/dinesh-p/8085-Assembly/Assembler/data/memory.txt", "w");
    hex_file = fopen("/home/dinesh-p/8085-Assembly/Assembler/data/hexfile.hex", "w");

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

    fprintf(memory, "Line\tAddress\tMachine Code\tSource Code\n");
    int n_line=0;

    while(fgets(line, 9, fp) != NULL)
    {
        opcode = parsing(line);

        fprintf(memory, "%d\t\t%#04x\t%xH\t\t\t\t%s\n",n_line++, LC, opcode, line);
        fprintf(hex_file, "%02X\n", opcode);

        LC++;
    }

    fclose(fp);
    fclose(memory);

    return 0;
}