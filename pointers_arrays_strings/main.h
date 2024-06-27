#ifndef main_h
#define main_h
#include <unistd.h>
#include <stdio.h>


int _putchar(char c);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void puts2(char *str);

void puts_half(char *str);

char *_strcpy(char *dest, char *src);

void print_array(int *a, int n);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

#endif