#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: A pointer to the first element in the index
 *
 * @size: The size of the array of integers
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int x, y,
	sum1 = 0,
	sum2 = 0;

	for (x = 0; x < (size * size); x = x + (size + 1))
	{
		sum1 = sum1 + *(a + x);
	}
	for (y = size - 1; y <= (size * size - size); y = y + (size - 1))
	{
		sum2 = sum2 + *(a + y);
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
