#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x_result = n ^ m;
unsigned int count = 0;

while (x_result)
{
	count += x_result & 1;
	x_result >>= 1;
}
return (count);
}
