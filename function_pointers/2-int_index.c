#include "function_pointers.h"

/**
 * int_index - searches for an integers
 * @array: the array to searche
 * @size: size of array
 * @cmp: pointer to function to be use
 *
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
