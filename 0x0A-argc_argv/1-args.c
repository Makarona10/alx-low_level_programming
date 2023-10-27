#include <stdio.h>

#include <stdio.h>

/**
 * main - program prints the number of arguments
 * passed into it
 *
 * @argc: stores the number of command-line arguments passed to the program
 *
 * @argv: array of character pointers that
 * point to the command-line arguments
 *
 * Return: always 0
*/


int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
