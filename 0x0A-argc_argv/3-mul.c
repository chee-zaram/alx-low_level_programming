#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments passed to main(), including program name.
 * @argv: Pointer to strings.
 *
 * Description: Multiplies two numbers passed as arguments to main(),
 * and prints the result.
 * Return: Returns 0 if successful. Prints "Error", and returns 1 if program
 * does not receive 2 numbers.
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < 3; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


