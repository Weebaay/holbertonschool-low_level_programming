#include "main.h"

/**
* *create_array - creates array of chars and initializes it with specific char
*@size: the size of memory
*@c: specific char
*
*Return: char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;


	if (size == 0)
	{
		return (NULL);
	}
	tab = malloc(size);

	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
