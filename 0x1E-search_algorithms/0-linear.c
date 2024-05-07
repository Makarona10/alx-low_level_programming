#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: An array will be searched
 *
 * @size: Size of the array
 *
 * @value: The value will be searched for
 *
 * Return: The first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (array[x] == value)
			return (x);
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	return (-1);
}
