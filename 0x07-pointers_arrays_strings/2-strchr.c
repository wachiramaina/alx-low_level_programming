#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to character c in string s
 * @c: character to consider first occurence
 * Return: pointer to 1st occurence of char c,otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
