#ifndef function_pointers_h
#define function_pointers_h
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif