#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s
 * with the constant byte b.
 * @s: pointer to n bytes of memory
 * @b: value to add to memory address pointed to by s.
 * @n: bytes of memory to be filled.
 * Return: a pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
