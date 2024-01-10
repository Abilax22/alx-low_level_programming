#include "main.h"

/**
 * factorial - this returns the factorial of a given number
 * @n: the factorial number to return
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
