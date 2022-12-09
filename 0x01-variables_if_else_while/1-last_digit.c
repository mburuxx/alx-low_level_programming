#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("The last digit of %d is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("The last digit of %d is zero\n", n);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("The last digit of %d is less than 6 and not zero\n", n);
	}
	return (0);
}
