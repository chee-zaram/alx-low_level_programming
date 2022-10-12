#include "3-calc.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments taken by function, including program name.
 * @argv: Array of arguments.
 *
 * Description: Takes in to perform and arithmetic operation.
 * Return: 0 if successful.
 * Exits with code 98 if wrong number of arguments is passed.
 * Exits with code 99 if operator is not found.
 * Exits with code 100 if divisor is 0.
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1 || (argv[2][0] != '+' && argv[2][0] != '-' &&
				argv[2][0] != '*' && argv[2][0] != '/' &&
				argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);

	return (0);
}
