#include "main.h"
#include <stdlib.h>

/**
 * create_array - this code create an array of charaters
 * @size: input of array size (int)
 * @c: string character stored
 * Return: pointer to base character c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pt;

	if (size == 0)
	{
		return (NULL);
	}

	pt = malloc(size * sizeof(char));
	if (pt == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		pt[i] = c;
	}
	return (pt);
}
