#include <stdio.h>

/**
 * main - this code prints the number of arguments pass into it
 * @argc: number of command argument
 * @argv: array that contains the command line
 * return: (0) success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
