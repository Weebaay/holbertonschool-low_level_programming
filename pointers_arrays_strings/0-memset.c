#include "main.h"

/**
* *_memset - function that fils memory with a constant byte.
*@s: pointers to memory block to be filled
*@b: the value of the constant byte
*@n: the number of bytes to fill the memory block.
*
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p = b;
		p++;
	}
	return (s);
}
