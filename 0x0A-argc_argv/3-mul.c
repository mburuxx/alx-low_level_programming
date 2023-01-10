#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: number of arguments provided
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if success and 1 if failure
 */

int main(int argc, char *argv[])
{
	int mul;

	if (!(argc > 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
