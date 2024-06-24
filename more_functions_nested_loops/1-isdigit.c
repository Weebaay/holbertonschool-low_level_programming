#include "main.h"

/**
* _isdigit - checks for a digit.
*@c: see 0 through 9
*
*Return: 1 if c is a digit or 0.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
