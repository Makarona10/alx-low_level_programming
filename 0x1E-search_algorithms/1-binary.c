#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: An array will be searched
 *
 * @size: Size of the array
 *
 * @value: The value will be searched for
 *
 * Return: The first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, x, l, h;

	h = size - 1;
	l = 0;
	mid = size;

	for (; size > 0; size--)
	{
		mid = (h + l) / 2;
		printf("Searching in array: ");
		for (x = l; x <= h; x++)
		{
			if (x != h)
				printf("%d, ", array[x]);
			else
				printf("%d", array[x]);
		}
		puts("\n");
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
