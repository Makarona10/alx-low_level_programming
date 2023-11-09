#include "variadic_functions.h"
#include <stdarg.h>

void print_all(const char* const format, ...)
{
	va_list l;
	unsigned int x = 0, s = 0;
	char* a;

	va_start(l, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{
		case 'c':
			switch (s)
			{
			case 1: printf(", ");
			}
			s = 1;
			printf("%c", va_arg(l, int));
			break;
		case 'i':
			switch (s)
			{
			case 1: printf(", ");
			}
			s = 1;
			printf("%i", va_arg(l, int));
			break;
		case 'f':
			switch (s)
			{
			case 1: printf(", ");
			}
			s = 1;
			printf("%f", va_arg(l, double));
			break;
		case's':
			switch (s)
			{
			case 1: printf(", ");
			}
			s = 1;
			a = va_arg(l, char);
			if (a)
			{
				printf("%s", a);
				break;
			}
			printf("%p", a);
			break;
		}
		x++;
	}
	printf("\n");
	va_end(l);
}
