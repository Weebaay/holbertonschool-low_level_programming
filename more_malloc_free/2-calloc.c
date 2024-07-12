#include "main.h"

/**
* _calloc - allocates memory for an array
*@nmemb: nulber of element
*@size: size of element
*
*Return: pointers of array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total, i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
