#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * numbers must be separated by , followed by a space
 * number should be printed in ascending order
 * Return: 0 always
 */

int main(void)
{
int c;

for (c = 0; c <= 9; c++)
{
putchar('0' + c);

if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
