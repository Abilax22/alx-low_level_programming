#include "main.h"

/**
* _atoi - this code convert a string into an integer.
* @s: the string
* Return: integer.
*/

int _atoi(char *s)
{
	int sign = 1, v = 0;
	unsigned int res = 0;

	while (!(s[v] <= '9' && s[v] >= '0') && s[v] != '\0')
	{
		if (s[v] == '-')
		sign *= -1;
		v++;
	}
	while (s[v] <= '9' && (s[v] >= '0' && s[v] != '\0'))
	{
		res = (res * 10) + (s[v] - '0');
		v++;
	}
	res *= sign;

	return (res);
}
