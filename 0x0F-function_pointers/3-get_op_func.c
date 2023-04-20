
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - gets the arithmetic operation to be performed by user
 * @s: argument for the operator
 * Return: The function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	/*Performs the right operation indicated by the user*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int t = 0;

	while (ops[t].op != NULL && *(ops[t].op) != *s)
		t++;

	return (ops[t].f);
}

