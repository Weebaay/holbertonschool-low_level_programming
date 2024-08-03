#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: Pointer to the number whose bit is to be set
 * @index: The index, starting at 0, of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	m = ~(1UL << index);

	*n &= m;

	return (1);
}
