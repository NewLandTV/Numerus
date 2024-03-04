#include "IO.h"

void Print(char* string)
{
    char* c = strtok(string, " ");
    
    while (c)
    {
        int target = atoi(c);
        
        putchar(target);

        c = strtok(NULL, " ");
    }
}

void PrintInteger32(int value)
{
    printf("%d", value);
}