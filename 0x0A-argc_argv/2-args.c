#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of arguments passed to main(), including program name.
 * @argv: Pointer to strings.
 *
 * Description: Prints all arguments passed to main(), including program name.
 * Return: Returns 0 if successful.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

