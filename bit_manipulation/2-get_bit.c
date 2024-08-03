#include "main.h"

/**
 *  get_bit - Returns the value of a bit at a given index
 *  @n: The number whose bit you want to get
 *  @index: The index, starting from 0, of the bit you want to get
 *
 *  Return: The value of the bit at the index or -1 if an error has occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	m = 1UL << index;

	if ((n & m) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
