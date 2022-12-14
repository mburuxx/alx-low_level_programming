#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @c: number whose last digit is returned
 *
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = (c % 10);
	if (c < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
