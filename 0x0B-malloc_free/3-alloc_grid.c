#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this code nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to two arrays
 */

int **alloc_grid(int width, int height)
{
	int **lee;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	lee = malloc(sizeof(int *) * height);

	if (lee == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		lee[a] = malloc(sizeof(int) * width);

		if (lee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(lee[a]);
			free(lee);
			{
				return (NULL);
			}
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)

			lee[a][b] = 0;
	}

	return (lee);
}
