#include "main.h"

/**
*swap_int - function that swap the value
*@a: swap on b
*@b: swap on a
*
*Return: 0 always
*/

void swap_int(int *a, int *b)
{
	int c = *a;
		*a = *b;
		*b = c;
}
