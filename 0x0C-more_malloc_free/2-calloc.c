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
	unsigned int x = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);

	ptr2 = ptr;
	for (; x < (nmemb * sizeof(int)); x++)
		*ptr2++ = 0;

	return (ptr);
}
