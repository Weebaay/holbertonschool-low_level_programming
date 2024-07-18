#include "variadic_functions.h"

/**
 * print_strings - prints string, followed by a new line
 * @separator: separator between each strings
 * @n: string of charactere
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all;

	unsigned int i;
	char *str;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(all, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (str != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(all);
	printf("\n");
}
