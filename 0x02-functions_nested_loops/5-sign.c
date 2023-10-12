#include "main.h"

/**
 *  print_sign - prints the sign of a number.
 *  @n: number to check
 *  Return: if n>0 return 1 and print +
 *  if n<0 return -1 and print -
 *  if n=0 return 0 and print 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
