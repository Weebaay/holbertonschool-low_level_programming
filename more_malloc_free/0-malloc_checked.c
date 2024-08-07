#include "main.h"

/**
* *malloc_checked - allocates memory using
*@b: number of bytes
*
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
