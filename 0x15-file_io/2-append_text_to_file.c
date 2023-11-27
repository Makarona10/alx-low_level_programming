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
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: A file's name
 *
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0,
		len = get_len(text_content);

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (len)
		b = write(f, text_content, len);
	close(f);

	return (b == len ? 1 : -1);
}
