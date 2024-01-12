#include <stdio.h>

/**
* main - this prints the name of the program
* then a new line
* @argc: number of arguments
* @argv: array of arguments command
* Return: Always 0 (Success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
