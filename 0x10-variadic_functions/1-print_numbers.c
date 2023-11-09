#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @n: Numbers of integers will be passed
 *
 * @separator: The string will that seperate integers
 *
 * Return: void
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int x;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(vl, n);
	for (x = 0; x < n; x++)
	{
	printf("%d%s", va_arg(vl, int),
		(x < (n - 1)) ? (separator ? separator : "") : "\n");
	}

}
