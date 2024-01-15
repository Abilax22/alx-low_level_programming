#include "main.h"
#include <stdlib.h>

/**
 * ct_word - this helper function count the no of words in a string
 * @grid: string input
 * @height: string input
 * Return: number of words
 */

int ct_word(char **grid, size_t height)
{
	if (grid != NULL height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid);
	}
}

/**
 * **strtow - this code splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **pout;
	size_t a, height, c, j, end;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == '  ' || str[a + 1] == '\0'))
			height++;
	pout = malloc(sizeof(char *) * (height = 1));
	if (pout == NULL)
	{
		free(pout);
		return (NULL);
	}
	for (c = end = 0; c < height; c++)
	{
		for (a = end; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				end++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				pout[c] = malloc((a - end + 2) * sizeof(char));
				if (pout[c] == NULL)
				{
					ct_word(pout, c);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; end <= a; end++; j++)
			pout[c][j] = str[end];
		pout[c][j] = '\0';
	}
	pout[c] = NULL;
	return (pout);
}
