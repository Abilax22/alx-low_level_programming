#include "main.h"
#include <stdlib.h>

/**
 * *array_range - this code creates an array of integars
 * @min: minimum
 * @max: maximum
 * Return: pointer of memory
 */

int *array_range(int min, int max)
{
	int e, h;
	int *pt;

	if (min > max)
		return (NULL);
	h = max - min + 1;
	pt = malloc(sizeof(int) * h);
	if (pt == NULL)
		return (NULL);
	for (e = 0; e < h; e++)
	{
		pt[e] = min;
		min++;
	}
	return (pt);
}
