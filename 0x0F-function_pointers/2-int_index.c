#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  *
  * @array: The array will be compared
  *
  * @size: size of the array will be compared
  *
  * @cmp: a pointer to the function to be used to compare values
  *
  * Return: -1 if no integers found and if size <= 0
  * else return the index of the first found int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array && cmp && size)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}
