#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @var: last digit of a number
 * Return:the last digit
 */
int print_last_digit(int var)
{
	int last_digit;

	if (var < 0)
		last_digit = -1 * (var % 10);
	else
		last_digit = var % 10;

	_putchar((last_digit) + '0');

	return (last_digit);
}
