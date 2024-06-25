#include "main.h"

/**
*print_rev - print a string in reverse
*@s: pointers
*
*Return: s[taille]
*/

void print_rev(char *s)
{
	int taille = 0;

	while (s[taille] != '\0')
	{
		taille++;
	}
	while (taille > 0)
	{
		taille--;
		_putchar(s[taille]);
	}
	_putchar('\n');
}
