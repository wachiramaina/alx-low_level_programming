#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument 1
 * @argv: argument 2
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void) argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
