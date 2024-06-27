#include "main.h"

/**
* *_strcat - function that concatenats two strings
*@dest: string 1
*@src: string 2
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
