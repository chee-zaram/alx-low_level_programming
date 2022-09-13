#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @x: Integer for which last digit should be displayed.
 *
 * Return: Returns last digit of x.
 */
int print_last_digit(int x)
{
	int l, abs_l;

	l = x % 10;
	abs_l = _abs(l);
	_putchar(abs_l + 48);

	return (abs_l);
}

