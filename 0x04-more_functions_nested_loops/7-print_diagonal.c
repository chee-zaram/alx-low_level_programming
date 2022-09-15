#include "main.h"

/**
 * print_diagonal - Draws diagonal line on terminal.
 * @n: Number of diagonal lines to be drawn.
 *
 * Return: Returns no value.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
}

