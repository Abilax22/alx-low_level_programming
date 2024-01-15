#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this code represent main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, n, y = 0, z = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			z++;
	}
	z += ac;

	str = malloc(sizeof(char) * z + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
	{
		str[y] = av[a][n];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}

	return (str);
}
