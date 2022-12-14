#include "main.h"

/**
 * int _islower(int c) - Checks for a lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar(1);
	else
		_putchar(0);
	return (0);
}
