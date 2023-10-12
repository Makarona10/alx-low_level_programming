#include <stdio.h>

/**
 * Fizz_Buzz_test - Print all numbers from 1 t 100 and switches
 * multiplies of 3 to fizz and multiplies of 5 to buzz and multiplies
 * of both to FizzBuzz
 *
 * Return: void
*/

void Fizz_Buzz_test(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))

			printf("FizzBuzz ");

		else if ((x % 3 == 0) && (x % 5 != 0))

			printf("Fizz ");

		else if ((x % 5 == 0) && (x % 3 != 0))

			printf("Buzz ");

		else
			printf("%d ", x);
	}
}
