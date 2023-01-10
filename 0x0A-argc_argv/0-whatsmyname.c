#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: array pointing to strings on command line
 *
 * Return: Always 0
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
