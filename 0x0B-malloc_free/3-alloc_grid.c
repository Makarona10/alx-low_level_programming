#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: The width of 2d array
 *
 * @height: The height of 2d array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int x;
	int *ptr;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc((width * height) * sizeof(int));

		if (ptr == NULL)
			return (NULL);

	for (x = 0; x < (width * height); x++)
	{
		ptr[x] = 0;
	}
	arr = &ptr;

	return (arr);
}
