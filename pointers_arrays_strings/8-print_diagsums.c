#include "main.h"

/**
*print_diagsums - function print the sum of two diagonals of square
*@a: is a pointers to an array of integers
*@size: specifies the size of the matrix
*
*Return: 0
*/

void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
	}
	for (i = 0; i < size; i++)
	{
		s2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", s1, s2);
}
