#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Numbers of times _ should be printed.
 *
 * Return: No return value.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}

