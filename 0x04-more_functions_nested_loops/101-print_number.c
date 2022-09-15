#include "main.h"

int _abs(int x);

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * Return: No return value.
 */
void print_number(int n)
{
	int abs_v;

	if (n >= 0 && n <= 9)
		_putchar(n + 48);
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(((n / 10) / 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar((((n / 10) / 10) / 10) + 48);
		_putchar((((n / 10) / 10) % 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n < 0)
	{
		_putchar('-');
		abs_v = _abs(n);
		_putchar((abs_v / 10) + 48);
		_putchar((abs_v % 10) + 48);
	}
}

/**
 * _abs - Computes the absolute value of an integer.
 * @x: Integer to be operated on.
 *
 * Return: Absolute value of x.
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}

