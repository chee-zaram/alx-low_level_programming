#include <stdio.h>

/**
 * main - entry point of program
 * no arguments
 *
 * Description: prints all lowercase alphabet except q and e
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++) /* lowercase alpha in ascii */
	{
		if (i == 113 || i == 101) /* except when q or e */
			continue; /* skip to next iteration */
		putchar(i);
	}
	putchar(10);
	return (0);
}

