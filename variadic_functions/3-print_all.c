#include "variadic_functions.h"
/**
 * print_all - This function prints arguments of various types based
 * on a format string.
 * @format: A format string specifying the types of the subsequent arguments
 *
 * Return: this function does not return value
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0, fa = 1;
	char *str, ch;
	int c;
	float nb;

	va_start(all, format);
	while (format && format[i])
	{
		if (!fa)
		{
			printf(", ");
		}
		switch (format[i])
		{
		case 'c':
			ch = va_arg(all, int);
			printf("%c", ch);
			fa = 0;
			break;
		case 'i':
			c = va_arg(all, int);
			printf("%d", c);
			fa = 0;
			break;
		case 'f':
			nb = (float) va_arg(all, double);
			printf("%f", nb);
			fa = 0;
			break;
		case 's':
			str = va_arg(all, char *);
			if (str == NULL)
				printf("(nil)");
			else
			{
				printf("%s", str);
				fa = 0;
			}
			break;
		default:
		fa = 1;
			break;
		}
		i++;
	}
	va_end(all);
	printf("\n");
}
