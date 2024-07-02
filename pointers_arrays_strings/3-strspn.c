#include "main.h"

/**
*_strspn - function that gets the length of a prefixe
*@s: pointer vers chaine d'entré
*@accept: pointer vers chaine contenant les caractere accepter
*
*Return: Count
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			break;
		}
		if (*a == '\0')
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
