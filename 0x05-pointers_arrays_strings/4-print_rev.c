#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 *
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	len = len - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
