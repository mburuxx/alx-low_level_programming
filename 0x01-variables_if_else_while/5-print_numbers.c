#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d",i);
		i = i + 1;
	}
	printf("\n");
	return (0);
}
