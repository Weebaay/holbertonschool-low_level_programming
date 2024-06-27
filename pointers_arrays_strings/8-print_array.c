#include "main.h"

/**
* print_array - print n elements of as array of integers
*@a: is a pointers
*@n: is element of array
*Description: numbers must separated by comma followed by a space
*
*Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

	}
		printf("\n");
}
