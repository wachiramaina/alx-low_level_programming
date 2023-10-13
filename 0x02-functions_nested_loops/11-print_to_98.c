#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to consider
 */

void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
		for (c = n; c <= 98; c++)
		{
			if (c != 98)
				printf("%d, ", c);
			else
				printf("%d\n", c);
		}
	}
	else
	{
		for (c = n; c > 98; c--)
		{
			if (c != 98)
				printf("%d, ", c);
			else
				printf("%d\n", c);
		}
	}
}

