#include "main.h"

/**
 * _print_rev_recursion - this prints a string in a reverse
 * @s: the string
 * return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
