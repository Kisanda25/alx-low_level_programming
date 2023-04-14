#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the file to create
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int file, bytes, size;

	if (filename == NULL)
	return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	return (-1);

	if (text_content != NULL)
	{
	size = strlen(text_content);
	bytes = write(file, text_content, size);
	if (bytes == -1 || bytes != size)
	{
	close(file);
	return (-1);
	}
}

close(file);
return (1);
}

