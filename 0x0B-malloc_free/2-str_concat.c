#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this code concertenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concat
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len11, a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len11] != '\0')
	{
		len11++;
	}

	ptr = malloc(sizeof(char) * (len1 + len11 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= len2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}
