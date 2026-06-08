#include </home/dinesh-p/8085-Assembly/Assembler/src/header.h>

uint8_t ADD(char *ins, char*s)
{
    uint8_t machinecode=0b10000000;
    uint8_t *p=&machinecode;

    
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
        printf("Error Accquaired !!!\n");
    }

    return machinecode;
}

uint8_t SUB(char *ins, char*s)
{
    uint8_t machinecode=0b10010000;
    uint8_t *p=&machinecode;

    
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
        printf("Error Accquaired !!!\n");
    }

    return machinecode;
}

uint8_t INR(char *ins, char*s)
{
    uint8_t machinecode=0b00000100;
    uint8_t *p=&machinecode;

    
    if(!strcmp(s, "A"))
    {
        *p |= (7 << 3);
    }
    else if(!strcmp(s, "B"))
    {
        *p |= (0b000 << 3);
    }

    else if(!strcmp(s, "C"))
    {
        *p |= (0b001 << 3);
    }

    else if(!strcmp(s, "D"))
    {
        *p |= (0b010 << 3);
    }

    else if(!strcmp(s, "E"))
    {
        *p |= (0b011 << 3);
    }

    else if(!strcmp(s, "H"))
    {
        *p |= (0b100 << 3);
    }

    else if(!strcmp(s, "L"))
    {
        *p |= (0b101 << 3);
    }

    else if(!strcmp(s, "M"))
    {
        *p |= (0b110 << 3);
    }
    else
    {
        printf("Error Accquaired !!!\n");
    }

    return machinecode;
}

uint8_t DCR(char *ins, char*s)
{
    uint8_t machinecode=0b00000101;
    uint8_t *p=&machinecode;

    
    if(!strcmp(s, "A"))
    {
        *p |= (7 << 3);
    }
    else if(!strcmp(s, "B"))
    {
        *p |= (0b000 << 3);
    }

    else if(!strcmp(s, "C"))
    {
        *p |= (0b001 << 3);
    }

    else if(!strcmp(s, "D"))
    {
        *p |= (0b010 << 3);
    }

    else if(!strcmp(s, "E"))
    {
        *p |= (0b011 << 3);
    }

    else if(!strcmp(s, "H"))
    {
        *p |= (0b100 << 3);
    }

    else if(!strcmp(s, "L"))
    {
        *p |= (0b101 << 3);
    }

    else if(!strcmp(s, "M"))
    {
        *p |= (0b110 << 3);
    }
    else
    {
        printf("Error Accquaired !!!\n");
    }

    return machinecode;
}
