#include "main.h"
/**
 * _isaplha - function checks for alphabetic character
 * @c:character to be checked
 * Return: 1 if c is a letter and return 0 if it is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
