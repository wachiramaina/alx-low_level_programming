#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - print numbers
  *@separator: string
  *@n: number of integers passed
  *Return: always o
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i;

	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pn, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(pn);
	printf("\n");
}
