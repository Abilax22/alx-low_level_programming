#include "main.h"

/**
* _strcat - this code concatenates two strings
* @dest: entered value
* @src: entered value
* Return: void
*/


char *_strcat(char *dest, char *src)
{
	int e;
	int f;

	e = 0;

	while (dest[e] != '\0')
	{

		e++;
	}
		f = 0;
		while (src[f] != '\0')
		{
			dest[e] = src[f];
			e++;
			f++;
		}

		dest[e] = '\0';

		return (dest);
}
