#include "main.h"

/**
 * print_square - Prints a square of #.
 * @size: Size of the square.
 *
 * Return: No specified return value.
 */
void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}

