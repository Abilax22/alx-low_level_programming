#include "main.h"

/**
* _memcpy - this code copies memory area
* @dest: where memory is stored
* @src: where memory is copied
* @n: number of bytes
* Return: copied memory with n byted changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int e = 0;
	int j = n;

	for (; e < j; e++)
	{
		dest[e] = src[e];
		n--;
	}
	return (dest);
}
