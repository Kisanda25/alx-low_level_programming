#include <main.h>

/**
* _strcat - used to concat two strings 
* @dest: the first string to be used
* @src: the second string to be used
* Return: we return dest
*/


char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++) {
	dest[i+j] = src[j];
	}
	dest[i+j] = '\0';
	return dest;
}
