#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - this return the natural square root of a given number
 * @n: number to get the square root
 * Return: square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - this recurse to obtain the natural square root a the number
 * @n: number to get the square root
 * @i: iterator
 * Return: sqaure root result
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
