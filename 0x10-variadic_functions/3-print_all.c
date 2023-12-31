#include "variadic_functions.h"
#include <stdarg.h>

/**
 * f_char - formatting for characters
 *
 * @sep: The seperator between strings
 *
 * @vl: A pointer to args
*/


void f_char(char *sep, va_list vl)
{
	printf("%s%c", sep, va_arg(vl, int));
}

/**
 * f_float - formatting for float numbers
 *
 * @sep: The seperator between numbers
 *
 * @vl: A pointer to args
*/

void f_float(char *sep, va_list vl)
{
	printf("%s%f", sep, va_arg(vl, double));
}

/**
 * f_string - formatting for strings
 *
 * @sep: The seperator between strings
 *
 * @vl: A pointer to args
*/

void f_string(char *sep, va_list vl)
{
	char *s;

	s = va_arg(vl, char*);
	switch ((int)(!s))
		case 1:
			s = "(nil)";

			printf("%s%s", sep, s);
}

/**
 * f_int - formatting for integer numbers
 *
 * @sep: The seperator between numbers
 *
 * @vl: A pointer to args
*/

void f_int(char *sep, va_list vl)
{
	printf("%s%d", sep, va_arg(vl, int));
}

/**
 * print_all - prints what user passes to it
 *
 * @format: The formatter for what user passes
 *
 * Return: void
*/



void print_all(const char *const format, ...)
{
	va_list vl;
	unsigned int x = 0;
	unsigned int y = 0;
	char *sep = "";

	spec specifiers[] = {
		{ "c", f_char },
		{ "i", f_int },
		{ "f", f_float },
		{ "s", f_string }
	};

	va_start(vl, format);

	while (format != NULL && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (format[x] == *specifiers[y].formatter)
			{
				specifiers[y].f(sep, vl);
				sep = ", ";
			}
			y++;
		}
		x++;
	}

	printf("\n");
	va_end(vl);
}
