#include "main.h"

int result_pal(char *s, int z, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - this checks if a string is a polindrome
 * @s: reversed string
 * Return: 1 if it is, if not 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (result_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - this return the length of a string
 * @s: string length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * result_pal - this checks the characters recursively
 *  for palindrome
 *  @s: string
 *  @z:iterator
 *  @len: string length
 *  Return: 1 if palindrome, if not 0
 */

int result_pal(char *s, int z, int len)
{
	if (*(s + z) != *(s + len - 1))
		return (0);
	if (z >= len)
		return (1);
	return (result_pal(s, z + 1, len - 1));
}
