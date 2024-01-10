#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - this reveal if an integer is a prime
 * number or is not
 * @n: Evaluation number
 * Return: 1 if n is a prime number, if not 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - this calculate if a number is prime
 * recursion
 * @n: evaluation number
 * @a: iterator
 * Return: 1 if n is prime, if not 0
 */

int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
