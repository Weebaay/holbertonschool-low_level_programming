#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0 always
 */

int main(void)
{
char digit;
char letter;

for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
