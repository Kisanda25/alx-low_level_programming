#include "main.h"

/**
 * _isupper - This functions checks if c is uppercase
 * @c: the variable that is being checked
 * Return: 1 is uppercase and 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
