#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct spec - The print func specifier
 *
 * @specifier: the format specifier passed
 *
 * @f: The function will be passed
*/

typedef struct specifier
{
	char *formatter;
	void (*f)(char *, va_list);
} spec;

#endif
