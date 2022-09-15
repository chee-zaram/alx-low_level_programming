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
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
