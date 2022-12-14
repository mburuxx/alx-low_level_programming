#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: Integer to be computed
 *
 * Return: Absolute value of an integer
 */

int _abs(int c)
{
	if (c < 0)
		return (c - (2 * c));
	else
		return (c);
}
