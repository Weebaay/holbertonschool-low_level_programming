#include "main.h"

/**
*times_table - prints the 9 times tables
*
*description: starting with 0.
*
*Return: 0 always
*/

void times_table(void)
{
	int i, n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i < 10; i++)
		{
			int r = n * i;

			if (r >= 10)
		{
			_putchar('0' + r / 10);
		}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + r % 10);

		if (i < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
