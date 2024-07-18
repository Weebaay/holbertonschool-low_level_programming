#include "variadic_functions.h"

/**
 * print_numbers - print number and separator follewed by a new line
 * @separator: separator between each number
 * @n: number of argument print
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;

	unsigned int i;
	int som;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		som = va_arg(all, int);
		printf("%d", som);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(all);
	printf("\n");
}
