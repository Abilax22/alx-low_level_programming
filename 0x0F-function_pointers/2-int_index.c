#include "function_pointers.h"

/**
 * int_index - this code returns index place
 * if the comparison is true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (e = 0; e < size; e++)
	{
		if (cmp(array[e]))
			return (e);
	}
	return (-1);
}
