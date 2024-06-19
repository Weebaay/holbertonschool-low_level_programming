#include <stdio.h>

/**
 * main - imprime l'alphabet en minuscules suivi d'une nouvelle ligne
 * Return: Toujours 0
 */
int main(void)
{
char minus = 'a';

while   (minus <= 'z')
{
putchar(minus);
minus++;
}
putchar('\n');
return (0);
}
