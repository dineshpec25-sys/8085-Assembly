#include </home/dinesh-p/8085-Assembly/Assembler/src.2/include.h>


int main()
{
    char line[9]; // I am going to exatct line by line from the file and store it in this string

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

    uint16_t LC = 0x0000;

    int n_line=1;

    while(fgets(line, 9, fp) != NULL)
    {
        char *ins;
        ins = parsing(line);

        uint8_t opcode=solve(line, ins);
        fprintf(hex_file, "%02X\n", opcode);

        LC++;
    }

    fclose(fp);
    fclose(memory);

    return 0;
    
}