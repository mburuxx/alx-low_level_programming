#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: Points to the first integer to be swapped
 * @b: Points to the second integer to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
