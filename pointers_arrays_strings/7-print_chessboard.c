#include "main.h"

/**
*print_chessboard - function that prints the chessboard
*@a: is a pointers to one-dimensional array of 8 element of type
*
*Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int c, l;

	for (c = 0; c < 8; c++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[c][l]);
		}
		_putchar('\n');
	}
}
