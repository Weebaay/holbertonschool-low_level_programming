#include "main.h"

/**
* *_strpbrk - function that searches a string for any of a set of bytes
*@s: string of charactere
*@accept: string of charactere
*
*Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}

		s++;
	}
	return (0);
}
