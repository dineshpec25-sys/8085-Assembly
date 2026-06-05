#include </home/dinesh-p/8085-Assembly/Assembler/src/header.h>

void instruction_opcode(char *instruct, uint8_t *p);
void destination_machine_code(char *des, uint8_t *p);
void source_machine_code(char *s, uint8_t *p);

uint8_t MOV(char *instruction, char *Destination, char *source)
{
    uint8_t machinecode=0b00000000;
    uint8_t *p=&machinecode;

    instruction_opcode(instruction, p);
    destination_machine_code(Destination, p);
    source_machine_code(source, p);

    return machinecode;
}

void instruction_opcode(char *instruct, uint8_t *p)
{
    if(!strcmp(instruct, "MOV"))
    {
        *p |= (1 << 6);
    }
}

void destination_machine_code(char *des, uint8_t *p)
{
    if(!strcmp(des, "A"))
    {
        *p |= (7 << 3);
    }
    else if(!strcmp(des, "B"))
    {
        *p |= (0b000 << 3);
    }

    else if(!strcmp(des, "C"))
    {
        *p |= (0b001 << 3);
    }

    else if(!strcmp(des, "D"))
    {
        *p |= (0b010 << 3);
    }

    else if(!strcmp(des, "E"))
    {
        *p |= (0b011 << 3);
    }

    else if(!strcmp(des, "H"))
    {
        *p |= (0b100 << 3);
    }

    else if(!strcmp(des, "L"))
    {
        *p |= (0b101 << 3);
    }

    else if(!strcmp(des, "M"))
    {
        *p |= (0b110 << 3);
    }
    else
    {
        // printf("Error Accquaired !!!\n");
        return ;
    }

    return ;
}

void source_machine_code(char *s, uint8_t *p)
{
    if(!strcmp(s, "A"))
    {
        *p |= (7 << 0);
    }
    else if(!strcmp(s, "B"))
    {
        *p |= (0b000 << 0);
    }

    else if(!strcmp(s, "C"))
    {
        *p |= (0b001 << 0);
    }

    else if(!strcmp(s, "D"))
    {
        *p |= (0b010 << 0);
    }

    else if(!strcmp(s, "E"))
    {
        *p |= (0b011 << 0);
    }

    else if(!strcmp(s, "H"))
    {
        *p |= (0b100 << 0);
    }

    else if(!strcmp(s, "L"))
    {
        *p |= (0b101 << 0);
    }

    else if(!strcmp(s, "M"))
    {
        *p |= (0b110 << 0);
    }
    else
    {
        // printf("Error Accquaired !!!\n");
        return ;
    }

    return ;
}