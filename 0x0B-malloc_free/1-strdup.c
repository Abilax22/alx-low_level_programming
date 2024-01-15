#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this code returns a pointer to a new allocated
 * memory
 * @str: char
 * Return: pointer to the allocated memory
 */

char *_strdup(char *str)
{
	char *ptr;
	size_t i, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (l = 0; l <= i; l++)
	{
		ptr[l] = str[l];
	}
	return (ptr);
}
