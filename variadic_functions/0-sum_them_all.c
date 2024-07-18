#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: first parameters
 *
 * Return: 0 if null or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	int s;

	if (n == 0)
	{
		return (0);
	}
	va_start(all, n);
	s = 0;

	for (i = 0; i < n; i++)
	{
		s += va_arg(all, int);
	}
	va_end(all);
	return (s);
}
