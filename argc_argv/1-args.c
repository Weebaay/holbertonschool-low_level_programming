#include "main.h"

/**
*main - program that prints the number of arguments
*@argc: argument count
*@argv: argument value
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
