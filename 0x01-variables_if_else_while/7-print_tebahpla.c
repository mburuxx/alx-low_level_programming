#include <stdio.h>
/**
 * main - Print the alphabet using putchar in reverse order
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
