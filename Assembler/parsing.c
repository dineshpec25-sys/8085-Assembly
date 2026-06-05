#include <stdio.h>
#include <string.h>



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
        printf("%d\n", i);
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
    printf("%s\n", input);
    printf("Instruction : %s\n", instruction);
    printf("Destination : %s\n", Destination);
    printf("Source : %s\n", source);

    return 0;
}