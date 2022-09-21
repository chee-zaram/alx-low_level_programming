#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * Return: No return value.
 */
void print_number(int n)
{
	int i, abs_v = 0;

	if (n < 0)
	{
		abs_v = n * -1;
		_putchar('-');
	}
	else
	{
		abs_v = n;
	}

	if (abs_v / 10)
	{
		print_number(abs_v / 10);
	}
	_putchar((abs_v % 10) + 48);
}


