#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: number of arguments
 * @argv: character array pointing to the arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
