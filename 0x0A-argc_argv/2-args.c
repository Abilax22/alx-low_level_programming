#include <stdio.h>

/**
 * main - this code print arguments received
 * @argc: no of command arguments
 * @argv: array containing command argument
 * return: (0) success
 */

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}

	return (0);
}
