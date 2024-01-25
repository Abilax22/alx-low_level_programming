#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - this code prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int e = 0;
	char *ptr, *sep = "";

		va_list list;

	va_start(list, format);

		if (format)
	{
		while (format[e])
		{
			switch (format[e])
			{
				case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
				case 'i':
				printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", sep, ptr);
					break;
				default:
					e++;
					continue;
			}
			sep = ", ";
			e++;
		}
	}

	printf("\n");
	va_end(list);
}
