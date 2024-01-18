#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this code allocates the memory for an array
 * @nmemb: no of memory bloc
 * @size: size of element
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	size_t e;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	for (e = 0; e < (nmemb * size); e++)
		pt[e] = 0;
	return (pt);
}
