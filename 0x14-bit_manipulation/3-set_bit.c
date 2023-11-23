#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: The given number by user
 *
 * @index: the index will be set
 *
 * Return: 1 when success, -1 when fails
*/

int set_bit(unsigned long int *n, unsigned int index)
{
		if (index >= sizeof(n) * 8)
			return (-1);

		return (!!(*n |= 1L << index));
}
