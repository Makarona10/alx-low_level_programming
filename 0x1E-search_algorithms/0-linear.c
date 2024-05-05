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
	size_t mid;
	int l, h;

	h = size - 1;
	l = 0;

	for (; size > 0; size--)
	{
		mid = (h + l) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
