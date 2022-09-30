#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments including the program name.
 * @argv: Pointer to strings.
 *
 * Description: Adds positive numbers and displays the sum. If no num given,
 * displays 0.
 * Return: Returns 0 if successful. prints "Error" and returns 1 if character
 * not a digit is passed.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += strtol(argv[i], &endptr, BASE);
			if (*endptr != 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}

