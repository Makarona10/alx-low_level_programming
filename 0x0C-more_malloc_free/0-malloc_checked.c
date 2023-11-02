#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory
*
* @b: Size of memory will be allocated
*
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
