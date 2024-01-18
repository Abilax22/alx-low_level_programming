#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this code allocate memory using malloc
 * @b: input
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
