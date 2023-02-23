#include "main.h"

/**
 * print_most_numbers - print number between 0 and 9 except 2 and 4
 * Return: always 0;
 */

void print_most_numbers(void)
{
	 int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 || c != 52)
		{
		_putchar(c);
	}
	}
	_putchar('\n');
}
