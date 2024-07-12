#include "main.h"

/**
* *array_range - that creates an array of integers
*@min: the first element of the array
*@max: the last element of the array
*
*Return: pointer of the array
*/

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
