#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n - number of times character '\' should be printed
 */

void print_diagonal(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                int i, j;

                for (i = 0; i < n; i++)
                {
			for (j = 0; j < n; j++)
			{
				if (j == 1)
					_putchar('\\');
				else if (j < 1)
					_putchar(' ');
			}
			_putchar('\n');
		}
        }
}
