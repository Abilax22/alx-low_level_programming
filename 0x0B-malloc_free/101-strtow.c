#include <stdlib.h>
#include "main.h"

/**
 * count_word - this helper function count the no of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, y, z;

	flag = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			flag = 0;

		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - this code splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **trix, *ptr;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}
	trix = (char **) malloc(sizeof(char *) * (words + 1));
	if (trix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				ptr = (char *) malloc(sizeof(char) * (c + 1));
				if (ptr == NULL)
				{
					return (NULL);
				}
				while (start < end)
					*ptr++ = str[start++];
				*ptr = '\0';
				trix[j] = ptr - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	trix[j] = NULL;
	return (trix);
}
