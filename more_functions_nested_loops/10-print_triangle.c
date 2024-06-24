#include "main.h"

/**
*print_triangle - print a triangle
*@size: is the size of triangle
*
*Return: 0 always
*/

void print_triangle(int size)
{
	int i, c, a;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (c = 0; c < size - i; c++)
		{
			_putchar(' ');
		}
		for (a = 0; a < i; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
}
