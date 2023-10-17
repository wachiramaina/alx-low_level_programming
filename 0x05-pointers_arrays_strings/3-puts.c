#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: string to point
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str++);
	}
	_puts('\n');
}
