#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s \n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close f %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH)

/**
 * main - The start of a program
 *
 * @argc: number of arguments
 *
 * @argv: arguments vector
 *
 * Return: 1 if success 0 if failure
*/

int main(int argc, char **argv)
{
	int f_f = 0, to_f = 0;
	ssize_t x;
	char b[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	f_f = open(argv[1], O_RDONLY);
	if (f_f == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	to_f = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_f == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((x = read(f_f, b, READ_BUF_SIZE)) > 0)
		if (write(to_f, b, x) != x)
			dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	if (x == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	f_f = close(f_f);
	to_f = close(to_f);

	if (f_f)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, f_f), exit(100);

	 if (to_f)
                dprintf(STDERR_FILENO, ERR_NOCLOSE, f_f), exit(100);

	 return (EXIT_SUCCESS);
}
