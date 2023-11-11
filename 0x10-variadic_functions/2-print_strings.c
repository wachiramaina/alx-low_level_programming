#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings - print strings
  *@separator: string
  *@n: arguments
  *Return: always 0
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;


	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		if (ps == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(ps, char *));
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ps);
	printf("\n");
}
