#include "main.h"

/**
*print_to_98 - print all natural numbers
*@n: n to 98
*
*Description: followed by a new line
*Return: 0 always
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
}
