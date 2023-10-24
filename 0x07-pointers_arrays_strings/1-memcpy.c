#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to memory area dest
 * @src: pointer to memory area src
 * @n: bytes of memory area
 * Return: a poinhter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
