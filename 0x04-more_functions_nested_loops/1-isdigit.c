#include "main.h"

/**
 * _isdigit - checks for a digit between 0 and 9
 * @c: the variable to be checked
 * Return: 1 if the digit is there and 0 if its not
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
