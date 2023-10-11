#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints integers starting from the input to 98
 *
 * @n: The number the counter starts from
 *
 * Return: void
*/

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	else if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	printf("98\n");
}

