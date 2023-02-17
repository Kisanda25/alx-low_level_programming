#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - if else and loops
 * Return: Always 0;
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is postive",n);
	}
	else if (n == 0)
	{
		printf("%d is zero",n);
	}
	else
	{
		printf("%d is negative",2);
	}
	return (0);
}
