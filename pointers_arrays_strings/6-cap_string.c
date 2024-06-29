#include "main.h"

/**
* *cap_string - function that capitalize all words of a string
*@s: pointers
*Description: separator of words is spae tabulation new line
*
*Return: string s
*/

char *cap_string(char *s)
{
	int c = 1;
	char *p = s;

	while (*p)
	{
		if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';' ||
			*p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' ||
			*p == ')' || *p == '{' || *p == '}')
	{
		c = 1;
	}
	else if (c && *p >= 97 && *p <= 122)
	{
		*p -= 32;
		c = 0;
	}
	else
	{
		c = 0;
	}
	p++;
	}
	return (s);
}
