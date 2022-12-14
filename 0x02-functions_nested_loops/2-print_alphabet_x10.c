#include "main.h"

/**
 * print_alphabet_x10() - Prints the alphabet ten times
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
		i = i + 1;
	}
}
