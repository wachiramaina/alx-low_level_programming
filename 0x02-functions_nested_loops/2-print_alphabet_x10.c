#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 1;

	for (; i <= 10; i++)
	{
		for (; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
