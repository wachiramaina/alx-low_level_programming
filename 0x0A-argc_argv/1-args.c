#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument 1
 * @argv: argument 2
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
