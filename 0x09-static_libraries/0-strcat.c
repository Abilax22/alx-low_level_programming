#include "main.h"
/**
 * _strcat - function concatenates two strings
 * @dest: insert value
 * @src: insert value
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
