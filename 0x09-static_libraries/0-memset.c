#include "main.h"
/**
 * _memset - function fills a block of memory with specific value
 * @s: starting address of filled memory
 * @b: desired value
 * @n: number of bytes to change
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
