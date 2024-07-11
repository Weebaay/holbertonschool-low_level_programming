#include "main.h"

/**
* *string_nconcat - that concatenaates two strings
*@s1: string one
*@s2: string two
*@n: specify how many charactere in string
*
*Return: pointers
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total;
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	total = len1 + n;

	str = (char *)malloc((total + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[len1 + j] = s2[j];
	}

	str[total] = '\0';
	return (str);
}
