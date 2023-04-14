#include <stdio.h>
#include "main.h"
/**
 * read_textfile -function that reads a text file and prints it to the stdout
 * @filename: the file to be read
 * @letters: the number of letter to be read and printed
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
int n;
ssize_t total = 0;
char *buf = malloc(letters);

if (filename == NULL || buf == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file == -1)
{
free(buf);
return (0);
}

while ((n = read(file, buf, letters)) > 0)
{
if (write(STDOUT_FILENO, buf, n) != n)
{
free(buf);
close(file);
return (0);
}
total += n;
}

free(buf);
close(file);

if (n == -1)
{
return (0);
}

return (total);
}
