#include "main.h"

/**
 * print_alphabet - print lowercase alphabets followed by new line
 *
 * Return: void 
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
