#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: The length of the array
 *
 * @c: The char that the array will be initialized with
 *
 * Return: A pointer to the array or NULL of it fails, and NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ch = (char *) malloc(size);
	char cc = c;

	ch = &cc;

	if (size == 0 || ch == 0)
		return (NULL);
	else
		return (ch);
}