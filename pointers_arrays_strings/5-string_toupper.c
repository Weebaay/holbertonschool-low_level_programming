#include "main.h"
#include <ctype.h>

/**
* *string_toupper - function that change all lowercase of a string to upper
*@s: string
*
*Return: p
*/

char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (p);
}
