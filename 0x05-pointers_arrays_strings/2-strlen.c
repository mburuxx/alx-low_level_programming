#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Points to the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		count++;

	return (count);
}
