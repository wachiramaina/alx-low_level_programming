#include "main.h"

/**
 * _abs - computes absolute value of an integer.
 *
 * @c: number to check
 * Return: absolute value or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
