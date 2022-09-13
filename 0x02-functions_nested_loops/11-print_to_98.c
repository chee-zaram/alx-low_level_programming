#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: Takes an integer as argument.
 *
 * Return: no return value specified.
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
				printf("%d\n", x);
			else
				printf("%d, ", x);
		}
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
				printf("%d\n", x);
			else
				printf("%d, ", x);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}

