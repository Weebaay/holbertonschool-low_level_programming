#include "main.h"

/**
*reverse_array - function that reverse the content of an array of integers
*@a: is a array
*@n: number of elements of the array
*
*Return: void
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int i;

	while (start < end)
	{
		i = a[start];
		a[start] = a[end];
		a[end] = i;
		start++;
		end--;
	}
}
