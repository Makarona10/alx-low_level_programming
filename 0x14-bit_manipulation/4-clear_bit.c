#include "main.h"

/**
 * clear_bit - clears the bit at the index
 *
 * @n: The given number
 *
 * @index: The index will be cleared
 *
 * Return: 1 when success, -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
