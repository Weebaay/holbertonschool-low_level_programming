#include "main.h"

/**
* *_strchr - function that locates a charactere in a string
*@s: a pointer to the string to search for the character
*@c: the character to search for in the string
*
*Return: string (s)
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
