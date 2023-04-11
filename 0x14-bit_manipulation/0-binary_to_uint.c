#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b : pointer to a string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		ans = ans * 2 + (*b - '0');
		b++;
	}
	return (ans);
