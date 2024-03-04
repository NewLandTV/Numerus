#include "Variable.h"

void DeclareInteger32Variable(char* name)
{
    Integer32Variable* variable = &integer32VariableStack[integer32VariableCount++];

    strcpy(variable->name, name);

    variable->value = 0;
}

void GetInteger32VariableValue(char* name, int* out)
{
    for (int i = 0; i < integer32VariableCount; i++)
    {
        if (strcmp(integer32VariableStack[i].name, name) == 0)
        {
            *out = integer32VariableStack[i].value;
            
            return;
        }
    }

    *out = 0;
}

void SetInteger32Variable(char* name, int value)
{
    for (int i = 0; i < integer32VariableCount; i++)
    {
        if (strcmp(integer32VariableStack[i].name, name) == 0)
        {
            integer32VariableStack[i].value = value;
            
            return;
        }
    }
}