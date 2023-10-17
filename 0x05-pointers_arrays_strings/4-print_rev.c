#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the pointer to a string
 */

void print_rev(char *s)
{
	int length = 0;
	int v;

	for (v = 0; s[v] != '\0'; v++)
	{
		lenght++;
	}
	for (v = 0; v < length / 2; v++)
	{
		j = s[v];
		char j;
		s[v] = s[length - 1 - v];
		s[length - 1 - v] - j;
	}
}
