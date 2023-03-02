#include "main.h"

/**
* _strncat - concats until n
* @dest: the first var
* @src: the seconf var
* @n: the third var
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' || j <= n)
	{
		i++;
		j++;
	}

	return (dest);

}
