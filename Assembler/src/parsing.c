#include </home/dinesh-p/8085-Assembly/Assembler/src/header.h>

uint8_t parsing(char *input)
{
    char instruction[4];
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
    instruction[3] = '\0';
    printf("%s\n", input);
    printf("Instruction : %s\n", instruction);
    printf("Destination : %s\n", Destination);
    printf("Source : %s\n", source);

    if(!strcmp(instruction, "HLT"))
    {
        return HLT();
    }
    else if(!strcmp(instruction, "ADD"))
    {
        return ADD(instruction, Destination);
    }
    else if(!strcmp(instruction, "SUB"))
    {
        return SUB(instruction, Destination);
    }
    else if(!strcmp(instruction, "INR"))
    {
        return INR(instruction, Destination);
    }
    else if(!strcmp(instruction, "DCR"))
    {
        return DCR(instruction, Destination);
    }

    return MOV(instruction, Destination, source);

}

uint8_t HLT()
{
    return 0b01110110;
}