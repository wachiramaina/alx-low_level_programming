#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
