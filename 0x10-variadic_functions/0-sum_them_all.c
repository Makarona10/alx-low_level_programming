#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: Numbers of integers will be passed
 *
 * Return: The sum of its arguments
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(vl, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(vl, unsigned int);
	}
	va_end(vl);

	return (sum);
}
