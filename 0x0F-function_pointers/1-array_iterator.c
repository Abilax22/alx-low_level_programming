#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - this code prints each array element
 *  on a new line.
 * @array: array
 * @size: number of element to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;


	if (array == NULL || action == NULL)
		return;


	for (e = 0; e < size; e++)
	{
		action(array[e]);
	}
}
