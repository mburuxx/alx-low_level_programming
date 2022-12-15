#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * for multiples of three, Fizz is printed instead of the number
 * for multiples of five, Buzz is printed instead of the number
 * for multiples of both three and five, FizzBuzz

 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3) == 0 && (m % 5) == 0)
			printf("FizzBuzz ");

		else if ((m % 3) == 0)
			printf("Fizz ");

		else if ((m % 5) == 0)
			printf("Buzz ");

		else
			printf("%d ", m);
	}
	printf("\n");

	return (0);
}
