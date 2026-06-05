#include <stdio.h>
#include <string.h>
#include <stdint.h>

uint8_t machinecode=0b00000000;
void instruction_opcode(char *instruct);
void destination_machine_code(char *des);
void source_machine_code(char *s);

int main()
{
    char input[8];
    fgets(input, 8, stdin);

    char instruction[4];
    instruction[3] = '\0';
    char Destination[2];
    Destination[1]='\0';
    char source[2];
    source[1]='\0';
    int status = 0;
    int j=0;

    for(int i = 0; input[i] != '\0';)
    {
        if(input[i] == ' ' && status == 0)
        {
            Destination[0] = input[++i];
            i++;
            status=1;
        }
        else if(input[i] == ',' && status == 1)
        {
            source[0]= input[++i];
            i++;
        }
        else
        {
            instruction[j++]=input[i++];
        }

    }
    
    instruction_opcode(instruction);
    destination_machine_code(Destination);
    source_machine_code(source);
    printf("%#x\n", machinecode);

    return 0;
}

void instruction_opcode(char *instruct)
{
    if(!strcmp(instruct, "MOV"))
    {
        machinecode |= (1 << 6);
    }
}

void destination_machine_code(char *des)
{
    if(!strcmp(des, "A"))
    {
        machinecode |= (7 << 3);
    }
    else if(!strcmp(des, "B"))
    {
        machinecode |= (0b000 << 3);
    }

    else if(!strcmp(des, "C"))
    {
        machinecode |= (0b001 << 3);
    }

    else if(!strcmp(des, "D"))
    {
        machinecode |= (0b010 << 3);
    }

    else if(!strcmp(des, "E"))
    {
        machinecode |= (0b011 << 3);
    }

    else if(!strcmp(des, "H"))
    {
        machinecode |= (0b100 << 3);
    }

    else if(!strcmp(des, "L"))
    {
        machinecode |= (0b101 << 3);
    }

    else if(!strcmp(des, "M"))
    {
        machinecode |= (0b110 << 3);
    }
    else
    {
        printf("Error Accquaired !!!\n");
        return ;
    }

    return ;
}

void source_machine_code(char *s)
{
    if(!strcmp(s, "A"))
    {
        machinecode |= (7 << 0);
    }
    else if(!strcmp(s, "B"))
    {
        machinecode |= (0b000 << 0);
    }

    else if(!strcmp(s, "C"))
    {
        machinecode |= (0b001 << 0);
    }

    else if(!strcmp(s, "D"))
    {
        machinecode |= (0b010 << 0);
    }

    else if(!strcmp(s, "E"))
    {
        machinecode |= (0b011 << 0);
    }

    else if(!strcmp(s, "H"))
    {
        machinecode |= (0b100 << 0);
    }

    else if(!strcmp(s, "L"))
    {
        machinecode |= (0b101 << 0);
    }

    else if(!strcmp(s, "M"))
    {
        machinecode |= (0b110 << 0);
    }
    else
    {
        printf("Error Accquaired !!!\n");
        return ;
    }

    return ;
}