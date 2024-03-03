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

void Scan(char* out)
{
    scanf("%[^\n]s", out);
    getchar();
}