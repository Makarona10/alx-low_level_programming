#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: stores the number of command-line arguments passed to the program
 *
 * @argv: array of character pointers that
 * point to the command-line arguments
 *
 * Return: always 1
*/

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
