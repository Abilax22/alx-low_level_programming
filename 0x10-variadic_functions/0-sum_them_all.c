#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - this code returns sum of all its paramters.
 * @n: number of paramters passed to function.
 * @...: variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 * else - sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int e, sum = 0;


	va_start(ab, n);

	for (e = 0; e < n; e++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}
