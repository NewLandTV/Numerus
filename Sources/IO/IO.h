#ifndef __IO_H__
#define __IO_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_IO_BUFFER_LENGTH 1024

void Print(char* string);
void PrintInteger32(int value);
void Scan(char* out);
void ScanInteger32(int* out);

#endif