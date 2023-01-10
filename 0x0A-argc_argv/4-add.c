#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two numbers
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, j, add = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			add = add + atoi(argv[i]);
			for(j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
