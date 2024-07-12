#ifndef main_h
#define main_h
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>


int _putchar(char c);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

void *malloc_checked(unsigned int b);

char *_strncat(char *dest, char *src, int n);

char *string_nconcat(char *s1, char *s2, unsigned int n);

char *_strcat(char *dest, char *src);

int _strlen(char *s);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

#endif