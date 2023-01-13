#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 *
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	while(s[index] != '\0')
	{
		len += 1;
		index++;
	}

	index = len;
	while (s[index] >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
