#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the pointer to a string
 */

void print_rev(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		v++;
	}

	for (v -= 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
