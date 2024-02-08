#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int no;

	no = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		no <<= 1;
		if (b[i] == '1')
			no += 1;
	}
	return (no);
}
