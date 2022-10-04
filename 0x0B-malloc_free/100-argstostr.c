#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Pointer to pointer of each argument.
 *
 * Return: Returns a pointer to a new string, NULL if it fails,
 * NULL if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, size = 0;
	char *mptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++, size++)
	{
		for (y = 0; (*(*(av + x) + y)); y++, size++)
			continue;
	}

	mptr = (char *)malloc(sizeof(char) * size + 1);

	if (mptr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++, z++)
	{
		for (y = 0; (*(*(av + x) + y)); y++, z++)
			*(mptr + z) = *(*(av + x) + y);

		*(mptr + z) = '\n';
	}
	*(mptr + z) = '\0';

	return (mptr);
}

