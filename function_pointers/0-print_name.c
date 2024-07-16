#include "function_pointers.h"

/**
*print_name - that print a name.
*@name:character string representing a name to be processed
*@f: pointer of function
*
*Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
