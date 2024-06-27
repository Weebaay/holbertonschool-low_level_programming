#include "main.h"

/**
*_atoi - function that convert a string to an integers
*@s: is a pointers
*Description: the numbers in the string can be preceded by an infinite numbers
*
*Return: interger n * r
*/

int _atoi(char *s)
{
	int i, n, r;

	i = 0;
	r = 0;
	n = 1;

	while (s[i] == 32 || (s[i] >= 9 && s[i] < 14))
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			n = -n;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + ((int)s[i] - 48);
		i++;
	}
	return (n * r);
}
