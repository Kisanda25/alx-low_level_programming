#include "search_algos.h"

/**
 * binary_search - searches for element by work on half the array`
 * @array: points to first element
 * @size: number of elements in array
 * @value: value we are searching for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int bottom, mid, top;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	bottom = 0;
	top = size - 1;

	while (bottom <= top)
	{
		mid = (bottom + top) / 2;

		printf("Searching in array: ");
		for (i = bottom; i <= top; i++)
			printf("%i%s", array[i], i == top ? "\n" : ", ");

		if (array[mid] < value)
			bottom = mid + 1;
		else if (array[mid] > value)
			top = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
