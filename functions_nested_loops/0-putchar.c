#include "main.h"

/**
 * main - print _putchar
 * followed by a new line
 * Return: 0 always
 */

int main(void)
{
char c[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}

