#include "main.h"

/**
*print_alphabet - prints the alphabet in lowercase
*you can only use _putchar
*followed by a new line
*Return : 0 always
 */

void print_alphabet(void)
{
char c = 'a';

{
while (c <= 'z')
{
_putchar(c);
c++;
}
}
_putchar('\n');
}
