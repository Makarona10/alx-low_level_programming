#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds two intgers
  *
  * @a: The first integer
  *
  * @b: The seconed integer
  *
  * Return: Result of sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two intgers
  *
  * @a: The first integer
  *
  * @b: The seconed integer
  *
  * Return: Result of subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two intgers
  *
  * @a: The first integer
  *
  * @b: The seconed integer
  *
  * Return: Result of multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two intgers
  *
  * @a: The first integer
  *
  * @b: The seconed integer
  *
  * Return: result of division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Calculates remainder of the division
  *
  * @a: The first integer
  *
  * @b: The seconed integer
  *
  * Return: result of remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
