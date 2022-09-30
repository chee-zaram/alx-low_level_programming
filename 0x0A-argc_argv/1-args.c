#include "main.h"

/**
 * main - Entry point of program.
 * @argc: Number of commandline arguments passed to main(), including name.
 * @argv: Pointer to string.
 *
 * Description: Prints out the number of arguments passed to the program.
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}

