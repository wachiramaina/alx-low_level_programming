#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: string to point
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
