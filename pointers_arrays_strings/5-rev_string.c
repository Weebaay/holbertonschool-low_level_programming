#include "main.h"

/**
*rev_string - function rverse a string
*@s: pointers
*
*Return: s[i]
*/

void rev_string(char *s)
{
	int taille = 0;
	int i;

	while (s[taille] != '\0')
	{
		taille++;
	}
	for (i = taille - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
