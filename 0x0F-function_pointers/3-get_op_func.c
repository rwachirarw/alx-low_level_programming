#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @s: operator
 * Return: integer
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
	int i;

	/*if (!(s == "+" || s == "-" || s == "*" || s == "/" || s == "%"))
		return (NULL);*/
	i = 0;

	while (ops[i] < 6)
	{
		if (s == ops[i][0])
			return (ops[i]);
		++i;
	}
}
