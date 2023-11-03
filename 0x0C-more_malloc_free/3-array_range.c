#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an array of integers
  * @min: argument 1
  * @max: argument 2
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
	{
		return (NULL);
		free(a);
	}
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
	free(a);
}
