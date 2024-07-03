#include "main.h"

/**
*factorial - return the factorial of a given number
*@n: the number for wich you want to calculate the factorial
*
*Return: result
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
