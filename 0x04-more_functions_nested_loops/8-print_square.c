#include "main.h"

/**
 * print_square - prints a square
 * size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int c, r;

		for (c = 0; c < size; c++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
