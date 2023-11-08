#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function given
  * as a parameter on each element of an array
  *
  * @array: The array will be iterated
  *
  * @size: saize of the array
  *
  * @action: a pointer to a function
  *
  * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array && action && size)
	{
		while (x < size)
			action(array[x++]);
	}
}
