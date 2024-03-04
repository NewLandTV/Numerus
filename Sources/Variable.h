#ifndef __VARIABLE_H__
#define __VARIABLE_H__

#include <string.h>

#define MAX_VARIABLE_NAME_LENGTH 32

typedef struct _Integer32Variable
{
    char name[MAX_VARIABLE_NAME_LENGTH];
    int value;
} Integer32Variable;

int integer32VariableCount;

Integer32Variable integer32VariableStack[MAX_VARIABLE_NAME_LENGTH];

void DeclareInteger32Variable(char* name);
void GetInteger32VariableValue(char* name, int* out);
void SetInteger32Variable(char* name, int value);

#endif