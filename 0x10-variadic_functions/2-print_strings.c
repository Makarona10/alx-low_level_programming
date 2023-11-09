#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints numbers followed by a new line
 *
 * @n: Numbers of strings will be passed
 *
 * @separator: The string will that seperate integers
 *
 * Return: void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int x;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(vl, n);
	for (x = 0; x < n; x++)
	{
		printf("%s%s", (s = va_arg(vl, char*)) ? s : "(nil)",
		(x < n) ? (separator ? separator : "") : "\n");
	}
}
