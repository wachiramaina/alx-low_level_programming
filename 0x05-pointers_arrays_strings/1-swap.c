#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to an int a's memory address
 * @b: pointer to an int b's memory address
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
