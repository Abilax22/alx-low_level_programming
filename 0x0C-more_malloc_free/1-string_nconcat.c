#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this code concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: no to concatenate from s2
 * Return: pointer to new allocation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}

	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c + 1] = s2[c];
	s[a + b] = '\0';
	return (s);
}
