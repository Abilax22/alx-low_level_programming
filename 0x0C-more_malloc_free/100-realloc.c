#include "main.h"
#include <stdlib.h>

/**
 * _realloc - this code reallocates a memory block using malloc
 * @ptr: former pointer allocated
 * @old_size: old size allocated
 * @new_size: new size allocated
 * Return: pointer of new memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	size_t e, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
			return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (e = 0; e < max; e++)
		pt[e] = oldp[e];
	free(ptr);
	return (pt);
}
