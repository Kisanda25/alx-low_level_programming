#include <stdio.h>

/**
 * main - smile in the mirror
 * Return: always 0;
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
	putchar(le);

	putchar('\n');
	return (0);
}
