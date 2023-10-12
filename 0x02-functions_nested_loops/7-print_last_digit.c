#include "main.h"

/**
 * print_last_digit - prints last digit of a number.
 * @c: argument 1 of function print_last_digit.
 * Return: value of the last digit.
 */

int print_last_digit(int c)
{
	int i;

	i = (c % 10);
	if (i < 0)
	{
		i = (i * -1);
	}
	_putchar(i + '0');
	return (i);
}
