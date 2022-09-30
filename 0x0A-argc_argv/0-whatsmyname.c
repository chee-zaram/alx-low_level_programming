#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments passed to main(), including program name.
 * @argv: Pointer to array of strings, each being an argument passed to main.
 *
 * Description: Prints the program name, that is first argument.
 * Return: 0 if successful.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	if (1)
		printf("%s\n", *argv);
	return (0);
}

