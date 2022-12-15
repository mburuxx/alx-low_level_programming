#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int m;

		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
