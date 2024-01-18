#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - this code checks string contains non-digit character
 * @s: string
 * Return: 0 found non-digit and 1 digit is found
 */

int is_digit(char *s)
{
	int e = 0;

	while (s[e])
	{
		if (s[e] < '0' || s[e] > '9')
			return (0);
		e++;
	}
	return (1);
}

/**
 * _strlen - this code returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	{
		e++;
	}
	return (e);
}

/**
 * error - this handle main errors
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - this code multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, e, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len)
		if (!result)
			return (1);
	for (e = 0; e <= len1 + len2; e++)
		result[e] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len] - '0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	for (e = 0; e < len - 1; e++)
	{
		if (result[e])
			b = 1;
		if (b)
			_putchar(result[e] + '\0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result)
		return (0);
}
