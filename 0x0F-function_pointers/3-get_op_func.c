#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - This file should contain the function that selects the correct
 * function to perform the operation asked by the user.
 * @s: is the operator passed as argument to the program
 * Return: operation asked by user
 * Description: This function returns a pointer to the function that
 * corresponds to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
