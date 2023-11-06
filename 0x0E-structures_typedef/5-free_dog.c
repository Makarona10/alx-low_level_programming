#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory
 *
 * @d: The allocated memory that will be freed
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
