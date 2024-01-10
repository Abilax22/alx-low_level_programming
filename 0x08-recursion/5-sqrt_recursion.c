#include "main.h"

int actual_sqrt_recursion(int n, int a, int b);

/**
 * _sqrt_recursion - this return the natural
 * square root of a given number
 * @n: number to get the square root
 * Return: square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0, n));
}

/**
 * actual_sqrt_recursion - this recurse to obtain the natural
 * square root a the number
 * @n: number to get the square root
 * @a: start number
 * @b: end number
 * Return: sqaure root result
 */

int actual_sqrt_recursion(int n, int a, int b)
{
	if (a > b)
		return (-1);
	int mid = a + (b - a) / 2;

	if (mid * mid == n)
		return (mid);
	if (mid * mid < n)
		return (actual_sqrt_recursion(n,  mid + 1, b));
	return (actual_sqrt_recursion(n, a, mid - 1));
}
