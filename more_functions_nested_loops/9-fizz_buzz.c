#include <stdio.h>

/**
*main - print the numbers from 1 to 100
*Description: instead of the number and for the multiple
*
*Return: 0 always
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		if (i == 100)
		{
			printf("\n");
		}
	}
	return (0);
}
