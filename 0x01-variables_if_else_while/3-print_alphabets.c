#include <stdio.h>
/**
 * main - Print the alphabet in both uppercase and lowercase
 *
 * Return: 0 (Success)
 */

int main (void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
