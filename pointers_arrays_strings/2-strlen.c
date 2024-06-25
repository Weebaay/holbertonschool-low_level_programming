#include "main.h"

/**
*_strlen - return the length of a string
*@s: pointers
*
*Return: 0 always
*/

int _strlen(char *s)
{
	int taille = 0;

	while (*s != '\0')
	{
		taille++;
		s++;
	}
	return (taille);
}
