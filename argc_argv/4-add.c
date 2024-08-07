#include "main.h"


/**
*main - that adds positive number
*@argc: argument count
*@argv: argument of value
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *ag = argv[i];
		int number = 0;

		for (j = 0; ag[j] != '\0'; j++)
		{
			if (ag[j] < '0' || ag[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			number = number * 10 + (ag[j] - '0');
		}

		sum += number;
	}

	printf("%d\n", sum);
	return (0);
}
