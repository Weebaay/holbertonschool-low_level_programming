#include "main.h"

/**
*_sqrt_recursion - return the natural square root a number
*@n: natural square root
*
*Return: result square root
*/

int _sqrt_recursion(int n)
{
		static int guess = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	guess++;
	return (_sqrt_recursion(n));
}
