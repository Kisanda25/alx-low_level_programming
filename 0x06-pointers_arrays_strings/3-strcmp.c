#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first var
 * @s2: second var
 * Return: 15 or -15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (15);
	}
	if (s2 > s1)
	{
		return (-15);
	}
	else
		return (0);
}
