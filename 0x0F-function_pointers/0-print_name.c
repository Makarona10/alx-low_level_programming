#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - Calls a function that prints a name.
  * 
  * @name: The name will be printed
  *
  * @f: Pointer
  *
  * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
