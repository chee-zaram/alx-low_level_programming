#include "calc.h"

/**
 * get_op_func - Selects the correct function to perform an operation.
 * @a: First parameter.
 * @b: Second parameter.
 *
 * Return: Returns a pointer to the function that performs the operation.
 */
int (*get_op_func(char *s))(int a, int b)
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

	i = 0;
	while (ops[i].op && ops[i].f)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
