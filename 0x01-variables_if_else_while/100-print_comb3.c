#include <stdio.h>
/**
 * main - Prints all possible combinations of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		/* putchar(i + '0'); */
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!((i == 8) && (j == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
