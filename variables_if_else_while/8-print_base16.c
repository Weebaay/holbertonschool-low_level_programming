#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0 always
 */

int main(void)
{
char base_seize[] = "0123456789abcdef";

for (int i = 0; i < 16; i++)
putchar(base_seize[i]);

putchar('\n');
return (0);
}
