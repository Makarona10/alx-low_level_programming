#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: number will be converted
 *
 * Return: Converted number if success or 0 if failed
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, x = 0;

	if (b == NULL)
		return (0);

	for (; b[x]; x++)
	{
		if (b[x] == '0' || b[x] == '1')
			res = res * 2 + (b[x] - '0');
		else
			return (0);
	}
	return (res);
}
