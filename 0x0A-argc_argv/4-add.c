#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this code adds positive numbers
 * @argc: no of commanf argument
 * @argv: array containing command argument
 * return: (0) if success
 */

int main(int argc, char *argv[])
{
	int e, f, add = 0;

	for (e = 1; e < argc; e++)
	{
		for (f = 0; argv[e][f] != '\0'; f++)
		{
			if (!isdigit(argv[e][f]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[e]);
	}
	printf("%d\n", add);
	return (0);
}
