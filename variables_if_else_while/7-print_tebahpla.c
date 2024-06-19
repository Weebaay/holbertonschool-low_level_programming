#include <stdio.h>

/**
 * main - prints the lower-case alphabet upside down,
 * followed by a new line.
 *
 * Return: 0 always
 */
int main(void)
{
char minus = 'z';

while   (minus >= 'a')
{
putchar(minus);
minus--;
}
putchar('\n');
return (0);
}
