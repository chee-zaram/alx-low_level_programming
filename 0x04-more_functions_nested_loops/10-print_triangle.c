#include "main.h"

/**
 * print_triangle - Prints a triangle of #.
 * @size: Size of the triangle.
 *
 * Return: No return value.
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y < (size - x))
				{
					_putchar(' ');
					continue;
				}
				_putchar('#');
			}
			_putchar(10);
		}
	}
}

