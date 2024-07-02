#include "main.h"

/**
* *_strstr - function that locates substring
*@haystack: is the string
*@needle: is a substring
*
*Return: string haystack
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *h && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
