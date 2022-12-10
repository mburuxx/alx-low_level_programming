#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		putchar(j + '0');
		j = j + 1;
	}
	putchar('\n');
	return (0);
}
