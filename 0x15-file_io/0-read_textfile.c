#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: The name of a file
 *
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read or 0 if failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t x;
	char b[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	x = read(fd, &b[0], letters);
	x = write(STDOUT_FILENO, &b[0], x);

	close(f);
	return(x);

}
