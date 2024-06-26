#include "main.h"

/**
*puts_half - print half of a string
*@str: string of character
*
*Return: void
*/

void puts_half(char *str)
{
	int taille = 0;

	int i;
	int half;

	while (str[taille] != '\0')
	{
		taille++;
	}

	if (taille % 2 == 0)
	{
		half = taille / 2;
	}
	else
	{
		half = (taille - 1) / 2 + 1;
	}
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
