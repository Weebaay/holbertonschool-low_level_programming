#include "main.h"

/**
*print_last_digit - prints the last digit of a number.
*@n: last digi check
*Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int digit_ = n % 10;

	if (digit_ < 0)
	{
		digit_ = -digit_;
	}
	_putchar('0' + digit_);
	return (digit_);
}
