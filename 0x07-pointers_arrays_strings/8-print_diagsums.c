#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: pointer to array
 * @size: size of array
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int sumA, sumB, y;

	sumA = 0;
	sumB = 0;

	for (y = 0; y < size; y++)
	{
		sumA = sumA + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sumB += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sumA, sumB);
}
