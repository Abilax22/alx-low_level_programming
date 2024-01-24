#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - this code selects the correct function to perform.
 * @s: operator passed as argument.
 * Return: A pointer to function corresponding
 * to operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};


	int e = 0;


	while (ops[e].op != NULL && *(ops[e].op) != *s)
		e++;


	return (ops[e].f);
}
