#include "main.h"

/**
 * __strlen - returns the length of a string
 * @s: string pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
