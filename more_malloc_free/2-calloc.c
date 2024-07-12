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

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
