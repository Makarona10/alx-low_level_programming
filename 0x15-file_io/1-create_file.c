#include "main.h"

/**
* get_len - gets the length of a string
*
* @s: The string input to calculate the length of
*
* Return: The length of a string
*/

int get_len(char *s)
{
	int x = 0;

	if (s != NULL)
	{
		while (s[x++])
			;
	}
	return (x - 1);
}

/**
 * create_file - creates a file
 *
 * @filename: a file's name
 *
 * @text_content: text will be written into file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0,
		len = get_len(text_content);

	if (!filename)
		return (-1);

	f = open(filename, O_WRONGLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
		return (-1);

	if (len)
		b = write(f, text_content, len);

	close(f);
	return (b == len ? 1 : -1);
}
