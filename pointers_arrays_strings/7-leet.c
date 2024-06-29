#include "main.h"

/**
* *leet - function change letters numbers
*@s: pointers
*
*Return: s
*/

char *leet(char *s)
{
	char lettr[256] = {0};
	char *p = s;

	lettr['a'] = '4';
	lettr['A'] = '4';
	lettr['e'] = '3';
	lettr['E'] = '3';
	lettr['o'] = '0';
	lettr['O'] = '0';
	lettr['t'] = '7';
	lettr['T'] = '7';
	lettr['l'] = '1';
	lettr['T'] = '1';

	while (*p)
	{
		if (lettr[(unsigned char)*p])
		{
			*p = lettr[(unsigned char)*p];
		}
		p++;
	}
	return (s);

}
