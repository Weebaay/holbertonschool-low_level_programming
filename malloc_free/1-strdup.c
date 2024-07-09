#include "main.h"
#include <stdlib.h>

/**
* *_strdup - return pointer to a newly allocated space in memory
*@str: copy of input string
*
*Return: point to new duplicate string
*/

char *_strdup(char *str)
{
	const char *tp;
	size_t len;
	size_t i;
	char *tab;

	if (str == NULL)
	{
		return (NULL);
	}
	tp = str;

	while (*tp)
	{
		tp++;
	}
	len = tp - str;
	tab = malloc(len + 1);

	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		tab[i] = str[i];
	}
	return (tab);
}
