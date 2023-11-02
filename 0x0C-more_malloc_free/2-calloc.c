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
	int *ptr, *ptr2;
	unsigned int alloc, x = 0;

	alloc = size * nmemb;

	if (alloc == 0)
		return (NULL);

	ptr = malloc(alloc);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr;
	for (; x < alloc; x++)
		*ptr2++ = 0;

	return (ptr);
}
