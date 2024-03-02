#include "Numerus.h"

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

int main(int argc, char** argv)
{
    FILE* file = fopen(argv[1], "r");

    if (file == NULL)
    {
        printf("File does not exist!");

        return 1;
    }

    for (char line[MAX_LINE_LENGTH]; fgets(line, sizeof(line), file) != NULL;)
    {
        Print(line);
    }

    fclose(file);

    return 0;
}