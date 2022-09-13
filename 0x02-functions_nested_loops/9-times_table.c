#include "main.h"

/**
 * times_table - Prints the 9 times table, from 0.
 * Takes no arguments.
 *
 * Return: No specified return value.
 */

void times_table(void)
{
	int x, y, z;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;
			if (y == 0)
				_putchar(z + 48);
			if (z < 10 && y != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(z + 48);
			}
			if (z >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			y++;
		}
		x++;
		_putchar(10);
	}
}
