#include "main.h"

#include <stdlib.h>

/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{

	int **ag;

	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ag = malloc(sizeof(int *) * height);

	if (ag == NULL)

		return (NULL);

	for (x = 0; x < height; x++)

	{

		ag[x] = malloc(sizeof(int) * width);

		if (ag[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ag[x]);
			free(ag);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ag[x][y] = 0;
	}
	return (ag);
}
