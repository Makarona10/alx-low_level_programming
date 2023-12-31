#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: The first integer will be swapped
 *
 * @b: The second integer will be swapped
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
