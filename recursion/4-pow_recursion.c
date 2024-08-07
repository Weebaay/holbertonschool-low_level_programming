#include "main.h"

/**
*_pow_recursion - function that return the value
*@x: value
*@y: power
*
*Return: Result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
