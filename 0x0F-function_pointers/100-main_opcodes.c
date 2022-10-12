#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of program.
 * @argc: Argument count, program name inclusive.
 * @argv: Array of argument strings.
 *
 * Return: 0 if successful.
 */
int main(int argc, char **argv)
{
	int i, n_bytes;
	char *main_cast;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_cast = (char *)main;
	for (i = 0; i < n_bytes; i++)
	{
		if (i == n_bytes - 1)
		{
			printf("%02hhx\n", main_cast[i]);
			break;
		}
		printf("%02hhx ", main_cast[i]);
	}

	return (0);
}

