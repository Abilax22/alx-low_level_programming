#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - this code prints numbers,then a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int index;

	va_start(numbs, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbs, int));


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbs);
}
