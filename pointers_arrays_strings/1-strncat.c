#include "main.h"

/**
* *_strncat - function that concatenates two string
*@dest: string of destination
*@src: string of source
*@n: maximum number of octers to copy
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int taille, i;

	taille = 0;
	i = 0;

	while (dest[taille] != '\0')
	{
		taille++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[taille + i] = src[i];
		i++;
	}
	dest[taille + i] = '\0';
	return (dest);
}
