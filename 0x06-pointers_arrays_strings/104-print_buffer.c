#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 * @b: Pointer to buffer to print from.
 * @size: Number of bytes to print from buffer.
 *
 * Return: No specified return value.
 */
void print_buffer(char *b, int size)
{
	int x, y, z, c;

	if (size > 0)
	{
		for (c = 0; c < size; c += 10)
		{
			if ((size - c) < 10)
				y = size - c;
			else
				y = 10;
			printf("%08x: ", c);

			for (x = 0; x < 10; x++)
			{
				if (x < y)
					printf("%02x", *(b + c + x));
				else
					printf("  ");

				if (x % 2)
					printf(" ");
			}

			for (x = 0; x < y; x++)
			{
				z = *(b + c + x);
				if (z < 32 || z > 132)
					z = '.';

				printf("%c", z);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}

