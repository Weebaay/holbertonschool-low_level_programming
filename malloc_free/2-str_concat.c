#include "main.h"

/**
* *str_concat - that concatenates two strings
*@s1: string one
*@s2: string two
*
*Return: string one and string two
*/

char *str_concat(char *s1, char *s2)
{
	const char *tp;
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	tp = s1;
	while (*tp++)
		len1++;
	tp = s2;
	while (*tp++)
		len2++;
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';
	return (result);
}
