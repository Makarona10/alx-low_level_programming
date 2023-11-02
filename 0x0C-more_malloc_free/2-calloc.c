#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: Number of array elements
 *
 * @size: The size of each element
 *
 * Return: a pointer to the allocated space
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int alloc, x = 0;

	alloc = size * nmemb;

	if (alloc == 0)
		return (NULL);

	ptr = malloc(alloc);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (; x < alloc; x++)
		*ptr++ = 0;

	return (ptr);
}
