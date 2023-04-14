#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w_bytes;
	ssize_t len;

	if (filename == NULL)
	return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	return (-1);

	if (text_content != NULL)
	{
	len = 0;

	while (text_content[len])
	len++;

	w_bytes = write(file, text_content, len);

	if (w_bytes != len)
	{
	close(file);
	return (-1);
	}
	}

	close(file);
	return (1);
}
