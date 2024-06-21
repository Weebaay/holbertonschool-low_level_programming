#include "main.h"

/**
* _islower - int c check for lowercase character.
*@c: cheks letters
*
*Return: 1 if C  is lowercase
*/

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
