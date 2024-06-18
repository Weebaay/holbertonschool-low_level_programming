#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char min = 'a';
char Maj = 'A';

while (min <= 'z')
{
putchar(min);
min++;
}
while (Maj <= 'Z')
{
putchar(Maj);
Maj++;
}
putchar('\n');
return (0);
}