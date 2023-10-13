#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 */

void more_numbers(void)
{
	int c, r;

	for (c = 0; c <= 10; c++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r >= 10)
				_putchar('1');
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
	}
}
