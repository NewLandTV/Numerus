#include "Numerus.h"

int eax;

int main(int argc, char** argv)
{
    Run(argv[1]);

    return 0;
}

void Run(char* path)
{
    FILE* file = fopen(path, "r");

    if (file == NULL)
    {
        printf("File does not exist!");

        return 1;
    }

    for (char line[MAX_IO_BUFFER_LENGTH]; fgets(line, sizeof(line), file) != NULL;)
    {
        if (line[0] == '?')
        {
            continue;
        }

        if (line[strlen(line) - 1] == '\n')
        {
            line[strlen(line) - 1] = 0;
        }

        switch (line[0])
        {
        case '0':
            switch (line[1])
            {
            case '1':
            {
                char* name = strtok(line, " ");

                name = strtok(NULL, " ");

                int out;

                scanf("%d", &out);
                SetInteger32Variable(name, out);

                break;
            }
            case '3':
                switch (line[2])
                {
                case '2':
                    switch (line[3])
                    {
                    case '9':
                        switch (line[4])
                        {
                        case '5':
                        {
                            int a;
                            int b;
                            char* name = strtok(line, " ");

                            GetInteger32VariableValue(strtok(NULL, " "), &a);
                            GetInteger32VariableValue(strtok(NULL, " "), &b);

                            eax = a + b;
                        
                            break;
                        }
                        }
                    }

                    break;
                }

                break;
            case '4':
            {
                int value;
                char* name = strtok(line, " ");

                name = strtok(NULL, " ");

                GetInteger32VariableValue(name, &value);
                PrintInteger32(value);

                break;
            }
            case '5':
            {
                char* ptr = strtok(line, " ");
                char name[MAX_VARIABLE_NAME_LENGTH];

                ptr = strtok(NULL, " ");

                strcpy(name, ptr);

                ptr = strtok(NULL, " ");

                if (strcmp(ptr, "32") == 0)
                {
                    DeclareInteger32Variable(name);
                }

                break;
            }
            case '8':
                switch (line[2])
                {
                case '2':
                {
                    char* registerName = strtok(line, " ");

                    registerName = strtok(NULL, " ");
                    
                    if (strcmp(registerName, "696588") == 0)
                    {
                        PrintInteger32(eax);
                    }

                    break;
                }
                }

                break;
            }

            break;
        default:
            Print(line);
            
            break;
        }
    }

    fclose(file);
}