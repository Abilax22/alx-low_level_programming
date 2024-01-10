#include "main.h"

/**
 * _strlen_recursion - this return the lenth of a given string
 * @s: the given string
 * Return: the length of the given string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
