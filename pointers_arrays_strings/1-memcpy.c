#include "main.h"

/**
* *_memcpy - function that copies memory area.
*@dest: pointers of block memory destination
*@src: pointers of block memory source
*@n: the number of bytes to be copied from source to destination
*
*Return: the function returns the original pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
