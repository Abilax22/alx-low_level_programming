#include "main.h"

/**
* _puts - this code prints a string to stdout
* @str: the string to print
* _putchar: print a new line
*/

void _puts(char *str)
{
	while (*str)
	{
	_putchar (*str);
	str++;
	}

	_putchar ('\n');
}
