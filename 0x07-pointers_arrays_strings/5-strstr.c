#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string t compare
 * @needles: substring to compare
 * Return: pointer to beginning of located substring,
 * otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack ++)
	{
	char *i = haystack;
	char *j = needle;

	while (*i == *j && *j != '\0')
	{
		i++;
		j++;
	}
	if (*j == '\0')
		return (haystack);
	}
	return (NULL);
}
