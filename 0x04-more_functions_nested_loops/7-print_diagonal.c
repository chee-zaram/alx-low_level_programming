#include "main.h"

/**
 * print_diagonal - Draws diagonal line on terminal.
 * @n: Number of diagonal lines to be drawn.
 *
 * Return: Returns no value.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			y = 1;
			while (y <= x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			_putchar('\\');
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

