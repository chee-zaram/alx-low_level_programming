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

	x = 1;
	while (x <= size)
	{
		y = 1;
		while (y <= size)
		{
			_putchar('#');
			y++;
		}
		_putchar(10);
		x++;
	}
}

