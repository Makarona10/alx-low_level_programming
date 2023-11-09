#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints what user passes to it
 *
 * @format: The formatter for what user passes
 *
 * Return: void
*/

void print_all(const char* const format, ...)
{
	va_list vl;
	unsigned int j = 0, y = 0;
	char *s;

	va_start(vl, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				switch (y)
				{
					case 1: printf(", ");
				}
				y = 1;
				printf("%c", va_arg(vl, int));
				break;
			case 'i':
				switch (y)
				{
					case 1: printf(", ");
				}
				y = 1;
				printf("%i", va_arg(vl, int));
				break;
			case 'f':
				switch (y)
				{
					case 1: printf(", ");
				}
				y = 1;
				printf("%f", va_arg(vl, double));
				break;
			case's':
				switch (y)
				{
					case 1: printf(", ");
				}
				y = 1;
				s = va_arg(vl, char*);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("%s", s);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(vl);
}
