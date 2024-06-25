#include "main.h"

/**
*_puts - print a string
*@str: string
*
*Return: str
*/

void _puts(char *str)
{
	int taille = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		taille++;
		str++;
	}
	_putchar('\n');
}
