#include <stdio.h>

/**
 * main - prints all single-digit numbers in base 10 starting from 0,
 * followed by a new line.
 * return: 0 always
 */

int main(void)
{
int num = 0;

while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
