#include "main.h"

/**
*print_line - draws a straight line in the terminal
*@n: ckeck character
*
*Return: 0 always
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
			_putchar('_');
	}
	_putchar('\n');
	if (n <= 0)
	{
		_putchar('\n');
	}
}
