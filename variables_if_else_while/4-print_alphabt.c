#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: 0.
 */
int main(void)
{
char min = 'a';

while (min <= 'z')
{
if (min != 'e' && min != 'q')
{
putchar(min);
}
min++;
}

putchar('\n');
return (0);
}
